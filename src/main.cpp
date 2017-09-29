#include "mainwindowhandler.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    MainWindowHandler w;
    //w.resize(500, 675);
    w.setWindowTitle("VocabBuilder");
    w.show();
    return a.exec();
}
