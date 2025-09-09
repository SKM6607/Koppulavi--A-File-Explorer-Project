/********************************************************************************
** Form generated from reading UI file 'texteditorsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITORSETTINGS_H
#define UI_TEXTEDITORSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textEditorSettings
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *textEditorSettings)
    {
        if (textEditorSettings->objectName().isEmpty())
            textEditorSettings->setObjectName("textEditorSettings");
        textEditorSettings->resize(400, 291);
        layoutWidget = new QWidget(textEditorSettings);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 361, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        verticalLayout->addWidget(checkBox);

        verticalSpacer = new QSpacerItem(48, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        verticalSpacer_2 = new QSpacerItem(48, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(48, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(textEditorSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, textEditorSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, textEditorSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(textEditorSettings);
    } // setupUi

    void retranslateUi(QDialog *textEditorSettings)
    {
        textEditorSettings->setWindowTitle(QCoreApplication::translate("textEditorSettings", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("textEditorSettings", "Display Quick Editor when opening a new file.", nullptr));
        label->setText(QCoreApplication::translate("textEditorSettings", "Change Theme", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("textEditorSettings", "Dark", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("textEditorSettings", "Light", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("textEditorSettings", "Special", nullptr));

        pushButton->setText(QCoreApplication::translate("textEditorSettings", "Reset settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textEditorSettings: public Ui_textEditorSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITORSETTINGS_H
