#ifndef NEWDIRECTORYCREATION_H
#define NEWDIRECTORYCREATION_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class newDirectoryCreation;
}

class newDirectoryCreation : public QDialog
{
    Q_OBJECT

public:
    explicit newDirectoryCreation(MainWindow* mainwindow,QWidget *parent = nullptr);
    ~newDirectoryCreation();
    QString EditTextString();
private slots:
    void on_comboBox_currentTextChanged(const QString& Text);
    void on_buttonBox_accepted();

private:
    Ui::newDirectoryCreation *ui;
    MainWindow* mui;
};

#endif // NEWDIRECTORYCREATION_H
