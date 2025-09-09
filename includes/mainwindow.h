#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QString>
#include<QGridLayout>
#include<QSettings>
#include<QPlainTextEdit>
#include<QFont>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QString DefaultLocation="C:/",DefaultTheme,DefaultFormat;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString getWorkingPath() const;
    void setWorkingPath(const QString &newWorkingPath);
private slots:
    void on_actionNew_File_triggered();
    void on_actionOpen_File_triggered();
    void on_actionNew_Directory_triggered();
    void on_actionOpen_Directory_triggered();
    void on_actionHelp_triggered();
    void on_actionSize_triggered();
    void on_actionDate_Created_triggered();
    void on_actionHow_to_use_triggered();
    void on_actionType_triggered();
    void on_actionSet_Password_triggered();
    void on_actionChange_Password_triggered();
    void on_filelistView_doubleClicked(const QModelIndex &index);
    void on_openButton_clicked();
    void on_actionSettings_triggered();
    void on_closeButton_clicked();
    void on_actionDecrease_Font_Size_triggered();
    void on_actionIncrease_Font_Size_triggered();
    void on_actionDefault_Font_triggered();
    void on_actionHelvetica_triggered();
    void on_actionArial_triggered();
    void on_actionTimes_New_Roman_triggered();
    void on_actionConsolas_triggered();
    void on_moreActions_currentTextChanged(const QString &text);

private:
    //Variables
    QFont* defaultFont;
    static int fontSize;
    Ui::MainWindow *ui;
    QGridLayout* gridLayout;
    QPlainTextEdit *qpt;
    //Defaults for Settings
    //Bools
    bool editingMode=false;
    bool dontchange=false;
    bool throwDialog=true;
    bool changeinDefaultFolderLocation=false;
    bool defaultThemeSelected=true;
    bool defaultFormatAllFiles=true;
    bool quickEditorOpen=false;
    //Functions
    void setButtonConditions(bool needed);
    void SetFont(QString);
    void SetFont(QFont);
    void LoadSettings();
    void SaveSettings();
    void SetTheme(QString);
};
#endif // MAINWINDOW_H
