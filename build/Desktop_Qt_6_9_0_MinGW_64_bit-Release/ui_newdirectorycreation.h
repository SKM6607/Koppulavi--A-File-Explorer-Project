/********************************************************************************
** Form generated from reading UI file 'newdirectorycreation.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDIRECTORYCREATION_H
#define UI_NEWDIRECTORYCREATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newDirectoryCreation
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *newDirectoryCreation)
    {
        if (newDirectoryCreation->objectName().isEmpty())
            newDirectoryCreation->setObjectName("newDirectoryCreation");
        newDirectoryCreation->resize(434, 251);
        layoutWidget = new QWidget(newDirectoryCreation);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 60, 371, 124));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 2);

        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(newDirectoryCreation);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, newDirectoryCreation, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, newDirectoryCreation, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(newDirectoryCreation);
    } // setupUi

    void retranslateUi(QDialog *newDirectoryCreation)
    {
        newDirectoryCreation->setWindowTitle(QCoreApplication::translate("newDirectoryCreation", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newDirectoryCreation", "Directory creator", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("newDirectoryCreation", "Current path", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("newDirectoryCreation", "Custom path", nullptr));

    } // retranslateUi

};

namespace Ui {
    class newDirectoryCreation: public Ui_newDirectoryCreation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDIRECTORYCREATION_H
