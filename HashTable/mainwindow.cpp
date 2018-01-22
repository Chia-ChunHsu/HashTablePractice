#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_testButton_clicked()
{

}

void MainWindow::on_addButton_clicked()
{
    std::pair<std::map<std::string,int>::iterator,bool> check;
    int line0 = 0;
    std::string txt0 = "Test0";
    _commandLine[txt0]=line0;

    int line1 = 1;
    std::string txt1 = "Test1";
    _commandLine[txt1] = line1;

    int line5 = 5;
    std::string txt5 = "Test5";
//    _commandLine[txt5] = line5;
    check = _commandLine.insert(std::pair<std::string,int>(txt5,line5));
    if(check.second == false)
        qDebug()<<"Insert Failed";

    int line6 = 6;
    std::string txt6 = "Test5";
//    _commandLine[txt6] = line6;
    check = _commandLine.insert(std::pair<std::string,int>(txt6,line6));
    if(check.second == false)
        qDebug()<<"Insert Failed";
}

void MainWindow::on_findButton_clicked()
{
    std::string findTxt = "Test5";
    qDebug()<<QString::number(_commandLine.find(findTxt)->second);
}
