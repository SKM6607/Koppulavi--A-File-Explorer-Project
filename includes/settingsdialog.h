#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class settingsDialog;
}

class settingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingsDialog(QWidget *parent = nullptr,MainWindow* mainWindow=nullptr);
    ~settingsDialog();

private slots:
    void on_defFolderLocationRadio_clicked(bool checked);

    void on_confirmdfLocationButton_clicked();

private:
    Ui::settingsDialog *ui;
    MainWindow* controlPtr;
};

#endif // SETTINGSDIALOG_H
