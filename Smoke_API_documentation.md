# Introduction #

The PerlQt4 project is based on the Smoke library.  This page aims to document how the Smoke API works, and how PerlQt4 interfaces with it.

# What is Smoke? #

Smoke was designed to make writing bindings to a given library have a common interface.  It parses a library's header files, and indexes a complete list of methods, classes, and types that are defined by the library.  It also includes a other meta info, like if a method  call is declared static or const, if the method is a constructor or destructor, etc.

Smoke is not Qt specific.  However, it is commonly used to write bindings to the Qt library.

Since Smoke just provides a common interface to a library, it means that multiple language bindings can use the same Smoke object to interface with that library.

# Getting started with Smoke #

When making a method call, regardless of language specific syntax, you're always going to have a method name, an object to operate on, and some arguments.  You pass the object straight to Smoke as a void pointer, but we'll discuss the other two parts next.

## Finding the method index ##

Smoke stores a giant array of methods.  In order to make a method call, you give Smoke the index into this array that corresponds to the method you want to call.  Each index is of type Smoke::Index, which is just typedef'd to a short.  Obviously, most of the time you're just going to know the name of the method, not whatever Smoke's internal index is.  So, Smoke provides the findMethod method:

```
inline ModuleIndex findMethod(const char *c, const char *name)
```

Note that this returns a Smoke::ModuleIndex, not just a Smoke::Index.  The ModuleIndex is defined as:
```
struct ModuleIndex {
    Smoke* smoke;
    Index index;
};
```

However, you can't just give it the class name and the method name.  That's not enough information for Smoke to find the correct method.  You also have to supply Smoke with some information about the number and types of arguments.  This information gets tacked onto the end of the method name, using the following mapping:
|Scalar variable|`$`|
|:--------------|:--|
|Array or hash variable|`@`|
|Object         |`#`|

For instance, if we wanted to instantiate a QLabel with Smoke, we'd first get the Smoke::Index for the "QLabel::QLabel" method.  If we look at the Qt documentation, we can see we can construct a QLabel like so:
```
QLabel ( const QString & text, QWidget * parent = 0, Qt::WindowFlags f = 0 )
```

We already know the class name ("QLabel"), but how do we determine what to pass for the method name/argument info combo?  Well, it starts with the method name, and then there's 3 arguments, a `QString` (scalar), a `QWidget*` (object), and an enum `Qt::WindowFlags` (scalar).  So that's scalar,object,scalar, which corresponds to $#$.  So the method name we pass to findMethod() is "QLabel$#$".

```
Smoke::ModuleIndex mi = smoke->findMethod( "QLabel", "QLabel$#$" );
```

This however does not give us the Smoke::Index we need in order to call a method.  For some methods, the "munged" method name, aka "QLabel$#$" in our example, is not unique enough to resolve to a single method.  These methods require further processing to determine the correct method to call, which is beyond the scope of this intro document.  Just remember for now that the return value can be interpreted as follows:
| Positive number | Single match |
|:----------------|:-------------|
| Zero            | No match     |
| Negative number | Multiple match |

For our purposes, we can continue:
```
Smoke::Index methodIdx;
if ( mi.index > 0 ) {
    methodIdx = smoke->methodMaps[mi.index].method;
}
else {
    // Resolve ambiguous method call
}
```

This gives the index into Smoke's array of methods.

## Building the argument stack ##
To provide arguments to a method, Smoke defines a Smoke::Stack.  A Smoke::Stack is an array of Smoke::StackItem's.  A Smoke::StackItem is defined as a union:
```
union StackItem {
    void* s_voidp;
    bool s_bool;
    signed char s_char;
    unsigned char s_uchar;
    short s_short;
    unsigned short s_ushort;
    int s_int;
    unsigned int s_uint;
    long s_long;
    unsigned long s_ulong;
    float s_float;
    double s_double;
    long s_enum;
    void* s_class;
};
```

One important thing to note is that Smoke uses the Smoke::Stack's 0'th element for the method call's return value.  So, when declaring your Smoke::Stack, you have to give it a size of <number of arguments>+1.

Continuing with our QLabel example, we can construct the Smoke::StackItem like this:

```
Smoke::StackItem stack[4];
stack[1].s_voidp = (void*)"Hello, World!";
// A null value for the parent will construct a top-level widget
stack[2].s_voidp = 0;
// Qt::Dialog is declared in the Qt::WindowType enum and WindowFlags type is a typedef for QFlags<WindowType>. 
stack[3].s_enum = Qt::Dialog;
```

## Making a method call ##
Now we have all the information we need to make a method call.  There's 2 new structs that Smoke defines to keep track of info about methods and classes, and one new typedef we're interested in:
```
struct Method {
    Index classId;         // Index into classes
    Index name;	           // Index into methodNames; real name
    Index args;	           // Index into argumentList
    unsigned char numArgs; // Number of arguments
    unsigned char flags;   // MethodFlags (const/static/etc...)
    Index ret;	           // Index into types for the return type
    Index method;          // Passed to Class.classFn, to call method
};
struct Class {
    const char *className; // Name of the class
    bool external;         // Whether the class is in another module
    Index parents;         // Index into inheritanceList
    ClassFn classFn;       // Calls any method in the class
    EnumFn enumFn;         // Handles enum pointers
    unsigned short flags;  // ClassFlags
};
typedef void (*ClassFn)(Index method, void* obj, Stack args);
```

The Class::classFn element gives a function pointer that actually dispatches the method call for us.  We get that by looking up what class this method call belongs to.  We can then pass our data to that method call.
```
Smoke::Method* m = qt_Smoke->methods + methodIdx;
Smoke::ClassFn fn = qt_Smoke->classes[m->classId].classFn;
fn(m->method, 0, stack);
```

The reason we pass `0` for the 2nd argument in this example is that we're calling a constructor, so we're not operating on an object.

## Getting the return value ##
As mentioned previously, callMethod() will put the return value of the method call on the 0'th element of the Smoke::Stack provided to it.  So to get our QLabel back, we can do this:
```
QLabel* label = (QLabel*)stack[0];
```

## Basic example ##
The full code to construct a QLabel:
```
// Find the method's index
Smoke::ModuleIndex mi = smoke->findMethod( "QLabel", "QLabel$#$" );
Smoke::Index methodIdx;
if ( mi.index > 0 ) {
    methodIdx = smoke->methodMaps[mi.index].method;
}
else {
    // Resolve ambiguous method call
}

// Construct the argument array
Smoke::StackItem stack[4];
stack[1].s_voidp = (void*)new char[14]("Hello, World!");
// A null value for the parent will construct a top-level widget
stack[2].s_voidp = 0;
// Qt::Dialog is declared in the Qt::WindowType enum and WindowFlags type is a typedef for QFlags<WindowType>. 
stack[3].s_enum = Qt::Dialog;

// Call the method
Smoke::Method* m = qt_Smoke->methods + methodIdx;
Smoke::ClassFn fn = qt_Smoke->classes[m->classId].classFn;
fn(m->method, 0, stack);

// Get the return value
QLabel* label = (QLabel*)stack[0];
```