#include "vocabmain.h"
#include "ui_vocabmain.h"
#include "basedata.h"
#include "dbhandler.h"

VocabMain::VocabMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VocabMain)
{
    ui->setupUi(this);
    setUpControls();
}

VocabMain::~VocabMain()
{
    delete ui;
}


void VocabMain::setUpControls(){
    QObject::connect(ui->buttonClose, SIGNAL (clicked()), this, SLOT (handleCloseButton()));
    QObject::connect(ui->buttonSave, SIGNAL (clicked()), this, SLOT (handleSaveButton()));
}


void VocabMain::handleCloseButton(){
    QCoreApplication::quit();
}

void VocabMain::handleSaveButton(){
    DBHandler *dbHandler = new DBHandler();
    BaseData b;

    b.setWord(ui->fieldWord->text());
    b.setMeaning(ui->fieldMeaning->text());
    b.setSynonyms(ui->fieldSyn->text());
    b.setAntonyms(ui->fieldAnt->text());
    b.setExample(ui->fieldEx->text());
    if(ui->radioWord->isChecked())
        b.type = BaseData::Word;
    else
        b.type = BaseData::Idiom;

    dbHandler->saveData(b);


}
