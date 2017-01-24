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
    BaseData *baseData = new BaseData();
    if(ui->fieldWord->text().size() == 0) {
        QMessageBox::information(0,"Warning","Please enter the word");
        return;
    }
    baseData->setWord(ui->fieldWord->text());
    if(ui->radioIdiom->isChecked()){
        baseData->type = BaseData::Idiom;
    }
    else {
        baseData->type = BaseData::Word;
    }
    dbHandler->fetchData(&baseData);
    if(baseData == NULL) {
        QMessageBox::information(0,"Warning","Word doesn't exist");
        return;
    }
    else {
        // Now that the basedata is full, setup the
        ui->fieldWord->setText(baseData->getWord());
        ui->fieldMeaning->setText(baseData->getMeaning());
        ui->fieldSyn->setText(baseData->getSynonyms());
        ui->fieldAnt->setText(baseData->getAntonyms());
        ui->fieldEx->setText(baseData->getExample());
        //int index = ui->comboBox->findData(baseData->getLevel());
        if(baseData->getLevel() >= 1)
            ui->comboBox->setCurrentIndex(baseData->getLevel()-1);
    }

}

void UIHandler::handleUpdateButton(){
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

    dbHandler->updateData(&b);
    clearFields();

}

void UIHandler::handleSaveButton(){

    if(ui->fieldWord->text().size() == 0 || ui->fieldMeaning->toPlainText().size() == 0 ) {
        QMessageBox::information(0,"Warning","Either word or meaning is left empty");
        return;
    }
    BaseData b;
    b.setWord(ui->fieldWord->text().trimmed());
    b.setMeaning(ui->fieldMeaning->toPlainText().trimmed());
    b.setSynonyms(ui->fieldSyn->text().trimmed());
    b.setAntonyms(ui->fieldAnt->text().trimmed());
    b.setExample(ui->fieldEx->toPlainText().trimmed());
    b.setLevel(ui->comboBox->currentText().toInt());
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
    ui->comboBox->setCurrentIndex(2);
}

void UIHandler::handleIdiomRadioClicked(){
    if (ui->radioIdiom->isChecked()) {
        ui->labelWord->setText("Idiom");

        // Clear all fields
        clearFields();

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
