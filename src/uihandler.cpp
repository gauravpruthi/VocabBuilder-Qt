#include "uihandler.h"
#include "ui_uihandler.h"
#include "basedata.h"
#include "dbhandler.h"

UIHandler::UIHandler(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIHandler)
{
    ui->setupUi(this);
    dbHandler = new DBHandler();
    setUpControls();
}

UIHandler::~UIHandler()
{
    delete ui;
}


void UIHandler::setUpControls(){
    ui->radioWord->setChecked(true);
    ui->radioWord->setAutoExclusive(true);

    QObject::connect(ui->buttonClose, SIGNAL (clicked()), this, SLOT (handleCloseButton()));
    QObject::connect(ui->buttonSave, SIGNAL (clicked()), this, SLOT (handleSaveButton()));
    QObject::connect(ui->buttonFetch, SIGNAL (clicked()), this, SLOT (handleFetchButton()));
    QObject::connect(ui->buttonUpdate, SIGNAL (clicked()), this, SLOT (handleUpdateButton()));
    QObject::connect(ui->radioIdiom, SIGNAL (toggled(bool)), this, SLOT (handleIdiomRadioClicked()));
}


void UIHandler::handleCloseButton(){
    QCoreApplication::quit();
}
void UIHandler::handleFetchButton(){
    QCoreApplication::quit();
}

void UIHandler::handleUpdateButton(){
    QCoreApplication::quit();
}

void UIHandler::handleSaveButton(){

    if(ui->fieldWord->text().size() == 0 || ui->fieldMeaning->toPlainText().size() == 0 ) {
        QMessageBox::information(0,"Warning","Either word or meaning is left empty");
        return;
    }
    BaseData b;
    b.setWord(ui->fieldWord->text());
    b.setMeaning(ui->fieldMeaning->toPlainText());
    b.setSynonyms(ui->fieldSyn->text());
    b.setAntonyms(ui->fieldAnt->text());
    b.setExample(ui->fieldEx->toPlainText());
    if(ui->radioWord->isChecked())
        b.type = BaseData::Word;
    else
        b.type = BaseData::Idiom;

    dbHandler->saveData(b);
    clearFields();

}

void UIHandler::clearFields(){
    ui->fieldWord->setText("");
    ui->fieldMeaning->setText("");
    ui->fieldSyn->setText("");
    ui->fieldAnt->setText("");
    ui->fieldEx->setText("");
}

void UIHandler::handleIdiomRadioClicked(){
    if (ui->radioIdiom->isChecked()) {
        ui->labelWord->setText("Idiom");

        ui->fieldSyn->setDisabled(true);
        ui->fieldSyn->setStyleSheet("QLineEdit { background: rgb(206, 222, 226);}");

        ui->fieldAnt->setDisabled(true);
        ui->fieldAnt->setStyleSheet("QLineEdit { background: rgb(206, 222, 226);}");


    }
    else {
        ui->labelWord->setText("Word");

        ui->fieldSyn->setDisabled(false);
        ui->fieldSyn->setStyleSheet("QLineEdit { background: rgb(255, 255, 255);}");

        ui->fieldAnt->setDisabled(false);
        ui->fieldAnt->setStyleSheet("QLineEdit { background: rgb(255, 255, 255);}");

    }
}
