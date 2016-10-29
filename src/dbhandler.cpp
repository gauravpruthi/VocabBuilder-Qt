#include "dbhandler.h"

DBHandler::DBHandler()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("VocabData.sqlite");
    if(db.open()) {
        QMessageBox::information(0,"Ok","Connection ok");
    }
    else {
        QMessageBox::information(0,"Error","Either DB path is incorrect or DB failed to load.");
        throw (new QString("Throwing Exception !"));
    }

}

void DBHandler::saveData(BaseData baseData)
{

    QSqlQuery query;
    if(baseData.type == BaseData::Word) {
    query.prepare("INSERT INTO vocabRecords (word, meaning, synonyms, antonyms, example, level) "
                   "VALUES (:word, :meaning, :synonyms, :antonyms, :example, :level)");
    }
    else {
        query.prepare("INSERT INTO idiomRecords (word, meaning, synonyms, antonyms, example, level) "
                       "VALUES (:word, :meaning, :synonyms, :antonyms, :example, :level)");
    }

    query.bindValue(":word", baseData.getWord());
    query.bindValue(":meaning", baseData.getMeaning());
    query.bindValue(":synonyms", baseData.getSynonyms());
    query.bindValue(":antonyms", baseData.getAntonyms());
    query.bindValue(":example", baseData.getExample());
    query.bindValue(":level", baseData.getLevel());

    if (query.exec())
    {
        QMessageBox::information(0,"Ok","Data saved successfully");
    }
    else
    {
        QMessageBox::information(0,"Error","Data Insertion failed");
    }


}
