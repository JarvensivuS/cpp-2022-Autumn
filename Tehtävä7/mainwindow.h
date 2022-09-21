#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QThread>
#include <QLabel>
#include <QFrame>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_twoMin_clicked();
    void on_fiveMin_clicked();
    void on_startGame_clicked();
    void on_player1Switch_clicked();
    void on_player2Switch_clicked();
    void on_stopGame_clicked();

private:
    Ui::MainWindow *ui;
    short gametime;
    short player1Time;
    short player2Time;
    short currentPlayer;
    QTimer *pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString,short);
};
#endif // MAINWINDOW_H
