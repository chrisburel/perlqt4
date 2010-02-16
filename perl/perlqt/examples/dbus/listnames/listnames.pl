#!/usr/bin/perl

use strict;
use warnings;
use Qt4;

sub method1
{
    print "Method 1:\n";

    my $reply = Qt4::DBusConnection::sessionBus()->interface()->registeredServiceNames();
    if ( !$reply->isValid ) {
        print 'Error:' . $reply->message() . "\n";
        exit 1;
    }
    foreach my $name ( @{$reply->value()} ) {
        print "$name\n";
    }
}

sub method2
{
    print "Method 2:\n";

    my $bus = Qt4::DBusConnection::sessionBus();
    my $dbus_iface = Qt4::DBusInterface('org.freedesktop.DBus', '/org/freedesktop/DBus',
                              'org.freedesktop.DBus', $bus);
    print
        '("',
        join( '", "', @{$dbus_iface->call('ListNames')->arguments()->[0]->value()} ),
        "\")\n";
    
}

sub method3
{
    print "Method 3:\n";
    print
        '("',
        join( '", "', @{Qt4::DBusConnection::sessionBus()->interface()->registeredServiceNames()->value()} ),
        "\")\n";
}

sub main
{
    my $app = Qt4::CoreApplication(\@ARGV);

    if (!Qt4::DBusConnection::sessionBus()->isConnected()) {
        print STDERR "Cannot connect to the D-Bus session bus.\n" .
                "To start it, run:\n" .
                "\teval \`dbus-launch --auto-syntax\`\n";
        return 1;
    }

    method1();
    method2();
    method3();

    return 0;
}

exit main();
