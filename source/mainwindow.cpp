#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "new_file_on_action_dialog.h"
#include "texteditorwindow.h"
#include "newdirectorycreation.h"
#include "settingsdialog.h"
#include "other.h"
#include "fileinformation.h"
#include <QWidget>
#include <QButtonGroup>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QFileSystemModel>
#include <QListView>
#include<QGridLayout>
#include <QVBoxLayout>
#include <QActionGroup>
void MainWindow::setButtonConditions(bool needed=false){
    if(!needed){
        ui->ImageLabel->setText("---No Files Selected---");
        ui->DescLabel->setText("No Files Selected.\n Use CTRL+H for help");
    }
    ui->actionType->setEnabled(needed);
    ui->actionSize->setEnabled(needed);
    ui->actionDate_Created->setEnabled(needed);
    ui->openButton->setEnabled(needed);
    ui->closeButton->setEnabled(needed);
    ui->moreActions->setVisible(needed);
    ui->moreActions->setCurrentIndex(0);
}

void MainWindow::SetFont(QString fontName="Segoe UI")
{
    ui->centralwidget->setFont(QFont(fontName,fontSize));
}
void MainWindow::SetFont(QFont Font){
    ui->centralwidget->setFont(Font);
}
void MainWindow::LoadSettings()
{
    QString FileName="settings.txt";
    QFile file(FileName);
    if(!file.exists()){
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){
            QMessageBox::warning(this,"Error","Failed loading settings file. Try Again");
            return;
        }
        DefaultLocation="C:/";
        DefaultTheme="Light";
        DefaultFormat="All Files";
        file.write("DefaultLocation=\"C:/\"\nDefaultTheme=\"Light\"\nDefaultFormat=\"All Files");
        file.close();
        return;
    }
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QMessageBox::warning(this,"Error","Failed loading settings file. Try Again");
        return;
    }
    QTextStream textStream(&file);
    while(!textStream.atEnd()){
        QString Line=textStream.readLine();
        QStringList list=Line.split('=');
        if(list.size()==2){
            QString lval=list[0],rval=list[1];
            if(lval=="DefaultLocation"){
                DefaultLocation=rval.slice(1,rval.size()-2);
            }
            else if(lval=="DefaultTheme"){
                DefaultTheme=rval;
            }
            else if(lval=="DefaultFormat"){
                DefaultFormat=rval;
            }
        }
    }
    file.close();
}
int MainWindow::fontSize=14;
MainWindow::MainWindow(QWidget* parent):QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    setWorkingPath(DefaultLocation);
    QFont fonts;
    fonts.setPointSize(fontSize);
    ui->centralwidget->setFont(fonts);
    QActionGroup* radioMenuGroup=new QActionGroup(this);
    radioMenuGroup->setExclusive(true);
    radioMenuGroup->addAction(ui->actionArial);
    radioMenuGroup->addAction(ui->actionConsolas);
    radioMenuGroup->addAction(ui->actionTimes_New_Roman);
    radioMenuGroup->addAction(ui->actionDefault_Font);
    radioMenuGroup->addAction(ui->actionHeebo);
    QActionGroup* sortMenuGroup=new QActionGroup(this);
    sortMenuGroup->setExclusive(true);
    sortMenuGroup->addAction(ui->actionSize);
    sortMenuGroup->addAction(ui->actionType);
    sortMenuGroup->addAction(ui->actionDate_Created);
    QFileSystemModel* model=new QFileSystemModel(this);
    model->setRootPath(DefaultLocation);
    model->setFilter(QDir::Files);
    ui->filelistView->setModel(model);
    ui->filelistView->setRootIndex(model->index(DefaultLocation));
    ui->filelistView->setColumnWidth(0,250);
    ui->filelistView->setColumnWidth(1,150);
    ui->filelistView->setColumnWidth(2,150);
    ui->filelistView->setColumnWidth(3,150);
    QVBoxLayout* rightPanelLayout=new QVBoxLayout(ui->rightPanel);
    rightPanelLayout->addWidget(ui->ImageLabel);
    rightPanelLayout->addWidget(ui->DescLabel);
    rightPanelLayout->addStretch();
    rightPanelLayout->addWidget(ui->openButton);
    rightPanelLayout->addWidget(ui->closeButton);
    rightPanelLayout->addWidget(ui->moreActions);
    gridLayout=new QGridLayout(ui->centralwidget);
    gridLayout->addWidget(ui->currentRootDisplay,0,0,1,2);
    gridLayout->addWidget(ui->filelistView,1,0,3,2);
    gridLayout->addWidget(ui->rightPanel,1,2,3,1);
    ui->filelistView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->currentRootDisplay->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    ui->rightPanel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->currentRootDisplay->setFixedHeight(45);
    gridLayout->setColumnStretch(0,3);
    gridLayout->setColumnStretch(1,2);
    gridLayout->setColumnStretch(2,3);
    gridLayout->setRowStretch(0,1);
    gridLayout->setRowStretch(1,1);
    gridLayout->setRowStretch(2,1);
    setCentralWidget(ui->centralwidget);
}
MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::on_actionNew_File_triggered() {
    New_File_On_Action_Dialog Object(this);
    if (Object.exec() != QDialog::Accepted)
        return;
    QString path = Object.userPath();
    // 1. Validate input path
    QFileInfo fileInfo(path);
    if (fileInfo.isDir()) {
        QMessageBox::warning(this, "Error", "Cannot write to a directory");
        return;
    }
    // 2. Create QFile instance
    QFile* file = new QFile(path);
    QFileInfo infoOfFile(path);
    if(!file->isOpen()){
        file->open(QIODevice::ReadWrite|QIODevice::Text);
        ui->DescLabel->setText(QString("File Name: %1 \nFile Created: %2").arg(infoOfFile.fileName()).arg(infoOfFile.birthTime().toString()));
    }
    QString FileContent=util::retFileContents(file) ;
    // 3. Handle quick editor mode
    if (quickEditorOpen) {
        TextEditorWindow* textEditor = new TextEditorWindow(this, path);
        textEditor->SetTextFromFile(FileContent);
        textEditor->setWindowTitle(fileInfo.fileName());
        textEditor->exec();
        delete file;
        return;
    }
    // 4. Non-quick-editor mode
    setButtonConditions(true);
    setWorkingPath(getWorkingPath()+path);
    ui->moreActions->setVisible(false);
    // 5. Set up the text editor widget
    qpt = new QPlainTextEdit(this);
    ui->filelistView->setVisible(false);
    gridLayout->addWidget(qpt, 1, 0, 2, 2);
    qpt->setMaximumSize(ui->filelistView->maximumSize());
    qpt->setSizePolicy(ui->filelistView->sizePolicy());
    ui->openButton->setText("Save Changes");
    qpt->setPlainText(FileContent);
    editingMode = true;
    ui->closeButton->setText("Close Editor");
    file->close();
    delete file;
}
void MainWindow::on_actionOpen_File_triggered() {
    QFileDialog* qfiledialog=new QFileDialog(this,"Choose a file","C:\\","Text files (*.txt);;All files (*)");
    if(qfiledialog->exec()==QFileDialog::Accepted){
        QString path=qfiledialog->selectedFiles().first();
        if(QFileInfo(path).isDir()){
            QMessageBox::warning(this,"Error","Cannot open a directory");
            return;
        }
        QFile *file=new QFile(path);
        QFileInfo infoOfFile(path);
        if(!file->isOpen()){
            if(!file->open(QIODevice::ReadWrite|QIODevice::Text)){
                QMessageBox::warning(this,"Error","Cannot open the file");
                return;
            }
            ui->DescLabel->setText(QString("File Name: %1 \nFile Created: %2").arg(infoOfFile.fileName()).arg(infoOfFile.birthTime().toString()));
        }
        QString FileContent=util::retFileContents(file) ;
        setWorkingPath(path);
        if(quickEditorOpen){
            TextEditorWindow *newTextEditor=new TextEditorWindow(this,path);
            newTextEditor->SetTextFromFile(FileContent);
            newTextEditor->exec();
            file->close();
            return;
        }
        setButtonConditions(true);
        ui->moreActions->setVisible(false);
        qpt = new QPlainTextEdit(this);
        ui->filelistView->setVisible(false);
        gridLayout->addWidget(qpt, 1, 0, 2, 2);
        qpt->setMaximumSize(ui->filelistView->maximumSize());
        qpt->setSizePolicy(ui->filelistView->sizePolicy());
        ui->openButton->setText("Save Changes");
        qpt->setPlainText(FileContent);
        editingMode = true;
        ui->closeButton->setText("Close Editor");
        file->close();
        delete file;
    }
}
void MainWindow::on_actionNew_Directory_triggered() {
    newDirectoryCreation *newDirWindow=new newDirectoryCreation(this,this);
    newDirWindow->exec();
}
void MainWindow::on_actionOpen_Directory_triggered() {
    QString dirPath=QFileDialog::getExistingDirectory(this,"Select a directory");
    if(!dirPath.isEmpty()){
        dontchange=false;
        setWorkingPath(dirPath+"/");
        return;
    }
    setWorkingPath(DefaultLocation);
}

