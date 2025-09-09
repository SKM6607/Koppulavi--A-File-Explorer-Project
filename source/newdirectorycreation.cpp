#include "newdirectorycreation.h"
#include "ui_newdirectorycreation.h"
#include "mainwindow.h"
#include<QDialog>
#include<QMessageBox>
#include<QDir>
newDirectoryCreation::newDirectoryCreation(MainWindow* mainwindow,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::newDirectoryCreation),mui(mainwindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setPlaceholderText("Enter the Directory path/name here");
}
newDirectoryCreation::~newDirectoryCreation()
{
    delete ui;
}

QString newDirectoryCreation::EditTextString()
{
    return ui->plainTextEdit->toPlainText();
}

void newDirectoryCreation::on_comboBox_currentTextChanged(const QString &Text)
{
    if(Text=="Current Path"){
        ui->label->setText("Enter the Directory Name");
        return;
    }
    ui->label->setText("Enter the Custom Directory path. (eg:C:/users/...)");
}
void newDirectoryCreation::on_buttonBox_accepted()
{
    QDir newDir;
    QString content = EditTextString().trimmed();
    if (content.isEmpty()) {
        QMessageBox::warning(this, "Error", "No path/title mentioned");
        return;
    }
    QString basePath;
    if (ui->comboBox->currentText() == "Current path") {
        basePath = mui->getWorkingPath();
        if (!basePath.endsWith('/') && !basePath.endsWith('\\'))
            basePath += '/';
        basePath += content;
        if (!newDir.mkpath(basePath)) {
            QMessageBox::warning(this, "Error", "Could not make a directory");
            return;
        }
        QMessageBox::information(this, "Success", "Directory created");
        mui->setWorkingPath(basePath+'/');
        return;
    }
    if (!QDir::isAbsolutePath(content)) {
        QMessageBox::warning(this, "Error", "Please enter an absolute path.");
        return;
    }
    basePath = content;
    if (!newDir.mkpath(basePath)) {
        QMessageBox::warning(this, "Error", "Invalid Directory");
        return;
    }
    if (!basePath.endsWith('/') && !basePath.endsWith('\\'))
        basePath += '/';
    QMessageBox::information(this, "Success", "Directory created");
    mui->setWorkingPath(basePath);
}


