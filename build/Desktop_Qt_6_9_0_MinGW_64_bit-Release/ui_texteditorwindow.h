/********************************************************************************
** Form generated from reading UI file 'texteditorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITORWINDOW_H
#define UI_TEXTEDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditorWindow
{
public:
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextEditorWindow)
    {
        if (TextEditorWindow->objectName().isEmpty())
            TextEditorWindow->setObjectName("TextEditorWindow");
        TextEditorWindow->resize(430, 663);
        widget = new QWidget(TextEditorWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-60, -90, 511, 781));
        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(70, 130, 411, 581));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(widget1);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(widget1);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TextEditorWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TextEditorWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TextEditorWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TextEditorWindow);
    } // setupUi

    void retranslateUi(QDialog *TextEditorWindow)
    {
        TextEditorWindow->setWindowTitle(QCoreApplication::translate("TextEditorWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditorWindow: public Ui_TextEditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITORWINDOW_H
