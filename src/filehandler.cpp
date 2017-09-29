#include "filehandler.h"

FileHandler::FileHandler() : fileUploadUI(new Ui::FileUploadUI) {
    fileUploadUI->setupUi(this);
    this->show();
    setUpControls();
}

FileHandler::~FileHandler() {

}

void FileHandler::chooseFile() {
    QString fileName =  QFileDialog::getOpenFileName(0, QObject::tr("Open XML File 1"), "/home", QObject::tr("XML Files (*.xml)"));
    QFileInfo qInfo(fileName);
    fileUploadUI->labelFileName->setText(qInfo.fileName());
}

void FileHandler::parseAndSaveFile() {
    // TBD
}

void FileHandler::setUpControls(){
    QObject::connect(fileUploadUI->buttonChoose, SIGNAL (clicked()), this, SLOT (chooseFile()));
    QObject::connect(fileUploadUI->buttonUploadFile, SIGNAL (clicked()), this, SLOT (parseAndSaveFile()));
}
