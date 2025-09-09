/********************************************************************************
** Form generated from reading UI file 'new_file_on_action_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_FILE_ON_ACTION_DIALOG_H
#define UI_NEW_FILE_ON_ACTION_DIALOG_H

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

class Ui_New_File_On_Action_Dialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *New_File_On_Action_Dialog)
    {
        if (New_File_On_Action_Dialog->objectName().isEmpty())
            New_File_On_Action_Dialog->setObjectName("New_File_On_Action_Dialog");
        New_File_On_Action_Dialog->resize(400, 253);
        New_File_On_Action_Dialog->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        New_File_On_Action_Dialog->setMouseTracking(false);
        widget = new QWidget(New_File_On_Action_Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 70, 341, 125));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 2);


        retranslateUi(New_File_On_Action_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, New_File_On_Action_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, New_File_On_Action_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(New_File_On_Action_Dialog);
    } // setupUi

    void retranslateUi(QDialog *New_File_On_Action_Dialog)
    {
        New_File_On_Action_Dialog->setWindowTitle(QCoreApplication::translate("New_File_On_Action_Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("New_File_On_Action_Dialog", "Enter the path", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("New_File_On_Action_Dialog", "Custom Path", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("New_File_On_Action_Dialog", "Current Path", nullptr));

        plainTextEdit->setPlainText(QCoreApplication::translate("New_File_On_Action_Dialog", "C:\\", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_File_On_Action_Dialog: public Ui_New_File_On_Action_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_FILE_ON_ACTION_DIALOG_H
