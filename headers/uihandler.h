#ifndef UIHANDLER_H
#define UIHANDLER_H

#include <QMainWindow>
#include "dbhandler.h"

namespace Ui {
    class UIHandler;
}

class UIHandler : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIHandler(QWidget *parent = 0);
    ~UIHandler();
    void setUpControls();
    void clearFields();

private:
    Ui::UIHandler *ui;
    DBHandler *dbHandler;

public slots:
    void handleCloseButton();
    void handleSaveButton();
    void handleFetchButton();
    void handleUpdateButton();
    void handleIdiomRadioClicked();

};

#endif // UIHANDLER_H
