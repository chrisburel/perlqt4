package MainWindow;

use strict;
use blib;

use Qt;
use Qt::isa qw( Qt::QMainWindow );
use Qt::slots
    newLetter      => [''],
    save           => [''],
    printSlot      => [''],
    undo           => [''],
    about          => [''],
    insertCustomer => ['QString'],
    addParagraph   => ['QString'];

sub NEW {
    shift->SUPER::NEW(@_);
    my $textEdit = Qt::QTextEdit();
    this->{textEdit} = $textEdit;
    this->setCentralWidget($textEdit);

    createActions();
    createMenus();
    createToolBars();
    createStatusBar();
    createDockWindows();

    this->setWindowTitle("Dock Widgets");

    newLetter();
}

sub newLetter {
    this->{textEdit}->clear();

    my $cursor = Qt::QTextCursor(this->{textEdit}->textCursor());
    $cursor->movePosition(Qt::QTextCursor::Start());
    my $topFrame = $cursor->currentFrame();
    my $topFrameFormat = $topFrame->frameFormat();
    $topFrameFormat->setPadding(16);
    $topFrame->setFrameFormat($topFrameFormat);

    my $textFormat = Qt::QTextCharFormat();
    my $boldFormat = Qt::QTextCharFormat();
    $boldFormat->setFontWeight(Qt::QFont::Bold());
    my $italicFormat = Qt::QTextCharFormat();
    $italicFormat->setFontItalic(1);

    my $tableFormat = Qt::QTextTableFormat();
    $tableFormat->setBorder(1);
    $tableFormat->setCellPadding(16);
    $tableFormat->setAlignment(Qt::Qt::AlignRight());
    $cursor->insertTable(1, 1, $tableFormat);
    $cursor->insertText("The Firm", $boldFormat);
    $cursor->insertBlock();
    $cursor->insertText("321 City Street", $textFormat);
    $cursor->insertBlock();
    $cursor->insertText("Industry Park");
    $cursor->insertBlock();
    $cursor->insertText("Some Country");
    $cursor->setPosition($topFrame->lastPosition());
    $cursor->insertText(Qt::QDate()->currentDate()->toString("d MMMM yyyy"), $textFormat);
    $cursor->insertBlock();
    $cursor->insertBlock();
    $cursor->insertText("Dear ", $textFormat);
    $cursor->insertText("NAME", $italicFormat);
    $cursor->insertText(",", $textFormat);
    for (my $i = 0; $i < 3; ++$i){
        $cursor->insertBlock();
    }
    $cursor->insertText("Yours sincerely,", $textFormat);
    for (my $i = 0; $i < 3; ++$i){
        $cursor->insertBlock();
    }
    $cursor->insertText("The Boss", $textFormat);
    $cursor->insertBlock();
    $cursor->insertText("ADDRESS", $italicFormat);
}

sub printSlot {
    my $document = this->{textEdit}->document();
    my $printer = Qt::QPrinter();

    my $dlg = Qt::QPrintDialog($printer, this);
    if ($dlg->exec() != ${Qt::QDialog::Accepted()}){
        return;
    }

    $document->print($printer);

    this->statusBar()->showMessage("Ready", 2000);
}

sub save {
    my $fileName = Qt::QFileDialog::getSaveFileName(this,
                        "Choose a file name", ".",
                        "HTML (*.html *.htm");
    if (!$fileName) {
        return;
    }
    if (!(open( FH, "> $fileName"))) {
        Qt::QMessageBox::warning(this, "Dock Widgets",
                                 sprintf("Cannot write file %s:\n%s.",
                                 $fileName,
                                 $!));
        return;
    }

    Qt::QApplication::setOverrideCursor(Qt::QCursor(Qt::Qt::WaitCursor()));
    print FH this->{textEdit}->toHtml();
    Qt::QApplication::restoreOverrideCursor();

    this->statusBar()->showMessage("Saved '$fileName'", 2000);
}

