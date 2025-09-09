#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H

#include <QDialog>

namespace Ui {
class fileInformation;
}

class fileInformation : public QDialog
{
    Q_OBJECT

public:
    explicit fileInformation(QWidget *parent = nullptr,QString fileInfo="---NO INFO---");
    ~fileInformation();

private:
    Ui::fileInformation *ui;
};

#endif // FILEINFORMATION_H
