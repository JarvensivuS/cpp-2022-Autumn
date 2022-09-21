#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(250,100);

    s = QString::number(number);
    ui->lineEdit->setText(s);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_resetButton_clicked()
{
    number = 0;
    s = QString::number(number);
    ui->lineEdit->setText(s);
}


void MainWindow::on_countButton_clicked()
{
    number++;
    s = QString::number(number);
    ui->lineEdit->setText(s);
}
