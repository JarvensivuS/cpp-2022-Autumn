#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGameInfoText("Select playtime and press start game!",25);
    ui->player1Bar->setValue(100);
    ui->player2Bar->setValue(100);
    pQTimer = new QTimer(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    qDebug() << "timeout func";
    if (currentPlayer == 1) {
        player1Time--;
    } else if (currentPlayer == 2) {
        player2Time--;
    }

    updateProgressBar();

    if (player1Time == 0) {
        setGameInfoText("Player 2 WON!!!",40);
        pQTimer->stop();
    } else if (player1Time == 0) {
        setGameInfoText("Player 2 WON!!!",40);
        pQTimer->stop();
    }

}


void MainWindow::on_twoMin_clicked()
{
    setGameInfoText("ready to play",15);
    ui->twoMin->setDown(true);
    ui->fiveMin->setDown(false);
    gametime = 120;
    qDebug() << "gametime = 120";
    ui->player1Bar->setMaximum(gametime);
    ui->player2Bar->setMaximum(gametime);
    ui->player1Bar->setMinimum(0);
    ui->player2Bar->setMinimum(0);
    ui->player1Bar->setValue(gametime);
    ui->player2Bar->setValue(gametime);
    player1Time = gametime;
    player2Time = gametime;
}


void MainWindow::on_fiveMin_clicked()
{
    setGameInfoText("ready to play",15);
    ui->twoMin->setDown(false);
    ui->fiveMin->setDown(true);
    gametime = 300;
    qDebug() << "gametime = 300";
    ui->player1Bar->setMaximum(gametime);
    ui->player2Bar->setMaximum(gametime);
    ui->player1Bar->setMinimum(0);
    ui->player2Bar->setMinimum(0);
    ui->player1Bar->setValue(gametime);
    ui->player2Bar->setValue(gametime);
    player1Time = gametime;
    player2Time = gametime;
}


void MainWindow::on_startGame_clicked()
{
    setGameInfoText("game ongoing",20);
    connect(pQTimer, SIGNAL(timeout()),this, SLOT (timeout()));
    pQTimer->start(1000);


    qDebug() << "p1time " << player1Time;
    qDebug() << "p2time " << player2Time;

    currentPlayer = 1;

    qDebug() << "current player " << currentPlayer;



}

void MainWindow::updateProgressBar(){

    if (currentPlayer == 1) {
        ui->player1Bar->setValue(player1Time);
    } else if (currentPlayer == 2) {
        ui->player2Bar->setValue(player2Time);
    }
}


void MainWindow::on_player1Switch_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_player2Switch_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_stopGame_clicked()
{
    pQTimer->stop();
    setGameInfoText("New game via start button",25);
}

void MainWindow::setGameInfoText(QString text, short fontSize) {
    QFont f( "Arial", fontSize, QFont::Bold);
    ui->textLabel->setText(text);
    ui->textLabel->setFont(f);


}



