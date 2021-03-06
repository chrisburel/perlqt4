#!/usr/bin/perl

use strict;
use warnings;
use QtCore4;
use QtGui4;
use MainWindow;
use QueriesResources;

sub main
{
    my $app = Qt::Application(\@ARGV);
    my $mainWindow = MainWindow();

    $mainWindow->show();
    return $app->exec();
}

exit main();
