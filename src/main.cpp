#include "uihandler.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    UIHandler w;
    //w.resize(500, 675);
    w.setWindowTitle("VocabBuilder demonstrator");
    w.show();
    return a.exec();
}
