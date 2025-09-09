#include "fileinformation.h"
#include "ui_fileinformation.h"

fileInformation::fileInformation(QWidget* parent,QString FileInformation)
    : QDialog(parent)
    , ui(new Ui::fileInformation)
{
    ui->setupUi(this);
    QFont font("Arial");
    font.setPointSize(17);
    ui->FileInfoLabel->setFont(font);
    ui->FileInfoLabel->setText(FileInformation);
}
fileInformation::~fileInformation()
{
    delete ui;
}
