#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<configuration.h>

#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>

#include<wordprocessor.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionRedFont_triggered();

    void on_actionWhiteFont_triggered();

    void on_actionBlackFont_triggered();

    void on_actionYellowFont_triggered();

    void on_actionGreenFont_triggered();

    void on_actionBlueFont_triggered();

    void on_comboBox_activated(int index);

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_comboBox_Font_Size_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
    WordProcessor wordProcessor;
    int timerId;
    void applyConfiguration(Configuraion);
    void loadSpecialWords(std::string);

protected:
    void timerEvent(QTimerEvent *event);
};
#endif // MAINWINDOW_H
