/********************************************************************************
** Form generated from reading UI file 'vocabmain.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOCABMAIN_H
#define UI_VOCABMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VocabMain
{
public:
    QWidget *centralWidget;
    QLabel *labelWord;
    QLabel *labelMeaning;
    QLabel *labelSyn;
    QLabel *labelAnt;
    QLabel *labelDesc;
    QLabel *labelLevel;
    QPushButton *buttonSave;
    QPushButton *buttonClose;
    QPushButton *buttonFetch;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QRadioButton *radioWord;
    QRadioButton *radioIdiom;
    QLineEdit *fieldWord;
    QLineEdit *fieldMeaning;
    QLineEdit *fieldSyn;
    QLineEdit *fieldAnt;
    QLineEdit *fieldEx;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VocabMain)
    {
        if (VocabMain->objectName().isEmpty())
            VocabMain->setObjectName(QStringLiteral("VocabMain"));
        VocabMain->resize(400, 427);
        centralWidget = new QWidget(VocabMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelWord = new QLabel(centralWidget);
        labelWord->setObjectName(QStringLiteral("labelWord"));
        labelWord->setGeometry(QRect(80, 60, 46, 13));
        labelMeaning = new QLabel(centralWidget);
        labelMeaning->setObjectName(QStringLiteral("labelMeaning"));
        labelMeaning->setGeometry(QRect(70, 90, 61, 20));
        labelSyn = new QLabel(centralWidget);
        labelSyn->setObjectName(QStringLiteral("labelSyn"));
        labelSyn->setGeometry(QRect(60, 140, 61, 20));
        labelAnt = new QLabel(centralWidget);
        labelAnt->setObjectName(QStringLiteral("labelAnt"));
        labelAnt->setGeometry(QRect(60, 190, 61, 20));
        labelDesc = new QLabel(centralWidget);
        labelDesc->setObjectName(QStringLiteral("labelDesc"));
        labelDesc->setGeometry(QRect(60, 250, 61, 16));
        labelLevel = new QLabel(centralWidget);
        labelLevel->setObjectName(QStringLiteral("labelLevel"));
        labelLevel->setGeometry(QRect(70, 310, 46, 13));
        buttonSave = new QPushButton(centralWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setGeometry(QRect(60, 350, 75, 23));
        buttonClose = new QPushButton(centralWidget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setGeometry(QRect(150, 350, 75, 23));
        buttonFetch = new QPushButton(centralWidget);
        buttonFetch->setObjectName(QStringLiteral("buttonFetch"));
        buttonFetch->setGeometry(QRect(310, 60, 75, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 300, 69, 22));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 10, 211, 41));
        radioWord = new QRadioButton(groupBox);
        radioWord->setObjectName(QStringLiteral("radioWord"));
        radioWord->setGeometry(QRect(10, 10, 82, 17));
        radioIdiom = new QRadioButton(groupBox);
        radioIdiom->setObjectName(QStringLiteral("radioIdiom"));
        radioIdiom->setGeometry(QRect(100, 10, 82, 17));
        fieldWord = new QLineEdit(centralWidget);
        fieldWord->setObjectName(QStringLiteral("fieldWord"));
        fieldWord->setGeometry(QRect(150, 60, 113, 20));
        fieldMeaning = new QLineEdit(centralWidget);
        fieldMeaning->setObjectName(QStringLiteral("fieldMeaning"));
        fieldMeaning->setGeometry(QRect(150, 90, 171, 31));
        fieldSyn = new QLineEdit(centralWidget);
        fieldSyn->setObjectName(QStringLiteral("fieldSyn"));
        fieldSyn->setGeometry(QRect(150, 130, 151, 31));
        fieldAnt = new QLineEdit(centralWidget);
        fieldAnt->setObjectName(QStringLiteral("fieldAnt"));
        fieldAnt->setGeometry(QRect(150, 180, 161, 31));
        fieldEx = new QLineEdit(centralWidget);
        fieldEx->setObjectName(QStringLiteral("fieldEx"));
        fieldEx->setGeometry(QRect(150, 230, 191, 61));
        VocabMain->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(VocabMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VocabMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VocabMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VocabMain->setStatusBar(statusBar);

        retranslateUi(VocabMain);

        QMetaObject::connectSlotsByName(VocabMain);
    } // setupUi

    void retranslateUi(QMainWindow *VocabMain)
    {
        VocabMain->setWindowTitle(QApplication::translate("VocabMain", "VocabMain", 0));
        labelWord->setText(QApplication::translate("VocabMain", "Word", 0));
        labelMeaning->setText(QApplication::translate("VocabMain", "Meaning", 0));
        labelSyn->setText(QApplication::translate("VocabMain", "Synonyms", 0));
        labelAnt->setText(QApplication::translate("VocabMain", "Antonyms", 0));
        labelDesc->setText(QApplication::translate("VocabMain", "Example", 0));
        labelLevel->setText(QApplication::translate("VocabMain", "Level", 0));
        buttonSave->setText(QApplication::translate("VocabMain", "Save", 0));
        buttonClose->setText(QApplication::translate("VocabMain", "Close", 0));
        buttonFetch->setText(QApplication::translate("VocabMain", "Fetch", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("VocabMain", "1", 0)
         << QApplication::translate("VocabMain", "2", 0)
         << QApplication::translate("VocabMain", "3", 0)
         << QApplication::translate("VocabMain", "4", 0)
         << QApplication::translate("VocabMain", "5", 0)
        );
        groupBox->setTitle(QString());
        radioWord->setText(QApplication::translate("VocabMain", "Word", 0));
        radioIdiom->setText(QApplication::translate("VocabMain", "Idiom", 0));
    } // retranslateUi

};

namespace Ui {
    class VocabMain: public Ui_VocabMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOCABMAIN_H
