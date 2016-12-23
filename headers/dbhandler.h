#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include "basedata.h"
#include <QDebug>
#include <QSqlError>

#define DB_PATH "./"

class DBHandler
{
    QSqlDatabase db;
public:
    DBHandler();
    void saveData(BaseData baseData);
    void fetchData(BaseData **baseData);
    void updateData(BaseData *baseData);
};

#endif // DBHANDLER_H
