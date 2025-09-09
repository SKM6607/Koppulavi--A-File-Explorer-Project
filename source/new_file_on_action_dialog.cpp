#include "new_file_on_action_dialog.h"
#include "ui_new_file_on_action_dialog.h"
#include "mainwindow.h"
#include "other.h"
#include<QMessageBox>
#include <QDir>
New_File_On_Action_Dialog::New_File_On_Action_Dialog(MainWindow* mainwindow,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::New_File_On_Action_Dialog)
{
    ui->setupUi(this);
    mainWin=mainwindow;
}
New_File_On_Action_Dialog::~New_File_On_Action_Dialog()
{
    delete ui;
}
QString New_File_On_Action_Dialog::userPath(){
    return ui->plainTextEdit->toPlainText();
}
QString New_File_On_Action_Dialog::getRootPath(){
    return mainWin->getWorkingPath();
}
void New_File_On_Action_Dialog::on_comboBox_currentTextChanged(const QString &text)
{
    if(text=="Current Path"){
        ui->label->setText("Enter the title of the file");
        Path=util::retDirPath(getRootPath());
    }
}
QString New_File_On_Action_Dialog::getFinalFilePath() const {
    return Path;
}

void New_File_On_Action_Dialog::on_buttonBox_accepted()
{
    if (userPath().isEmpty()) {
        if (ui->comboBox->currentText() == "Current Path") {
            QMessageBox::warning(this, "Error", "No title is given for the file", QMessageBox::Ok);
            return;
        }
        QMessageBox::warning(this, "Error", "No path is mentioned", QMessageBox::Ok);
        return;
    }

    if (ui->comboBox->currentText() == "Current Path") {
        Path = Path +"/"+ userPath();
    } else {
        if(!QFileInfo(userPath()).isFile()){
            QMessageBox::warning(this, "Error", "Path does not point to a file", QMessageBox::Ok);
            return;
        }
        Path = userPath();
    }
    QDir dir = QFileInfo(Path).absoluteDir();
    if (!dir.exists()) {
        dir.mkpath(".");
    }

    QFile newFile(Path);
    if(QFileInfo(Path).exists()){
        auto answer=QMessageBox::question(this,"Error","File Exists!\nDo you want to OverWrite?",QMessageBox::Yes|QMessageBox::No);
        if(answer==QMessageBox::Yes){
            QFile::remove(Path);
        }
    }
    if (!newFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", QString("Failed creating file at path:\n%1").arg(Path));
        return;
    }
    newFile.close();
    QMessageBox::information(this, "Success", "File Opened");
}


