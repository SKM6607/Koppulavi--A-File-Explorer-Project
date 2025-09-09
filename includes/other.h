#include<QFileInfo>
#include"texteditorwindow.h"
#ifndef OTHER_H
#define OTHER_H
class util{
public:
    static bool isFile(QString& path){
        QFileInfo info(path);
        return info.exists()&&info.isFile();
    }
    static void Copyinto(const QString &data,QFile* File){
        if(!File->isOpen()){
            return;
        }
        File->resize(0);
        QTextStream out(File);
        out<<data;
    }
    static QString retFileContents(QFile* file){
        if(!file->exists()){
            return QString("");
        }
        if(!file->isOpen()){
            if(!file->open(QIODevice::ReadOnly|QIODevice::Text)){
                return QString("Error: Opening File");
            }
        }
        QTextStream filein(file);
        return filein.readAll();
    }
    static QString retDirPath(const QString& path){
        QFileInfo qinfo(path);
        int index=path.lastIndexOf('/');
        return path.left(index)+"/";
    }
};
#endif // OTHER_H