void MainWindow::on_actionHelp_triggered() {

}
void MainWindow::on_actionSize_triggered()
{
    ui->filelistView->sortByColumn(1,Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_actionHow_to_use_triggered()
{

}
void MainWindow::on_actionType_triggered()
{
    ui->filelistView->sortByColumn(3,Qt::SortOrder::AscendingOrder);
}
void MainWindow::on_actionDate_Created_triggered()
{
    ui->filelistView->sortByColumn(3,Qt::SortOrder::AscendingOrder);
}
void MainWindow::on_actionSet_Password_triggered()
{

}
void MainWindow::on_actionChange_Password_triggered()
{

}
QString MainWindow::getWorkingPath() const
{
    return ui->currentRootDisplay->toPlainText();
}

void MainWindow::setWorkingPath(const QString &newWorkingPath)
{   if(!dontchange){
        QFileSystemModel* model=new QFileSystemModel(this);
        model->setFilter(QDir::Files);
        model->setRootPath(newWorkingPath);
        ui->filelistView->setModel(model);
        ui->filelistView->setRootIndex(model->index(newWorkingPath));
        dontchange=false;
    }
    ui->currentRootDisplay->setPlainText(newWorkingPath);
}
void MainWindow::on_filelistView_doubleClicked(const QModelIndex &index)
{
    QFileSystemModel* model=qobject_cast<QFileSystemModel*>(ui->filelistView->model());
    if(model){
        setButtonConditions(true);
        QString fullPath=model->filePath(index);
        QFileInfo file(fullPath);
        ui->DescLabel->setWordWrap(true);
        QString DisplayString=QString("File Name: %1 \nFile Created: %2").arg(file.fileName()).arg(file.birthTime().toString());
        dontchange=true;
        setWorkingPath(fullPath);
        ui->DescLabel->setText(DisplayString);
    }
}
void MainWindow::on_openButton_clicked()
{
    QFile* file=new QFile(getWorkingPath());
    if(!file->isOpen()){
        if(!file->open(QIODevice::ReadWrite|QIODevice::Text)){
            QMessageBox::warning(this,"Error","Error: Could not open the file",QMessageBox::Ok);
            return;
        }
    }
    setButtonConditions(true);
    ui->moreActions->setVisible(false);
    if(editingMode){
        QString content=qpt->toPlainText(); 
        util::Copyinto(content,file);
        if(file->isOpen()){
            file->close();
            delete file;
            file=nullptr;
        }
        QMessageBox::information(this,"Saved","The changes were succsessfully saved!",QMessageBox::Ok);
        return;
    }
    qpt=new QPlainTextEdit(this);
    ui->filelistView->setVisible(false);
    gridLayout->addWidget(qpt,1,0,2,2);
    qpt->setMaximumSize(ui->filelistView->maximumSize());
    qpt->setSizePolicy(ui->filelistView->sizePolicy());
    ui->openButton->setText("Save Changes");
    qpt->setPlainText(util::retFileContents(file));
    editingMode=true;
    ui->closeButton->setText("Close Editor");
}
void MainWindow::on_actionSettings_triggered()
{
    settingsDialog *settings= new settingsDialog(this,this);
    settings->exec();
}
void MainWindow::on_closeButton_clicked()
{
    if(editingMode){
        if(QMessageBox::information(this,"Confirmation","Do you want to close the editor? All the unsaved changes you have made will be lost.",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes){
            ui->openButton->setText("Open");
            ui->closeButton->setText("Info");
            qpt->setVisible(false);
            gridLayout->removeWidget(qpt);
            ui->filelistView->setVisible(true);
            QFileSystemModel* model=new QFileSystemModel(this);
            model->setRootPath(util::retDirPath(getWorkingPath()));
            model->setFilter(QDir::Files);
            ui->filelistView->setModel(model);
            ui->filelistView->setRootIndex(model->index(util::retDirPath(getWorkingPath())));
            editingMode=false;
            setButtonConditions();
            return;
        }
    }
    QFileInfo file(getWorkingPath());
    QString fileInformationStr=QString
    (R"(File Name: %1
File Created: %2
File Type: .%3
File Size: %4 bytes
File Last Modified: %5
    )").arg(file.baseName()).arg(file.birthTime().toString()).arg(file.completeSuffix()).arg(file.size()).arg(file.lastModified().toString());
    fileInformation* newDialog=new fileInformation(this,fileInformationStr);
    newDialog->adjustSize();
    newDialog->exec();
}
void MainWindow::on_actionDecrease_Font_Size_triggered()
{
    QFont font=ui->centralwidget->font();
    font.setPointSize(--fontSize);
    ui->centralwidget->setFont(font);
}
void MainWindow::on_actionIncrease_Font_Size_triggered()
{
    QFont font=ui->centralwidget->font();
    font.setPointSize(++fontSize);
    ui->centralwidget->setFont(font);
}
void MainWindow::on_actionDefault_Font_triggered()
{
    SetFont();
}
void MainWindow::on_actionHelvetica_triggered()
{
    SetFont(ui->actionHeebo->font());
}
void MainWindow::on_actionArial_triggered()
{
    SetFont(ui->actionArial->font());
}

void MainWindow::on_actionTimes_New_Roman_triggered()
{
    SetFont(ui->actionTimes_New_Roman->font());
}
void MainWindow::on_actionConsolas_triggered()
{
    SetFont(ui->actionConsolas->font());
}
void MainWindow::on_moreActions_currentTextChanged(const QString &text)
{
    if(text=="Select Actions"){
        return;
    }
    else if(text=="Delete File"){
        if(throwDialog){
            if(QMessageBox::information(this,"Confirmation","Are you sure you want to delete the file? All the data will be lost.",QMessageBox::Yes|QMessageBox::No)==QMessageBox::No){
                return;
            }
        }
        QFile file(getWorkingPath());
        if (file.isOpen())
            file.close();
        if(file.remove()){
            QMessageBox::information(this,"Alert","The File has been deleted",QMessageBox::Ok);
            setButtonConditions();
            setWorkingPath(util::retDirPath(getWorkingPath()));
            return;
        }
        else{
            QMessageBox::warning(this,"Error","Error: Could not delete the file",QMessageBox::Ok);
            return;
        }
    }
    else if(text=="Clone File"){
        qDebug()<<getWorkingPath();
        QFile* file=new QFile(getWorkingPath());

        QString contents=util::retFileContents(file);
        if(file->fileName().contains("__cloneof__")){
            QMessageBox::warning(this,"Error","This File is already a clone of another file");
            return;
        }
        QString array[5]={".c",".cpp",".txt",".h",".py"};
        QString befString="";
        for(QString format:array){
            if(getWorkingPath().contains(format)){
                int s=getWorkingPath().lastIndexOf('/');
                befString=getWorkingPath().insert(s+1,"__cloneof__");
                break;
            }
        }
        if(befString.isEmpty()){
            QMessageBox::warning(this,"Failed","Unsupported Format");
            return;
        }
        QFileInfo fileCheck(befString);
        if(fileCheck.exists()){
            QMessageBox::warning(this,"Failure",QString("A clone of the file %1 already exists").arg(file->fileName()));
            return;
        }
        file->close();
        QFile newfile(befString);
        if(newfile.isOpen())newfile.close();
        if(!newfile.open(QIODevice::ReadWrite|QIODevice::Text)){
            QMessageBox::warning(this,"Could not clone","Error: Could not create a clone",QMessageBox::Ok);
            return;
        }
        util::Copyinto(contents,&newfile);
        newfile.close();
    }
}
