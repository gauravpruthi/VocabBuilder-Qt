/********************************************************************************
** Form generated from reading UI file 'uihandler.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIHANDLER_H
#define UI_UIHANDLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIHandler
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
    QLineEdit *fieldWord;
    QTextEdit *fieldMeaning;
    QLineEdit *fieldSyn;
    QLineEdit *fieldAnt;
    QRadioButton *radioWord;
    QRadioButton *radioIdiom;
    QLabel *labelHead;
    QTextEdit *fieldEx;
    QPushButton *buttonUpdate;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *UIHandler)
    {
        if (UIHandler->objectName().isEmpty())
            UIHandler->setObjectName(QStringLiteral("UIHandler"));
        UIHandler->resize(500, 500);
        UIHandler->setMaximumSize(QSize(500, 500));
        UIHandler->setAutoFillBackground(true);
        centralWidget = new QWidget(UIHandler);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelWord = new QLabel(centralWidget);
        labelWord->setObjectName(QStringLiteral("labelWord"));
        labelWord->setGeometry(QRect(70, 100, 46, 13));
        labelMeaning = new QLabel(centralWidget);
        labelMeaning->setObjectName(QStringLiteral("labelMeaning"));
        labelMeaning->setGeometry(QRect(60, 160, 61, 20));
        labelSyn = new QLabel(centralWidget);
        labelSyn->setObjectName(QStringLiteral("labelSyn"));
        labelSyn->setGeometry(QRect(60, 220, 61, 20));
        labelAnt = new QLabel(centralWidget);
        labelAnt->setObjectName(QStringLiteral("labelAnt"));
        labelAnt->setGeometry(QRect(60, 260, 61, 20));
        labelDesc = new QLabel(centralWidget);
        labelDesc->setObjectName(QStringLiteral("labelDesc"));
        labelDesc->setGeometry(QRect(70, 310, 61, 16));
        labelLevel = new QLabel(centralWidget);
        labelLevel->setObjectName(QStringLiteral("labelLevel"));
        labelLevel->setGeometry(QRect(80, 390, 46, 13));
        buttonSave = new QPushButton(centralWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setGeometry(QRect(250, 430, 75, 23));
        buttonClose = new QPushButton(centralWidget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));
        buttonClose->setGeometry(QRect(340, 430, 75, 23));
        buttonFetch = new QPushButton(centralWidget);
        buttonFetch->setObjectName(QStringLiteral("buttonFetch"));
        buttonFetch->setGeometry(QRect(380, 90, 75, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 390, 69, 22));
        fieldWord = new QLineEdit(centralWidget);
        fieldWord->setObjectName(QStringLiteral("fieldWord"));
        fieldWord->setGeometry(QRect(160, 100, 151, 20));
        fieldMeaning = new QTextEdit(centralWidget);
        fieldMeaning->setObjectName(QStringLiteral("fieldMeaning"));
        fieldMeaning->setGeometry(QRect(160, 140, 191, 61));
        fieldMeaning->setLineWrapMode(QTextEdit::FixedColumnWidth);
        fieldMeaning->setLineWrapColumnOrWidth(40);
        fieldMeaning->setAcceptRichText(false);
        fieldSyn = new QLineEdit(centralWidget);
        fieldSyn->setObjectName(QStringLiteral("fieldSyn"));
        fieldSyn->setGeometry(QRect(160, 221, 201, 20));
        fieldAnt = new QLineEdit(centralWidget);
        fieldAnt->setObjectName(QStringLiteral("fieldAnt"));
        fieldAnt->setGeometry(QRect(160, 260, 211, 21));
        radioWord = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(UIHandler);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioWord);
        radioWord->setObjectName(QStringLiteral("radioWord"));
        radioWord->setGeometry(QRect(110, 50, 82, 17));
        radioWord->setChecked(true);
        radioIdiom = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioIdiom);
        radioIdiom->setObjectName(QStringLiteral("radioIdiom"));
        radioIdiom->setGeometry(QRect(170, 50, 82, 17));
        labelHead = new QLabel(centralWidget);
        labelHead->setObjectName(QStringLiteral("labelHead"));
        labelHead->setGeometry(QRect(120, 10, 231, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        labelHead->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        labelHead->setFont(font);
        fieldEx = new QTextEdit(centralWidget);
        fieldEx->setObjectName(QStringLiteral("fieldEx"));
        fieldEx->setGeometry(QRect(160, 300, 191, 71));
        fieldEx->setLineWrapMode(QTextEdit::FixedColumnWidth);
        fieldEx->setLineWrapColumnOrWidth(40);
        fieldEx->setAcceptRichText(false);
        buttonUpdate = new QPushButton(centralWidget);
        buttonUpdate->setObjectName(QStringLiteral("buttonUpdate"));
        buttonUpdate->setGeometry(QRect(380, 130, 75, 23));
        UIHandler->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(UIHandler);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UIHandler->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UIHandler);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UIHandler->setStatusBar(statusBar);

        retranslateUi(UIHandler);

        QMetaObject::connectSlotsByName(UIHandler);
    } // setupUi

    void retranslateUi(QMainWindow *UIHandler)
    {
        UIHandler->setWindowTitle(QApplication::translate("UIHandler", "UIHandler", 0));
        labelWord->setText(QApplication::translate("UIHandler", "Word", 0));
        labelMeaning->setText(QApplication::translate("UIHandler", "Meaning", 0));
        labelSyn->setText(QApplication::translate("UIHandler", "Synonyms", 0));
        labelAnt->setText(QApplication::translate("UIHandler", "Antonyms", 0));
        labelDesc->setText(QApplication::translate("UIHandler", "Example", 0));
        labelLevel->setText(QApplication::translate("UIHandler", "Level", 0));
        buttonSave->setText(QApplication::translate("UIHandler", "Save", 0));
        buttonClose->setText(QApplication::translate("UIHandler", "Close", 0));
        buttonFetch->setText(QApplication::translate("UIHandler", "Fetch", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("UIHandler", "1", 0)
         << QApplication::translate("UIHandler", "2", 0)
         << QApplication::translate("UIHandler", "3", 0)
         << QApplication::translate("UIHandler", "4", 0)
         << QApplication::translate("UIHandler", "5", 0)
        );
        radioWord->setText(QApplication::translate("UIHandler", "Word", 0));
        radioIdiom->setText(QApplication::translate("UIHandler", "Idiom", 0));
        labelHead->setText(QApplication::translate("UIHandler", "Welcome to VocabBuilder", 0));
        buttonUpdate->setText(QApplication::translate("UIHandler", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class UIHandler: public Ui_UIHandler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIHANDLER_H
