#include "dbhandler.h"

DBHandler::DBHandler()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database\\VocabData.sqlite");
    if(!db.open()) {
        QMessageBox::information(0,"Error","Either DB path is incorrect or DB failed to load.");
        throw (new QString("Throwing Exception !"));
    }

}

void DBHandler::saveData(BaseData baseData)
{

    QSqlQuery query(db);
    if(baseData.type == BaseData::Word) {
        query.prepare("INSERT INTO vocabRecords (word, meaning, synonyms, antonyms, example, level) VALUES (:word, :meaning, :synonyms, :antonyms, :example, :level)");
        query.bindValue(":word", baseData.getWord());
        query.bindValue(":meaning", baseData.getMeaning());
        query.bindValue(":synonyms", baseData.getSynonyms());
        query.bindValue(":antonyms", baseData.getAntonyms());
        query.bindValue(":example", baseData.getExample());
        query.bindValue(":level", baseData.getLevel());
    }
    else {
        query.prepare("INSERT INTO idiomRecords (idiom, meaning, example) VALUES (:idiom, :meaning, :example)");
        query.bindValue(":idiom", baseData.getWord());
        query.bindValue(":meaning", baseData.getMeaning());
        query.bindValue(":example", baseData.getExample());
    }


    if (query.exec())
    {
        QMessageBox::information(0,"Ok","Data saved successfully");
    }
    else
    {
        qDebug() << "Database error : " << query.lastError();
        QMessageBox::information(0,"Error",query.lastError().databaseText());
    }


}

void DBHandler::fetchData(BaseData **baseData) {
    QSqlQuery query(db);

    //QString word = (*baseData).getWord();

    if((*baseData)->type == BaseData::Word) {
        query.prepare("SELECT * FROM vocabRecords where word = :word");
        query.bindValue(":word", (*baseData)->getWord());
        if(!query.exec())
        {
            qDebug() << "Database error : " << query.lastError();
            QMessageBox::information(0,"Error","Query execution failed");
            (*baseData) = NULL;
            return;
        }
        if (query.next()) {
            (*baseData)->setMeaning(query.value(query.record().indexOf("meaning")).toString());
            (*baseData)->setSynonyms(query.value(query.record().indexOf("synonyms")).toString());
            (*baseData)->setAntonyms(query.value(query.record().indexOf("antonyms")).toString());
            (*baseData)->setExample(query.value(query.record().indexOf("example")).toString());
            (*baseData)->setLevel(query.value(query.record().indexOf("level")).toInt());

        }
        else {
            (*baseData) = NULL;
        }

    }
    else if ((*baseData)->type == BaseData::Idiom) {

    }
    else {
        /* do nothing */
    }


}

void DBHandler::updateData(BaseData *baseData) {

    // Check for existence of word

    QSqlQuery query(db);

    //QString word = (*baseData).getWord();

    if(baseData->type == BaseData::Word) {
        query.prepare("SELECT * FROM vocabRecords where word = :word");
        query.bindValue(":word", baseData->getWord());
    }
    else if (baseData->type == BaseData::Idiom) {
        query.prepare("SELECT * FROM idiomRecords where idiom = :idiom");
        query.bindValue(":idiom", baseData->getWord());
    }
    else {
        /* do nothing */
    }

    if(!query.exec())
    {
        qDebug() << "Database error : " << query.lastError();
        QMessageBox::information(0,"Error","Query failed to search word");
        return;
    }

    if (!query.next()) {
        //word is not there
        QMessageBox::information(0,"Ok","Sorry, word doesn't exist");
        return;
    }

    if(baseData->type == BaseData::Word) {
        query.prepare("UPDATE vocabRecords set meaning=:meaning, synonyms=:synonyms, antonyms=:antonyms, example=:example, level=:level where word=:word");
        query.bindValue(":word", baseData->getWord());
        query.bindValue(":meaning", baseData->getMeaning());
        query.bindValue(":synonyms", baseData->getSynonyms());
        query.bindValue(":antonyms", baseData->getAntonyms());
        query.bindValue(":example", baseData->getExample());
        query.bindValue(":level", baseData->getLevel());
    }
    else if(baseData->type == BaseData::Idiom) {
        query.prepare("UPDATE  idiomRecords set meaning=:meaning, example=:example where idiom=:idiom");
        query.bindValue(":idiom", baseData->getWord());
        query.bindValue(":meaning", baseData->getMeaning());
        query.bindValue(":example", baseData->getExample());
    }
    else {
        /* do nothing */
    }

    if (query.exec())
    {
        QMessageBox::information(0,"Ok","Data Updated successfully");
    }
    else
    {
        qDebug() << "Database error : " << query.lastError();
        QMessageBox::information(0,"Error",query.lastError().databaseText());
    }
}

