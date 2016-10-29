#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include "basedata.h"

class DBHandler
{
    QSqlDatabase db;
public:
    DBHandler();
    void saveData(BaseData baseData);
};

#endif // DBHANDLER_H