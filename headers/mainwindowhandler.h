#ifndef UIHANDLER_H
#define UIHANDLER_H

#include <QMainWindow>
#include "dbhandler.h"
#include "filehandler.h"

namespace Ui {
    class UIHandler;
}

class MainWindowHandler : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowHandler(QWidget *parent = 0);
    ~MainWindowHandler();
    void setUpControls();
    void clearFields();

private:
    Ui::UIHandler *ui;
    DBHandler *dbHandler;
    FileHandler *fileHandler;

public slots:
    void handleCloseButton();
    void handleSaveButton();
    void handleFetchButton();
    void handleLoadFile();
    void handleUpdateButton();
    void handleIdiomRadioClicked();

};

#endif // UIHANDLER_H
