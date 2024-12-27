#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    text = new QPlainTextEdit(this);
    setCentralWidget(text);
    MainMenuBar();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete text;
}

void MainWindow::MainMenuBar(){
    //Menu
    File = menuBar()->addMenu("File");
    Edit = menuBar()->addMenu("Edit");
    View = menuBar()->addMenu("View");
    Help = menuBar()->addMenu("Help");

    //Actions For File
    NewTab = new QAction();
    NewTab->setText("New Tab\tCtrl+N");

    NewWindow = new QAction();
    NewWindow->setText("New Window\tCtrl+Shift+N");

    Open = new QAction();
    Open->setText("Open\tCtrl+O");

    Save = new QAction();
    Save->setText("Save\tCtrl+S");

    SaveAs = new QAction();
    SaveAs->setText("Save As\tCtrl+Shift+S");

    SaveAll = new QAction();
    SaveAll->setText("Save All\tCtrl+Alt+S");

    PageSetup = new QAction();
    PageSetup->setText("Page Setup");

    Print = new QAction();
    Print->setText("Print\tCtrl+P");

    CloseTab = new QAction();
    CloseTab->setText("Close Tab\nCtrl+W");

    CloseWindow = new QAction();
    CloseWindow->setText("Close Window\tCtrl+Shift+W");

    Exit = new QAction();
    Exit->setText("Exit");

    //Actions For Edit
    Undo = new QAction(this);
    Undo->setText("Undo\tCtrl+Z");

    Cut = new QAction(this);
    Cut->setText("Cut\tCtrl+X");

    Copy = new QAction(this);
    Copy->setText("Copy\tCtrl+C");

    Paste = new QAction(this);
    Paste->setText("Paste\tCtrl+V");

    Delete = new QAction(this);
    Delete->setText("Delete\tDel");

    DefineWithBing = new QAction(this);
    DefineWithBing->setText("Define With Bing\tCtrl+E");

    Find = new QAction(this);
    Find->setText("Find\tCtrl+F");

    FindNext = new QAction(this);
    FindNext->setText("Find Next\tF3");

    FindPrevious = new QAction(this);
    FindPrevious->setText("Find Previous\tShift+F3");

    Replace = new QAction(this);
    Replace->setText("Replace\tCtrl+H");

    GoTo = new QAction(this);
    GoTo->setText("Go To\tCtrl+G");

    SelectAll = new QAction(this);
    SelectAll->setText("Select All\tCtrl+A");

    Time_Date = new QAction(this);
    Time_Date->setText("Time/Date\tF5");

    Font = new QAction(this);
    Font->setText("Font");


    //add Action to Menu
    File->addAction(NewTab);
    File->addAction(NewWindow);
    File->addAction(Open);
    File->addAction(Save);
    File->addAction(SaveAs);
    File->addAction(SaveAll);
    File->addAction(PageSetup);
    File->addAction(Print);
    File->addAction(CloseTab);
    File->addAction(CloseWindow);

    //add action for Edit
    Edit->addAction(Undo);
    Edit->addAction(Cut);
    Edit->addAction(Copy);
    Edit->addAction(Paste);
    Edit->addAction(Delete);
    Edit->addAction(DefineWithBing);
    Edit->addAction(Find);
    Edit->addAction(FindNext);
    Edit->addAction(FindPrevious);
    Edit->addAction(Replace);
    Edit->addAction(GoTo);
    Edit->addAction(SelectAll);
    Edit->addAction(Time_Date);
    Edit->addAction(Font);

    //add action for View


    StatusBar = new QAction("Status");
    StatusBar->setText("Status Bar");

    WordWrap = new QAction(this);
    WordWrap->setText("Word Wrap");

    //add actions to Menu

    //We want subViewZoom to aslso expand to house child actions
    SubViewZoom = View->addMenu("Zoom");
    ZoomIn = new QAction("Zoom In\tCtrl+Plus");
    ZoomOut = new QAction("Zoom Out\tCtrl+Minus");
    RestoreDefaultZoom = new QAction("Restore default Zoom\tCtrl+0");
    SubViewZoom->addAction(ZoomIn);
    SubViewZoom->addAction(ZoomOut);
    SubViewZoom->addAction(RestoreDefaultZoom);
    View->addAction(StatusBar);
    View->addAction(WordWrap);

    //Add action for About
    About = new QAction(this);
    About->setText("About");


    //add action to menu
    Help->addAction(About);
}
