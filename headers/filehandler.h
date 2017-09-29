#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include<QString>
#include <QMainWindow>
#include <QObject>
#include <QFileDialog>
#include <QFileInfo>
#include "ui_fileuploadui.h"

namespace Ui {
    class FileUploadUI;
}

class FileHandler : public QDialog {
    Q_OBJECT

public:
    FileHandler();
    virtual ~FileHandler();

private:
    QString fileName;
    QString filePath;
    Ui::FileUploadUI *fileUploadUI;


public slots:
    void chooseFile();
    void parseAndSaveFile();
    void setUpControls();

};

#endif // FILEHANDLER_H