sub undo {
    my $document = this->{textEdit}->document();
    $document->undo();
}

sub insertCustomer {
    my ( $customer ) = @_;
    if (!$customer) {
        return;
    }
    my @customerList = split /", "/, $customer;
    my $document = this->{textEdit}->document();
    my $cursor = $document->find('NAME');
    if (!$cursor->isNull()) {
        $cursor->beginEditBlock();
        $cursor->insertText($customerList[0]);
        my $oldcursor = $cursor;
        $cursor = $document->find('ADDRESS');
        if (!$cursor->isNull()) {
            foreach my $i (1..$#customerList) {
                $cursor->insertBlock();
                $cursor->insertText($customerList[$i]);
            }
            $cursor->endEditBlock();
        }
        else {
            $oldcursor->endEditBlock();
        }
    }
}

sub addParagraph {
    my ( $paragraph ) = @_;

    if (!$paragraph) {
        return;
    }
    my $document = this->{textEdit}->document();
    my $cursor = $document->find('Yours sincerely,');
    if ($cursor->isNull()){
        return;
    }
    $cursor->beginEditBlock();
    $cursor->movePosition(Qt::QTextCursor::PreviousBlock(), Qt::QTextCursor::MoveAnchor(), 2);
    $cursor->insertBlock();
    $cursor->insertText($paragraph);
    $cursor->insertBlock();
    $cursor->endEditBlock();
}

sub about {
   Qt::QMessageBox::about(this, "About Dock Widgets",
            "The <b>Dock Widgets</b> example demonstrates how to " .
            "use Qt's dock widgets. You can enter your own text, " .
            "click a customer to add a customer name and " .
            "address, and click standard paragraphs to add them.");
}

sub createActions {
    my $newLetterAct = Qt::QAction(Qt::QIcon("images/new.png"), "&New Letter",
                               this);
    this->{newLetterAct} = $newLetterAct;
    $newLetterAct->setShortcut(Qt::QKeySequence("Ctrl+N"));
    $newLetterAct->setStatusTip("Create a new form letter");
    this->connect($newLetterAct, SIGNAL 'triggered()', this, SLOT 'newLetter()');

    my $saveAct = Qt::QAction(Qt::QIcon("images/save.png"), "&Save...", this);
    this->{saveAct} = $saveAct;
    $saveAct->setShortcut(Qt::QKeySequence("Ctrl+S"));
    $saveAct->setStatusTip("Save the current form letter");
    this->connect($saveAct, SIGNAL 'triggered()', this, SLOT 'save()');

    my $printAct = Qt::QAction(Qt::QIcon("images/print.png"), "&Print...", this);
    this->{printAct} = $printAct;
    $printAct->setShortcut(Qt::QKeySequence("Ctrl+P"));
    $printAct->setStatusTip("Print the current form letter");
    this->connect($printAct, SIGNAL 'triggered()', this, SLOT 'printSlot()');

    my $undoAct = Qt::QAction(Qt::QIcon("images/undo.png"), "&Undo", this);
    this->{undoAct} = $undoAct;
    $undoAct->setShortcut(Qt::QKeySequence("Ctrl+Z"));
    $undoAct->setStatusTip("Undo the last editing action");
    this->connect($undoAct, SIGNAL 'triggered()', this, SLOT 'undo()');

    my $quitAct = Qt::QAction("&Quit", this);
    this->{quitAct} = $quitAct;
    $quitAct->setShortcut(Qt::QKeySequence("Ctrl+Q"));
    $quitAct->setStatusTip("Quit the application");
    this->connect($quitAct, SIGNAL 'triggered()', this, SLOT 'close()');

    my $aboutAct = Qt::QAction("&About", this);
    this->{aboutAct} = $aboutAct;
    $aboutAct->setStatusTip("Show the application's About box");
    this->connect($aboutAct, SIGNAL 'triggered()', this, SLOT 'about()');

    my $aboutQtAct = Qt::QAction("About &Qt", this);
    this->{aboutQtAct} = $aboutQtAct;
    $aboutQtAct->setStatusTip("Show the Qt library's About box");
    this->connect($aboutQtAct, SIGNAL 'triggered()', Qt::qapp(), SLOT 'aboutQt()');
}

