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

QT_BEGIN_NAMESPACE

class Ui_TextEditorWindow
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *TextEditorWindow)
    {
        if (TextEditorWindow->objectName().isEmpty())
            TextEditorWindow->setObjectName("TextEditorWindow");
        TextEditorWindow->resize(430, 663);
        buttonBox = new QDialogButtonBox(TextEditorWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 620, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        textEdit = new QTextEdit(TextEditorWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 40, 411, 571));

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
