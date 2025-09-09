#ifndef TEXTEDITORSETTINGS_H
#define TEXTEDITORSETTINGS_H

#include <QDialog>

namespace Ui {
class textEditorSettings;
}

class textEditorSettings : public QDialog
{
    Q_OBJECT

public:
    explicit textEditorSettings(QWidget *parent = nullptr);
    ~textEditorSettings();

private slots:
    void on_checkBox_clicked(bool checked);

private:
    Ui::textEditorSettings *ui;
};

#endif // TEXTEDITORSETTINGS_H
