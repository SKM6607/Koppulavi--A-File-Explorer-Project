/********************************************************************************
** Form generated from reading UI file 'fileinformation.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEINFORMATION_H
#define UI_FILEINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileInformation
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *FileInfoLabel;

    void setupUi(QWidget *fileInformation)
    {
        if (fileInformation->objectName().isEmpty())
            fileInformation->setObjectName("fileInformation");
        fileInformation->resize(500, 350);
        fileInformation->setMaximumSize(QSize(500, 350));
        verticalLayoutWidget = new QWidget(fileInformation);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 481, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FileInfoLabel = new QLabel(verticalLayoutWidget);
        FileInfoLabel->setObjectName("FileInfoLabel");

        verticalLayout->addWidget(FileInfoLabel);


        retranslateUi(fileInformation);

        QMetaObject::connectSlotsByName(fileInformation);
    } // setupUi

    void retranslateUi(QWidget *fileInformation)
    {
        fileInformation->setWindowTitle(QCoreApplication::translate("fileInformation", "Form", nullptr));
        FileInfoLabel->setText(QCoreApplication::translate("fileInformation", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fileInformation: public Ui_fileInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEINFORMATION_H
