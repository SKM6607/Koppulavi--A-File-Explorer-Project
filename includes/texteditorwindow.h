#ifndef TEXTEDITORWINDOW_H
#define TEXTEDITORWINDOW_H

#include <QDialog>
#include <QMenuBar>
#include <QDialogButtonBox>
namespace Ui {
class TextEditorWindow;
}

class TextEditorWindow : public QDialog
{
    Q_OBJECT
public:
    QMenuBar* retControlMenuBar();
    QDialogButtonBox* retControlButtonBox();
    void SetTextFromFile(QString Content);
    QString getTextFromTextEdit();
    explicit TextEditorWindow(QWidget *parent = nullptr,QString FilePath="C:/");
    ~TextEditorWindow();
private slots:
    void increaseFontSize();
    void decreaseFontSize();
    void settingsDialogBox();
    void on_buttonBox_accepted();
private:
    QString filepath;
    static int fontSize;
    Ui::TextEditorWindow *ui;
    QMenuBar* textEditorMenuBar;
    QMenu* homeMenu;
    QMenu* fontAction;
    QAction* increaseFontAction;
    QAction* decreaseFontAction;
    QAction* changeFontAction;
    QAction* saveAction;
    QAction* saveAsAction;
    QAction* settingsAction;
    QMenu *mode;
    QActionGroup* fontGroup;
};

#endif // TEXTEDITORWINDOW_H
