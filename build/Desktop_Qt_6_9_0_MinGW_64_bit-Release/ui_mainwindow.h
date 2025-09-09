/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File;
    QAction *actionOpen_File;
    QAction *actionNew_Directory;
    QAction *actionOpen_Directory;
    QAction *actionabout;
    QAction *actionThemes;
    QAction *actionHow_to_use;
    QAction *actionType;
    QAction *actionSize;
    QAction *actionDate_Created;
    QAction *actionSet_Password;
    QAction *actionChange_Password;
    QAction *actionFile_Deletion_Confirmation;
    QAction *actionDefault_File_Format;
    QAction *actionDefault_Folder_Location;
    QAction *actionReset_Settings;
    QAction *actionSettings;
    QAction *actionIncrease_Font_Size;
    QAction *actionDecrease_Font_Size;
    QAction *actionDefault_Font;
    QAction *actionHeebo;
    QAction *actionArial;
    QAction *actionTimes_New_Roman;
    QAction *actionConsolas;
    QWidget *centralwidget;
    QWidget *rightPanel;
    QPushButton *openButton;
    QPushButton *closeButton;
    QLabel *DescLabel;
    QLabel *ImageLabel;
    QComboBox *moreActions;
    QPlainTextEdit *currentRootDisplay;
    QTreeView *filelistView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuSort_By;
    QMenu *menuFonts;
    QMenu *menuChange_Font_Style;
    QMenu *menuTools;
    QMenu *menuPassword_Protection;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName("actionNew_File");
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionNew_Directory = new QAction(MainWindow);
        actionNew_Directory->setObjectName("actionNew_Directory");
        actionOpen_Directory = new QAction(MainWindow);
        actionOpen_Directory->setObjectName("actionOpen_Directory");
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName("actionabout");
        actionThemes = new QAction(MainWindow);
        actionThemes->setObjectName("actionThemes");
        actionHow_to_use = new QAction(MainWindow);
        actionHow_to_use->setObjectName("actionHow_to_use");
        actionType = new QAction(MainWindow);
        actionType->setObjectName("actionType");
        actionType->setCheckable(true);
        actionType->setChecked(true);
        actionSize = new QAction(MainWindow);
        actionSize->setObjectName("actionSize");
        actionSize->setCheckable(true);
        actionDate_Created = new QAction(MainWindow);
        actionDate_Created->setObjectName("actionDate_Created");
        actionDate_Created->setCheckable(true);
        actionSet_Password = new QAction(MainWindow);
        actionSet_Password->setObjectName("actionSet_Password");
        actionChange_Password = new QAction(MainWindow);
        actionChange_Password->setObjectName("actionChange_Password");
        actionFile_Deletion_Confirmation = new QAction(MainWindow);
        actionFile_Deletion_Confirmation->setObjectName("actionFile_Deletion_Confirmation");
        actionDefault_File_Format = new QAction(MainWindow);
        actionDefault_File_Format->setObjectName("actionDefault_File_Format");
        actionDefault_Folder_Location = new QAction(MainWindow);
        actionDefault_Folder_Location->setObjectName("actionDefault_Folder_Location");
        actionReset_Settings = new QAction(MainWindow);
        actionReset_Settings->setObjectName("actionReset_Settings");
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionIncrease_Font_Size = new QAction(MainWindow);
        actionIncrease_Font_Size->setObjectName("actionIncrease_Font_Size");
        actionDecrease_Font_Size = new QAction(MainWindow);
        actionDecrease_Font_Size->setObjectName("actionDecrease_Font_Size");
        actionDefault_Font = new QAction(MainWindow);
        actionDefault_Font->setObjectName("actionDefault_Font");
        actionDefault_Font->setCheckable(true);
        actionDefault_Font->setChecked(true);
        actionHeebo = new QAction(MainWindow);
        actionHeebo->setObjectName("actionHeebo");
        actionHeebo->setCheckable(true);
        QFont font;
        font.setFamilies({QString::fromUtf8("Heebo")});
        actionHeebo->setFont(font);
        actionArial = new QAction(MainWindow);
        actionArial->setObjectName("actionArial");
        actionArial->setCheckable(true);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        actionArial->setFont(font1);
        actionTimes_New_Roman = new QAction(MainWindow);
        actionTimes_New_Roman->setObjectName("actionTimes_New_Roman");
        actionTimes_New_Roman->setCheckable(true);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        actionTimes_New_Roman->setFont(font2);
        actionConsolas = new QAction(MainWindow);
        actionConsolas->setObjectName("actionConsolas");
        actionConsolas->setCheckable(true);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Consolas")});
        actionConsolas->setFont(font3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        rightPanel = new QWidget(centralwidget);
        rightPanel->setObjectName("rightPanel");
        rightPanel->setGeometry(QRect(370, 50, 401, 431));
        openButton = new QPushButton(rightPanel);
        openButton->setObjectName("openButton");
        openButton->setGeometry(QRect(9, 338, 80, 24));
        closeButton = new QPushButton(rightPanel);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(9, 368, 80, 24));
        DescLabel = new QLabel(rightPanel);
        DescLabel->setObjectName("DescLabel");
        DescLabel->setGeometry(QRect(9, 174, 361, 101));
        ImageLabel = new QLabel(rightPanel);
        ImageLabel->setObjectName("ImageLabel");
        ImageLabel->setGeometry(QRect(9, 9, 361, 131));
        moreActions = new QComboBox(rightPanel);
        moreActions->addItem(QString());
        moreActions->addItem(QString());
        moreActions->addItem(QString());
        moreActions->setObjectName("moreActions");
        moreActions->setGeometry(QRect(10, 400, 101, 21));
        currentRootDisplay = new QPlainTextEdit(centralwidget);
        currentRootDisplay->setObjectName("currentRootDisplay");
        currentRootDisplay->setGeometry(QRect(10, 10, 341, 31));
        currentRootDisplay->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        filelistView = new QTreeView(centralwidget);
        filelistView->setObjectName("filelistView");
        filelistView->setGeometry(QRect(10, 50, 341, 501));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuSort_By = new QMenu(menuView);
        menuSort_By->setObjectName("menuSort_By");
        menuFonts = new QMenu(menuView);
        menuFonts->setObjectName("menuFonts");
        menuChange_Font_Style = new QMenu(menuFonts);
        menuChange_Font_Style->setObjectName("menuChange_Font_Style");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuPassword_Protection = new QMenu(menuTools);
        menuPassword_Protection->setObjectName("menuPassword_Protection");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        DescLabel->setBuddy(DescLabel);
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addSeparator();
        menuFile->addAction(actionNew_Directory);
        menuFile->addAction(actionOpen_Directory);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuHelp->addAction(actionabout);
        menuHelp->addAction(actionHow_to_use);
        menuView->addAction(menuSort_By->menuAction());
        menuView->addAction(menuFonts->menuAction());
        menuSort_By->addAction(actionType);
        menuSort_By->addAction(actionSize);
        menuSort_By->addAction(actionDate_Created);
        menuFonts->addAction(menuChange_Font_Style->menuAction());
        menuFonts->addAction(actionIncrease_Font_Size);
        menuFonts->addAction(actionDecrease_Font_Size);
        menuChange_Font_Style->addAction(actionDefault_Font);
        menuChange_Font_Style->addAction(actionHeebo);
        menuChange_Font_Style->addAction(actionArial);
        menuChange_Font_Style->addAction(actionTimes_New_Roman);
        menuChange_Font_Style->addAction(actionConsolas);
        menuTools->addAction(menuPassword_Protection->menuAction());
        menuPassword_Protection->addAction(actionSet_Password);
        menuPassword_Protection->addAction(actionChange_Password);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionNew_Directory->setText(QCoreApplication::translate("MainWindow", "New Directory", nullptr));
        actionOpen_Directory->setText(QCoreApplication::translate("MainWindow", "Open Directory", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionThemes->setText(QCoreApplication::translate("MainWindow", "Themes", nullptr));
        actionHow_to_use->setText(QCoreApplication::translate("MainWindow", "How to use?", nullptr));
        actionType->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        actionSize->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        actionDate_Created->setText(QCoreApplication::translate("MainWindow", "Date Created", nullptr));
        actionSet_Password->setText(QCoreApplication::translate("MainWindow", "Set Password", nullptr));
        actionChange_Password->setText(QCoreApplication::translate("MainWindow", "Change Password", nullptr));
        actionFile_Deletion_Confirmation->setText(QCoreApplication::translate("MainWindow", "File Deletion Confirmation", nullptr));
        actionDefault_File_Format->setText(QCoreApplication::translate("MainWindow", "Default File Format", nullptr));
        actionDefault_Folder_Location->setText(QCoreApplication::translate("MainWindow", "Default Folder Location", nullptr));
        actionReset_Settings->setText(QCoreApplication::translate("MainWindow", "Reset Settings", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionIncrease_Font_Size->setText(QCoreApplication::translate("MainWindow", "Increase Font Size", nullptr));
        actionDecrease_Font_Size->setText(QCoreApplication::translate("MainWindow", "Decrease Font Size", nullptr));
        actionDefault_Font->setText(QCoreApplication::translate("MainWindow", " Default Font- Segoe UI", nullptr));
        actionHeebo->setText(QCoreApplication::translate("MainWindow", "Heebo", nullptr));
        actionArial->setText(QCoreApplication::translate("MainWindow", "Arial", nullptr));
        actionTimes_New_Roman->setText(QCoreApplication::translate("MainWindow", "Times New Roman", nullptr));
        actionConsolas->setText(QCoreApplication::translate("MainWindow", "Consolas", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        DescLabel->setText(QCoreApplication::translate("MainWindow", "No files are opened.", nullptr));
        ImageLabel->setText(QCoreApplication::translate("MainWindow", "ImageLabel", nullptr));
        moreActions->setItemText(0, QCoreApplication::translate("MainWindow", "Select Actions", nullptr));
        moreActions->setItemText(1, QCoreApplication::translate("MainWindow", "Delete File", nullptr));
        moreActions->setItemText(2, QCoreApplication::translate("MainWindow", "Clone File", nullptr));

        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuSort_By->setTitle(QCoreApplication::translate("MainWindow", "Sort By", nullptr));
        menuFonts->setTitle(QCoreApplication::translate("MainWindow", "Fonts", nullptr));
        menuChange_Font_Style->setTitle(QCoreApplication::translate("MainWindow", "Change Font Style", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuPassword_Protection->setTitle(QCoreApplication::translate("MainWindow", "Password Protection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
