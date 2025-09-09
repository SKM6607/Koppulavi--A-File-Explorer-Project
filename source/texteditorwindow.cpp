#include "texteditorwindow.h"
#include "ui_texteditorwindow.h"
#include "mainwindow.h"
#include "texteditorsettings.h"
#include<QWidget>
#include<Qmenu>
#include<QMenuBar>
#include <QActionGroup>
#include "other.h"
#include <QFont>
#include <QMessageBox>
#include <QFileDialog>
int TextEditorWindow::fontSize=14;
TextEditorWindow::TextEditorWindow(QWidget *parent,QString FilePath):QDialog(parent),ui(new Ui::TextEditorWindow){
    ui->setupUi(this);
    filepath=FilePath;
    setFixedSize(435,650);
    textEditorMenuBar=new QMenuBar(this);
    QMenu* homeMenu=new QMenu("Home",this);
    QMenu* fontAction=new QMenu("Font Actions",this);
    QAction* increaseFontAction=new QAction("Increase font size",this);
    QAction* decreaseFontAction=new QAction("Decrease font size",this);
    QMenu* changeFontAction=new QMenu("Change font style",this);
    fontGroup=new QActionGroup(this);
    QAction* fontOne=new QAction("Segoe UI",this);
    QAction* fontTwo=new QAction("Arial",this);
    QAction* fontThree=new QAction("Helvetica",this);
    QAction* fontFour=new QAction("Consolas",this);
    fontOne->setCheckable(true);
    fontOne->setChecked(true);
    fontTwo->setCheckable(true);
    fontThree->setCheckable(true);
    fontFour->setCheckable(true);
    fontGroup->addAction(fontOne);
    fontGroup->addAction(fontTwo);
    fontGroup->addAction(fontThree);
    fontGroup->addAction(fontFour);
    fontGroup->setExclusive(true);
    changeFontAction->addAction(fontOne);
    changeFontAction->addAction(fontTwo);
    changeFontAction->addAction(fontThree);
    changeFontAction->addAction(fontFour);
    homeMenu->addMenu(fontAction);
    homeMenu->addSeparator();
    fontAction->addMenu(changeFontAction);
    fontAction->addSeparator();
    fontAction->addAction(increaseFontAction);
    fontAction->addAction(decreaseFontAction);
    QMenu* saveFileAction=new QMenu("Save Changes",this);
    QAction* saveAction=new QAction("Save File",this);
    QAction* saveAsAction=new QAction("Save File as",this);
    saveFileAction->addAction(saveAction);saveFileAction->addAction(saveAsAction);
    homeMenu->addMenu(saveFileAction);
    QAction* settingsAction=new QAction("Settings",this);
    homeMenu->addAction(settingsAction);
    textEditorMenuBar->addMenu(homeMenu);
    connect(increaseFontAction,&QAction::triggered,this,&increaseFontSize);
    connect(decreaseFontAction,&QAction::triggered,this,&decreaseFontSize);
    connect(fontGroup,&QActionGroup::triggered,this,[=](QAction* qaction){
        const QString selF=qaction->text();
        QFont font(selF,fontSize);
        ui->textEdit->setFont(font);
    });
    connect(saveAction,&QAction::triggered,this,[=](){
        QString pathof=FilePath;
        QFile qfile(pathof);
        if(!qfile.isOpen()){
            if(!qfile.open(QIODevice::WriteOnly|QIODevice::Text)){
                QMessageBox::warning(this,"Error","An Error occured");
                return;
            }
        }
        util::Copyinto(getTextFromTextEdit(),&qfile);
        qfile.close();
    });
    connect(saveAsAction,&QAction::triggered,this,[=](){
        QString path=QFileDialog::getSaveFileName(this,"Enter the Name of the file","C:/","All Files(*);;Text Files (*.txt);;C Files(*.c);;Cpp Files(*.cpp);;Python Files(*.py)");
        QFile* fileOpen=new QFile(path);
        if(!fileOpen->isOpen()){
            if(!fileOpen->open(QIODevice::WriteOnly|QIODevice::Text)){
                QMessageBox::warning(this,"Error","An Error occured");
                return;
            }
        }
        util::Copyinto(getTextFromTextEdit(),fileOpen);
        fileOpen->close();
    });
    connect(settingsAction,&QAction::triggered,this,settingsDialogBox);
}
TextEditorWindow::~TextEditorWindow(){
    delete ui;
}
void TextEditorWindow::increaseFontSize(){
    QFont font=ui->textEdit->font();
    font.setPointSize(++fontSize);
    ui->textEdit->setFont(font);
}
void TextEditorWindow::decreaseFontSize(){
    QFont font=ui->textEdit->font();
    font.setPointSize(--fontSize);
    ui->textEdit->setFont(font);
}

void TextEditorWindow::settingsDialogBox(){
    textEditorSettings newWindow;
    newWindow.exec();
}
QMenuBar* TextEditorWindow::retControlMenuBar()
{
    return textEditorMenuBar;
}

QDialogButtonBox* TextEditorWindow::retControlButtonBox()
{
    return ui->buttonBox;
}
void TextEditorWindow::SetTextFromFile(QString Content){
    ui->textEdit->setText(Content);
}
QString TextEditorWindow::getTextFromTextEdit(){
    return ui->textEdit->toPlainText();
}

void TextEditorWindow::on_buttonBox_accepted()
{
    QString pathof=filepath;
    QFile qfile(pathof);
    if(!qfile.isOpen()){
        if(!qfile.open(QIODevice::WriteOnly|QIODevice::Text)){
            QMessageBox::warning(this,"Error","An Error occured");
            return;
        }
    }
    util::Copyinto(getTextFromTextEdit(),&qfile);
    qfile.close();
}

