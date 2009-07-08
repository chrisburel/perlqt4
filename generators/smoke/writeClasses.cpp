/*
    Generator for the SMOKE sources
    Copyright (C) 2009 Arno Rehn <arno@arnorehn.de>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QMap>
#include <QSet>
#include <QTextStream>

#include <type.h>

#include "globals.h"
#include "../../options.h"

SmokeClassFiles::SmokeClassFiles(SmokeDataFile *data)
    : m_smokeData(data)
{
}

void SmokeClassFiles::write()
{
    write(m_smokeData->includedClasses);
}

void SmokeClassFiles::write(const QList<QString>& keys)
{
    // how many classes go in one file
    int count = keys.count() / Options::parts;
    int count2 = count;
    
    for (int i = 0; i < Options::parts; i++) {
        QSet<QString> includes;
        QString classCode;
        QTextStream classOut(&classCode);
        
        // write the class code to a QString so we can later prepend the #includes
        if (i == Options::parts - 1) count2 = -1;
        foreach (const QString& str, keys.mid(count * i, count2)) {
            const Class* klass = &classes[str];
            includes.insert(klass->fileName());
            writeClass(classOut, klass, str, includes);
        }
        
        // create the file
        QFile file(Options::outputDir.filePath("x_" + QString::number(i + 1) + ".cpp"));
        file.open(QFile::ReadWrite | QFile::Truncate);

        QTextStream fileOut(&file);
        
        // write out the header
        fileOut << "//Auto-generated by " << QCoreApplication::arguments()[0] << ". DO NOT EDIT.\n";
        fileOut << "#include <smoke.h>\n#include <" << Options::module << "_smoke.h>\n";

        // ... and the #includes
        QList<QString> sortedIncludes = includes.toList();
        qSort(sortedIncludes.begin(), sortedIncludes.end());
        foreach (const QString& str, sortedIncludes) {
            if (str.isEmpty())
                continue;
            fileOut << "#include <" << str << ">\n";
        }

        // now the class code
        fileOut << "\n" << classCode;
        
        file.close();
    }
}

void SmokeClassFiles::generateMethod(QTextStream& out, const QString& className, const QString& smokeClassName,
                                     const Method& meth, int index, QSet<QString>& includes)
{
    out << "    ";
    if (meth.flags() & Method::Static)
        out << "static ";
    out << QString("void x_%1(Smoke::Stack x) {\n").arg(index);
    out << "        // " << meth.toString() << "\n";
    out << "        ";
    
    if (meth.isConstructor()) {
        out << smokeClassName << "* xret = new " << smokeClassName << "(";
    } else {
        const Function* func = Util::globalFunctionMap[&meth];
        if (func)
            includes.insert(func->fileName());
        
        if (meth.type()->getClass())
            includes.insert(meth.type()->getClass()->fileName());
        
        if (meth.type()->isFunctionPointer())
            out << meth.type()->toString("xret") << " = ";
        else if (meth.type() != Type::Void)
            out << meth.type()->toString() << " xret = ";
        
        if (!(meth.flags() & Method::Static))
            out << "this->";
        if (!(meth.flags() & Method::PureVirtual) && !func) {
            // dynamic dispatch for virtuals
            out << className << "::";
        } else if (func) {
            if (!func->nameSpace().isEmpty())
                out << func->nameSpace() << "::";
        }
        out << meth.name() << "(";
    }
    
    for (int j = 0; j < meth.parameters().count(); j++) {
        const Parameter& param = meth.parameters()[j];
        
        if (param.type()->getClass())
            includes.insert(param.type()->getClass()->fileName());
        
        if (j > 0) out << ",";
        
        QString field = Util::stackItemField(param.type());
        QString typeName = param.type()->toString();
        if (field == "s_class" && (param.type()->pointerDepth() == 0 || param.type()->isRef()) && !param.type()->isFunctionPointer()) {
            // references and classes are passed in s_class
            typeName.append('*');
            out << '*';
        }
        // casting to a reference doesn't make sense in this case
        if (param.type()->isRef() && !param.type()->isFunctionPointer()) typeName.replace('&', "");
        out << "(" << typeName << ")" << "x[" << j + 1 << "]." << field;
    }
    
    // if the method has any other default parameters, append them here as values, so 
    
    if (Util::defaultParameterValues.contains(&meth)) {
        QStringList defaultParams = Util::defaultParameterValues[&meth];
        if (meth.parameters().count() > 0)
            out << "," ;
        out << defaultParams.join(",");
    }
    
    out << ");\n";
    if (meth.type() != Type::Void) {
        out << "        x[0]." << Util::stackItemField(meth.type()) << " = " << Util::assignmentString(meth.type(), "xret") << ";\n";
    } else {
        out << "        (void)x; // noop (for compiler warning)\n";
    }
    
    out << "    }\n";
    if (meth.isConstructor()) {
        out << "    explicit " << smokeClassName << '(';
        QStringList x_list;
        for (int i = 0; i < meth.parameters().count(); i++) {
            if (i > 0) out << ", ";
            out << meth.parameters()[i].type()->toString() << " x" << QString::number(i + 1);
            x_list << "x" + QString::number(i + 1);
        }
        out << ") : " << meth.getClass()->name() << '(' << x_list.join(", ") << ") {}\n";
    }
}

void SmokeClassFiles::generateGetAccessor(QTextStream& out, const QString& className, const Field& field,
                                          const Type* type, int index)
{
    out << "    ";
    QString fieldName;
    if (field.flags() & Field::Static) {
        out << "static ";
    } else {
        fieldName = "this->";
    }
    fieldName += className + "::" + field.name();
    out << "void x_" << index << "(Smoke::Stack x) {\n"
        << "        // " << field.toString() << "\n"
        << "        x[0]." << Util::stackItemField(type) << " = "
            << Util::assignmentString(type, fieldName) << ";\n"
        << "    }\n";
}

void SmokeClassFiles::generateSetAccessor(QTextStream& out, const QString& className, const Field& field,
                                          const Type* type, int index)
{
    out << "    ";
    QString fieldName;
    if (field.flags() & Field::Static) {
        out << "static ";
    } else {
        fieldName = "this->";
    }
    fieldName += className + "::" + field.name();
    out << "void x_" << index << "(Smoke::Stack x) {\n"
        << "        // " << field.toString() << "=\n"
        << "        " << fieldName << " = ";
    QString unionField = Util::stackItemField(type);
    QString cast = type->toString();
    cast.replace("&", "");
    if (unionField == "s_class" && type->pointerDepth() == 0) {
        out << '*';
        cast += '*';
    }
    out << '(' << cast << ')' << "x[1]." << unionField << ";\n";
    out << "    }\n";
}

void SmokeClassFiles::generateEnumMemberCall(QTextStream& out, const QString& className, const QString& member, int index)
{
    out << "    static void x_" << index << "(Smoke::Stack x) {\n"
        << "        x[0].s_enum = (long)";
    
    if (!className.isEmpty())
        out  << className << "::";
    
    out << member << ";\n"
        << "    }\n";
}

void SmokeClassFiles::generateVirtualMethod(QTextStream& out, const QString& className, const Method& meth, QSet<QString>& includes)
{
    QString x_params, x_list;
    QString type = meth.type()->toString();
    if (meth.type()->getClass())
        includes.insert(meth.type()->getClass()->fileName());
    
    out << "    virtual " << type << " " << meth.name() << "(";
    for (int i = 0; i < meth.parameters().count(); i++) {
        if (i > 0) { out << ", "; x_list.append(", "); }
        const Parameter& param = meth.parameters()[i];
        
        if (param.type()->getClass())
            includes.insert(param.type()->getClass()->fileName());
        
        out << param.type()->toString() << " x" << i + 1;
        x_params += QString("        x[%1].%2 = %3;\n")
            .arg(QString::number(i + 1)).arg(Util::stackItemField(param.type()))
            .arg(Util::assignmentString(param.type(), "x" + QString::number(i + 1)));
        x_list += "x" + QString::number(i + 1);
    }
    out << ") ";
    if (meth.isConst())
        out << "const ";
    out << "{\n";
    out << QString("        Smoke::StackItem x[%1];\n").arg(meth.parameters().count() + 1);
    out << x_params;
    if (meth.flags() & Method::PureVirtual) {
        out << QString("        this->_binding->callMethod(%1, (void*)this, x, true /*pure virtual*/);\n").arg(m_smokeData->methodIdx[&meth]);
        if (meth.type() != Type::Void) {
            QString field = Util::stackItemField(meth.type());
            if (meth.type()->pointerDepth() == 0 && field == "s_class") {
                QString tmpType = type;
                if (meth.type()->isRef()) tmpType.replace('&', "");
                tmpType.append('*');
                out << "        " << tmpType << " xptr = (" << tmpType << ")x[0].s_class;\n";
                out << "        " << type << " xret(*xptr);\n";
                out << "        delete xptr;\n";
                out << "        return xret;\n";
            } else {
                out << QString("        return (%1)x[0].%2;\n").arg(type, Util::stackItemField(meth.type()));
            }
        }
    } else {
        out << QString("        if (this->_binding->callMethod(%1, (void*)this, x)) ").arg(m_smokeData->methodIdx[&meth]);
        if (meth.type() == Type::Void) {
            out << "return;\n";
        } else {
            QString field = Util::stackItemField(meth.type());
            if (meth.type()->pointerDepth() == 0 && field == "s_class") {
                QString tmpType = type;
                if (meth.type()->isRef()) tmpType.replace('&', "");
                tmpType.append('*');
                out << "{\n";
                out << "            " << tmpType << " xptr = (" << tmpType << ")x[0].s_class;\n";
                out << "            " << type << " xret(*xptr);\n";
                out << "            delete xptr;\n";
                out << "            return xret;\n";
                out << "        }\n";
            } else {
                out << QString("return (%1)x[0].%2;\n").arg(type, Util::stackItemField(meth.type()));
            }
        }
        out << "        ";
        if (meth.type() != Type::Void)
            out << "return ";
        out << QString("this->%1::%2(%3);\n").arg(className).arg(meth.name()).arg(x_list);
    }
    out << "    }\n";
}

