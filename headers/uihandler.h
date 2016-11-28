#ifndef VOCABMAIN_H
#define VOCABMAIN_H

#include <QMainWindow>
#include "dbhandler.h"

namespace Ui {
    class VocabMain;
}

class VocabMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit VocabMain(QWidget *parent = 0);
    ~VocabMain();
    void setUpControls();
    void clearFields();

private:
    Ui::VocabMain *ui;
    DBHandler *dbHandler;

public slots:
    void handleCloseButton();
    void handleSaveButton();
    void handleIdiomRadioClicked();

};

#endif // VOCABMAIN_H
