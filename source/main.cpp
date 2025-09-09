#include "mainwindow.h"
#include<QCoreApplication>
#include<QDebug>
#include <QApplication>
#include "cryptohelper.h"
#include <QFileInfo>
#include<QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
