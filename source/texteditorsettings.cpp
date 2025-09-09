#include "texteditorsettings.h"
#include "ui_texteditorsettings.h"

textEditorSettings::textEditorSettings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::textEditorSettings)
{
    ui->setupUi(this);
}

textEditorSettings::~textEditorSettings()
{
    delete ui;
}

void textEditorSettings::on_checkBox_clicked(bool checked)
{

}

