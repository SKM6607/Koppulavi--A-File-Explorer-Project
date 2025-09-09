#include "settingsdialog.h"
#include "ui_settingsdialog.h"
#include "mainwindow.h"
#include "other.h"
#include<QDir>
#include<QFileInfo>
settingsDialog::settingsDialog(QWidget *parent,MainWindow* mainWindow)
    : QDialog(parent)
    , ui(new Ui::settingsDialog)
{
    ui->setupUi(this);
    controlPtr=mainWindow;
    ui->defaultFolderLocation->setFixedHeight(30);
    ui->verticalLayout->setAlignment(Qt::AlignCenter);
    this->setFixedSize(this->size());
    this->setWindowTitle("Settings");
}
settingsDialog::~settingsDialog()
{
    delete ui;
}

void settingsDialog::on_defFolderLocationRadio_clicked(bool checked)
{
    ui->defaultFolderLocation->setEnabled(checked);
    ui->dfLocationLabel->setEnabled(checked);
    ui->confirmdfLocationButton->setEnabled(checked);
}
void settingsDialog::on_confirmdfLocationButton_clicked()
{
    QString path=ui->defaultFolderLocation->toPlainText();
    QFileInfo dir(path);
    QString prev=ui->dfLocationLabel->text();
    if(!dir.isDir()||!dir.exists()){
        ui->dfLocationLabel->setText(prev+" (enter correct path)");
        return;
    }
    ui->dfLocationLabel->setText(prev);
    controlPtr->DefaultLocation=(!path.endsWith('/'))?path+'/':path;
}