sub createMenus {
    my $fileMenu = this->menuBar()->addMenu("&File");
    $fileMenu->addAction(this->{newLetterAct});
    $fileMenu->addAction(this->{saveAct});
    $fileMenu->addAction(this->{printAct});
    $fileMenu->addSeparator();
    $fileMenu->addAction(this->{quitAct});

    my $editMenu = this->menuBar()->addMenu("&Edit");
    $editMenu->addAction(this->{undoAct});

    my $viewMenu = this->menuBar()->addMenu("&View");
    this->{viewMenu} = $viewMenu;

    this->menuBar()->addSeparator();

    my $helpMenu = this->menuBar()->addMenu("&Help");
    $helpMenu->addAction(this->{aboutAct});
    $helpMenu->addAction(this->{aboutQtAct});
}

sub createToolBars {
    my $fileToolBar = this->addToolBar("File");
    $fileToolBar->addAction(this->{newLetterAct});
    $fileToolBar->addAction(this->{saveAct});
    $fileToolBar->addAction(this->{printAct});

    my $editToolBar = this->addToolBar("Edit");
    $editToolBar->addAction(this->{undoAct});
}

sub createStatusBar {
    this->statusBar()->showMessage("Ready");
}

sub createDockWindows {
    my $dock = Qt::QDockWidget("Customers", this);
    $dock->setAllowedAreas(Qt::Qt::LeftDockWidgetArea() | Qt::Qt::RightDockWidgetArea());
    my $customerList = Qt::QListWidget($dock);
    $customerList->addItems( [
            'John Doe, Harmony Enterprises, 12 Lakeside, Ambleton',
            'Jane Doe, Memorabilia, 23 Watersedge, Beaton',
            'Tammy Shea, Tiblanka, 38 Sea Views, Carlton',
            'Tim Sheen, Caraba Gifts, 48 Ocean Way, Deal',
            'Sol Harvey, Chicos Coffee, 53 New Springs, Eccleston',
            'Sally Hobart, Tiroli Tea, 67 Long River, Fedula' ] );
    $dock->setWidget($customerList);
    this->addDockWidget(Qt::Qt::RightDockWidgetArea(), $dock);
    this->{viewMenu}->addAction($dock->toggleViewAction());

    $dock = Qt::QDockWidget("Paragraphs", this);
    my $paragraphsList = Qt::QListWidget($dock);
    $paragraphsList->addItems( [
            'Thank you for your payment which we have received today.',
            'Your order has been dispatched and should be with you '.
               'within 28 days.',
            'We have dispatched those items that were in stock. The '.
               'rest of your order will be dispatched once all the '.
               'remaining items have arrived at our warehouse. No '.
               'additional shipping charges will be made.',
            'You made a small overpayment (less than $5) which we '.
               'will keep on account for you, or return at your request.',
            'You made a small underpayment (less than $1), but we have '.
               "sent your order anyway. We'll add this underpayment to ".
               'your next bill.',
            'Unfortunately you did not send enough money. Please remit '.
               'an additional $. Your order will be dispatched as soon as '.
               'the complete amount has been received.',
            'You made an overpayment (more than $5). Do you wish to '.
               'buy more items, or should we return the excess to you?' ] );
    $dock->setWidget($paragraphsList);
    this->addDockWidget(Qt::Qt::RightDockWidgetArea(), $dock);
    this->{viewMenu}->addAction($dock->toggleViewAction());

    this->connect($customerList, SIGNAL 'currentTextChanged(const QString &)',
                  this, SLOT 'insertCustomer(const QString &)');
    this->connect($paragraphsList, SIGNAL 'currentTextChanged(const QString &)',
                  this, SLOT 'addParagraph(const QString &)');
}

1;