void SmokeClassFiles::writeClass(QTextStream& out, const Class* klass, const QString& className, QSet<QString>& includes)
{
    const QString underscoreName = QString(className).replace("::", "__");
    const QString smokeClassName = "x_" + underscoreName;

    QString switchCode;
    QTextStream switchOut(&switchCode);

    out << QString("class %1").arg(smokeClassName);
    if (!klass->isNameSpace())
        out << QString(" : public %1").arg(className);
    out << " {\n";
    if (Util::canClassBeInstanciated(klass)) {
        out << "    SmokeBinding* _binding;\n";
        out << "public:\n";
        out << "    void x_0(Smoke::Stack x) {\n";
        out << "        // set the smoke binding\n";
        out << "        _binding = (SmokeBinding*)x[1].s_class;\n";
        out << "    }\n";
        
        switchOut << "        case 0: xself->x_0(args);\tbreak;\n";
    } else {
        out << "public:\n";
    }
    
    int xcall_index = 1;
    
    foreach (const Method& meth, klass->methods()) {
        if (meth.access() == Access_private || meth.isDestructor())
            continue;
        switchOut << "        case " << xcall_index << ": " << (meth.flags() & Method::Static ? smokeClassName + "::" : "xself->") << "x_"
                  << xcall_index << "(args);\tbreak;\n";
        if (Util::fieldAccessors.contains(&meth)) {
            // accessor method?
            const Field* field = Util::fieldAccessors[&meth];
            if (meth.name().startsWith("set")) {
                generateSetAccessor(out, className, *field, meth.parameters()[0].type(), xcall_index);
            } else {
                generateGetAccessor(out, className, *field, meth.type(), xcall_index);
            }
        } else {
            generateMethod(out, className, smokeClassName, meth, xcall_index, includes);
        }
        xcall_index++;
    }
    
    QString enumCode;
    QTextStream enumOut(&enumCode);
    const Enum* e = 0;
    bool enumFound = false;
    foreach (const BasicTypeDeclaration* decl, klass->children()) {
        if (!(e = dynamic_cast<const Enum*>(decl)))
            continue;
        if (e->access() == Access_private || !e->isValid())
            continue;
        enumFound = true;
        
        // xenum_operation method code
        QString enumString = e->toString();
        enumOut << "        case " << m_smokeData->typeIndex[&types[enumString]] << ": //" << enumString << '\n';
        enumOut << "            switch(xop) {\n";
        enumOut << "                case Smoke::EnumNew:\n";
        enumOut << "                    xdata = (void*)new " << enumString << ";\n";
        enumOut << "                    break;\n";
        enumOut << "                case Smoke::EnumDelete:\n";
        enumOut << "                    delete (" << enumString << "*)xdata;\n";
        enumOut << "                    break;\n";
        enumOut << "                case Smoke::EnumFromLong:\n";
        enumOut << "                    *(" << enumString << "*)xdata = (" << enumString << ")xvalue;\n";
        enumOut << "                    break;\n";
        enumOut << "                case Smoke::EnumToLong:\n";
        enumOut << "                    xvalue = (long)*(" << enumString << "*)xdata;\n";
        enumOut << "                    break;\n";
        enumOut << "            }\n";
        enumOut << "            break;\n";
        
        foreach (const EnumMember& member, e->members()) {
            switchOut << "        case " << xcall_index << ": " << smokeClassName <<  "::x_" << xcall_index << "(args);\tbreak;\n";
            if (e->parent())
                generateEnumMemberCall(out, className, member.name(), xcall_index++);
            else
                generateEnumMemberCall(out, e->nameSpace(), member.name(), xcall_index++);
        }
    }
    
    // virtual method callbacks for classes that can't be instanciated aren't useful
    if (Util::canClassBeInstanciated(klass)) {
        QSet<QString> virtMeths;    // virtual methods that already have been taken care of
        QList<const Method*> pureVirtuals;
        foreach (const Method& meth, klass->methods()) {
            // if there are default parameters, it's not the 'original' method.. skip it
            if (Util::defaultParameterValues.contains(&meth))
                continue;
            // first, generate all virtual methods of this class. inherited ones come after that.
            if (((meth.flags() & Method::Virtual) || (meth.flags() & Method::PureVirtual)) && !meth.isDestructor()) {
                generateVirtualMethod(out, className, meth, includes);
                virtMeths.insert(meth.toString(false, false, false));
            }
        }
        
        QList<const Method*> inheritedVirtuals;
        foreach (const Class::BaseClassSpecifier& bspec, klass->baseClasses()) {
            // now collect all virtual methods of the base classes
            inheritedVirtuals.append(Util::collectVirtualMethods(bspec.baseClass));
        }
        
        foreach (const Method* meth, inheritedVirtuals) {
            if (Util::defaultParameterValues.contains(meth))
                continue;
            if (meth->flags() & Method::PureVirtual) {
                // postpone pure virtuals to see if they have been overridden
                pureVirtuals << meth;
                continue;
            }
            
            QString methString = meth->toString(false, false, false);
            if (virtMeths.contains(methString))
                continue;
            const Method *m = 0;
            if ((m = Util::isVirtualOverriden(*meth, klass)) && m->access() == Access_private) {
                // if the method was overriden and put under private access, skip it.
                virtMeths.insert(methString);
                continue;
            }
            generateVirtualMethod(out, className, *meth, includes);
            virtMeths.insert(methString);
        }
        foreach (const Method* meth, pureVirtuals) {
            QString methString = meth->toString(false, false, false);
            // Check if the pure virtual was overriden somewhere - then we shouldn't generate a callback with the pure virtual flag set
            // (as it isn't, anymore).
            // If the overriding method was declared virtual, too, we find it in virtMeths. Then it's already generated and we can continue.
            // If it hasn't, we have to go looking for it. If we find it, generate a normal virtual method for it.
            if (virtMeths.contains(methString))
                continue;
            const Method* m = 0;
            if ((m = Util::isVirtualOverriden(*meth, klass))) {
                if (m->access() != Access_private) {
                    Method virt = *m;
                    virt.setFlag(Method::Virtual);
                    generateVirtualMethod(out, className, virt, includes);
                }
                virtMeths.insert(methString);
            } else {
                // we didn't find any overriding method - generate a pure virtual one
                generateVirtualMethod(out, className, *meth, includes);
                virtMeths.insert(methString);
            }
        }
    }
    
    // this class contains enums, write out an xenum_operation method
    if (enumFound) {
        out << "    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {\n";
        out << "        switch(xtype) {\n";
        out << enumCode;
        out << "        }\n";
        out << "    }\n";
    }
    
    // destructor
    // if the class can't be instanciated, a callback when it's deleted is unnecessary
    if (Util::canClassBeInstanciated(klass))
        out << "    ~" << smokeClassName << QString("() { this->_binding->deleted(%1, (void*)this); }\n").arg(m_smokeData->classIndex[className]);    
    out << "};\n";
    
    if (enumFound) {
        out << "void xenum_" << underscoreName << "(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {\n";
        out << "    " << smokeClassName << "::xenum_operation(xop, xtype, xdata, xvalue);\n";
        out << "}\n";
    }
    
    // xcall_class function
    out << "void xcall_" << underscoreName << "(Smoke::Index xi, void *obj, Smoke::Stack args) {\n";
    out << "    " << smokeClassName << " *xself = (" << smokeClassName << "*)obj;\n";
    out << "    switch(xi) {\n";
    out << switchCode;
    if (Util::hasClassPublicDestructor(klass))
        out << "        case " << xcall_index << ": delete (" << className << "*)xself;\tbreak;\n";
    out << "    }\n";
    out << "}\n";
}
