#include "mainwindow.h"

#include <QApplication>
#include <QTabWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon("C:/Users/benja/Desktop/NotePad/Assets/favicon (1).ico"));
    w.setWindowTitle(" ");
    w.show();
    return a.exec();
}
