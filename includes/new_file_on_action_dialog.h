#ifndef NEW_FILE_ON_ACTION_DIALOG_H
#define NEW_FILE_ON_ACTION_DIALOG_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class New_File_On_Action_Dialog;
}

class New_File_On_Action_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit New_File_On_Action_Dialog(MainWindow* mainwindow,QWidget *parent = nullptr);
    ~New_File_On_Action_Dialog();
    QString userPath();

private slots:
    void on_comboBox_currentTextChanged(const QString&);
    void on_buttonBox_accepted();

private:
    QString Path;
    Ui::New_File_On_Action_Dialog *ui;
    MainWindow* mainWin;
    QString getRootPath();
    QString getFinalFilePath() const ;
};

#endif // NEW_FILE_ON_ACTION_DIALOG_H
