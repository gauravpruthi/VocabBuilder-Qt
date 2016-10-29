#ifndef VOCABMAIN_H
#define VOCABMAIN_H

#include <QMainWindow>

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

private:
    Ui::VocabMain *ui;

public slots:
        void handleCloseButton();
        void handleSaveButton();

};

#endif // VOCABMAIN_H
