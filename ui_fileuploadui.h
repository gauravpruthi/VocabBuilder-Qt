/********************************************************************************
** Form generated from reading UI file 'fileuploadui.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEUPLOADUI_H
#define UI_FILEUPLOADUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FileUploadUI
{
public:
    QPushButton *buttonChoose;
    QPushButton *buttonUploadFile;
    QLabel *labelFileName;
    QLabel *labelStatusMessage;

    void setupUi(QDialog *FileUploadUI)
    {
        if (FileUploadUI->objectName().isEmpty())
            FileUploadUI->setObjectName(QStringLiteral("FileUploadUI"));
        FileUploadUI->resize(397, 112);
        buttonChoose = new QPushButton(FileUploadUI);
        buttonChoose->setObjectName(QStringLiteral("buttonChoose"));
        buttonChoose->setGeometry(QRect(10, 10, 75, 23));
        buttonUploadFile = new QPushButton(FileUploadUI);
        buttonUploadFile->setObjectName(QStringLiteral("buttonUploadFile"));
        buttonUploadFile->setGeometry(QRect(10, 70, 75, 23));
        labelFileName = new QLabel(FileUploadUI);
        labelFileName->setObjectName(QStringLiteral("labelFileName"));
        labelFileName->setGeometry(QRect(100, 20, 46, 20));
        QFont font;
        font.setItalic(true);
        labelFileName->setFont(font);
        labelStatusMessage = new QLabel(FileUploadUI);
        labelStatusMessage->setObjectName(QStringLiteral("labelStatusMessage"));
        labelStatusMessage->setGeometry(QRect(20, 40, 46, 13));

        retranslateUi(FileUploadUI);

        QMetaObject::connectSlotsByName(FileUploadUI);
    } // setupUi

    void retranslateUi(QDialog *FileUploadUI)
    {
        FileUploadUI->setWindowTitle(QApplication::translate("FileUploadUI", "FileUploadUI", 0));
        buttonChoose->setText(QApplication::translate("FileUploadUI", "Choose", 0));
        buttonUploadFile->setText(QApplication::translate("FileUploadUI", "Upload File", 0));
        labelFileName->setText(QString());
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileUploadUI: public Ui_FileUploadUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEUPLOADUI_H
