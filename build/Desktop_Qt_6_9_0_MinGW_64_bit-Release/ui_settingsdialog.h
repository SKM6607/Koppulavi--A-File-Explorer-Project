/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingsDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *defFolderLocationRadio;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *dfLocationLabel;
    QPlainTextEdit *defaultFolderLocation;
    QPushButton *confirmdfLocationButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *themeLabel;
    QComboBox *themeChangerComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *resetSettingsLabel;
    QPushButton *settingsReset;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *dialogBoxForDeletionButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *dfViewFormatCheckBox;
    QComboBox *viewFormatComboBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *settingsSaveButton;
    QPushButton *settingsCancelButton;

    void setupUi(QDialog *settingsDialog)
    {
        if (settingsDialog->objectName().isEmpty())
            settingsDialog->setObjectName("settingsDialog");
        settingsDialog->resize(651, 438);
        layoutWidget = new QWidget(settingsDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 601, 369));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        defFolderLocationRadio = new QRadioButton(layoutWidget);
        defFolderLocationRadio->setObjectName("defFolderLocationRadio");
        defFolderLocationRadio->setChecked(false);

        verticalLayout->addWidget(defFolderLocationRadio);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        dfLocationLabel = new QLabel(layoutWidget);
        dfLocationLabel->setObjectName("dfLocationLabel");
        dfLocationLabel->setEnabled(false);

        horizontalLayout_5->addWidget(dfLocationLabel);


        horizontalLayout_2->addLayout(horizontalLayout_5);

        defaultFolderLocation = new QPlainTextEdit(layoutWidget);
        defaultFolderLocation->setObjectName("defaultFolderLocation");
        defaultFolderLocation->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(defaultFolderLocation->sizePolicy().hasHeightForWidth());
        defaultFolderLocation->setSizePolicy(sizePolicy);
        defaultFolderLocation->setMinimumSize(QSize(0, 30));
        defaultFolderLocation->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(defaultFolderLocation);

        confirmdfLocationButton = new QPushButton(layoutWidget);
        confirmdfLocationButton->setObjectName("confirmdfLocationButton");
        confirmdfLocationButton->setEnabled(false);

        horizontalLayout_2->addWidget(confirmdfLocationButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(636, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_5);

        themeLabel = new QLabel(layoutWidget);
        themeLabel->setObjectName("themeLabel");

        verticalLayout->addWidget(themeLabel);

        themeChangerComboBox = new QComboBox(layoutWidget);
        themeChangerComboBox->addItem(QString());
        themeChangerComboBox->addItem(QString());
        themeChangerComboBox->addItem(QString());
        themeChangerComboBox->setObjectName("themeChangerComboBox");

        verticalLayout->addWidget(themeChangerComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        resetSettingsLabel = new QLabel(layoutWidget);
        resetSettingsLabel->setObjectName("resetSettingsLabel");

        verticalLayout->addWidget(resetSettingsLabel);

        settingsReset = new QPushButton(layoutWidget);
        settingsReset->setObjectName("settingsReset");

        verticalLayout->addWidget(settingsReset);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        dialogBoxForDeletionButton = new QCheckBox(layoutWidget);
        dialogBoxForDeletionButton->setObjectName("dialogBoxForDeletionButton");
        dialogBoxForDeletionButton->setChecked(true);

        verticalLayout->addWidget(dialogBoxForDeletionButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        dfViewFormatCheckBox = new QCheckBox(layoutWidget);
        dfViewFormatCheckBox->setObjectName("dfViewFormatCheckBox");
        dfViewFormatCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(dfViewFormatCheckBox);

        viewFormatComboBox = new QComboBox(layoutWidget);
        viewFormatComboBox->addItem(QString());
        viewFormatComboBox->addItem(QString());
        viewFormatComboBox->addItem(QString());
        viewFormatComboBox->addItem(QString());
        viewFormatComboBox->addItem(QString());
        viewFormatComboBox->addItem(QString());
        viewFormatComboBox->setObjectName("viewFormatComboBox");
        viewFormatComboBox->setEnabled(false);

        horizontalLayout_3->addWidget(viewFormatComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(458, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        settingsSaveButton = new QPushButton(layoutWidget);
        settingsSaveButton->setObjectName("settingsSaveButton");

        horizontalLayout->addWidget(settingsSaveButton);

        settingsCancelButton = new QPushButton(layoutWidget);
        settingsCancelButton->setObjectName("settingsCancelButton");

        horizontalLayout->addWidget(settingsCancelButton);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(settingsDialog);

        QMetaObject::connectSlotsByName(settingsDialog);
    } // setupUi

    void retranslateUi(QDialog *settingsDialog)
    {
        settingsDialog->setWindowTitle(QCoreApplication::translate("settingsDialog", "Dialog", nullptr));
        defFolderLocationRadio->setText(QCoreApplication::translate("settingsDialog", "Use custom default folder location", nullptr));
        dfLocationLabel->setText(QCoreApplication::translate("settingsDialog", "Default folder location", nullptr));
        defaultFolderLocation->setPlainText(QCoreApplication::translate("settingsDialog", "C:/", nullptr));
        confirmdfLocationButton->setText(QCoreApplication::translate("settingsDialog", "Confirm", nullptr));
        themeLabel->setText(QCoreApplication::translate("settingsDialog", "Change Theme", nullptr));
        themeChangerComboBox->setItemText(0, QCoreApplication::translate("settingsDialog", "Light", nullptr));
        themeChangerComboBox->setItemText(1, QCoreApplication::translate("settingsDialog", "Dark", nullptr));
        themeChangerComboBox->setItemText(2, QCoreApplication::translate("settingsDialog", "Special", nullptr));

        resetSettingsLabel->setText(QCoreApplication::translate("settingsDialog", "Reset to Default settings", nullptr));
        settingsReset->setText(QCoreApplication::translate("settingsDialog", "Reset Settings", nullptr));
        dialogBoxForDeletionButton->setText(QCoreApplication::translate("settingsDialog", "Dialog Box appears when you try to delete a file.", nullptr));
        dfViewFormatCheckBox->setText(QCoreApplication::translate("settingsDialog", "Default Viewing Format", nullptr));
        viewFormatComboBox->setItemText(0, QCoreApplication::translate("settingsDialog", "All Files", nullptr));
        viewFormatComboBox->setItemText(1, QCoreApplication::translate("settingsDialog", "Text (.txt) Files", nullptr));
        viewFormatComboBox->setItemText(2, QCoreApplication::translate("settingsDialog", "C (.c) Files", nullptr));
        viewFormatComboBox->setItemText(3, QCoreApplication::translate("settingsDialog", "CPP (.cpp) Files", nullptr));
        viewFormatComboBox->setItemText(4, QCoreApplication::translate("settingsDialog", "Header (.h) Files", nullptr));
        viewFormatComboBox->setItemText(5, QCoreApplication::translate("settingsDialog", "Python (.py)  Files", nullptr));

        settingsSaveButton->setText(QCoreApplication::translate("settingsDialog", "Save", nullptr));
        settingsCancelButton->setText(QCoreApplication::translate("settingsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingsDialog: public Ui_settingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
