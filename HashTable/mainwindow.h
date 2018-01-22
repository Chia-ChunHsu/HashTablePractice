#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <map>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_testButton_clicked();

    void on_addButton_clicked();

    void on_findButton_clicked();

private:
    Ui::MainWindow *ui;
    std::map<std::string,int> _commandLine;
    std::map<std::string,int>::iterator _iter;
};

#endif // MAINWINDOW_H
