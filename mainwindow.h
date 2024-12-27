#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
    QPlainTextEdit* text;
    void MainMenuBar();

    //Menus
    QMenu* File = nullptr;
    QMenu* Edit = nullptr;
    QMenu* View = nullptr;
    QMenu* Help = nullptr;

    //Actions For File
    QAction *NewTab = nullptr;
    QAction *NewWindow = nullptr;
    QAction *Open = nullptr;
    QAction *Save = nullptr;
    QAction *SaveAs = nullptr;
    QAction *SaveAll = nullptr;
    QAction *PageSetup = nullptr;
    QAction *Print = nullptr;
    QAction *CloseTab = nullptr;
    QAction *CloseWindow = nullptr;
    QAction *Exit = nullptr;

    //Actions For Edit
    QAction* Undo = nullptr;
    QAction* Cut = nullptr;
    QAction* Copy = nullptr;
    QAction* Paste = nullptr;
    QAction* Delete = nullptr;
    QAction* DefineWithBing = nullptr;
    QAction* Find = nullptr;
    QAction* FindNext = nullptr;
    QAction* FindPrevious = nullptr;
    QAction* Replace = nullptr;
    QAction* GoTo = nullptr;
    QAction* SelectAll = nullptr;
    QAction* Time_Date = nullptr;
    QAction* Font = nullptr;


    //Actions For View
    QMenu* SubViewZoom = nullptr;
    QAction* StatusBar = nullptr;
    QAction* WordWrap = nullptr;

    QAction* ZoomIn = nullptr;
    QAction* ZoomOut = nullptr;
    QAction* RestoreDefaultZoom = nullptr;


    //Actions For Help
    QAction* About;
};
#endif // MAINWINDOW_H
