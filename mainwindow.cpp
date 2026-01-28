#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QRandomGenerator>
#include <QDesktopServices>
#include <QUrl>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->balance_label->setText(QString::number(QRandomGenerator::global()->bounded(1000, 1000001)) + " $");

    connect(ui->twitchButt, &QPushButton::clicked, this, [](){
        QDesktopServices::openUrl(QUrl("https://www.twitch.tv/"));
    });
    connect(ui->workButt, &QPushButton::clicked, this, [](){
        QDesktopServices::openUrl(QUrl("https://studmarket.ru/"));
    });
    connect(ui->sak_butt, &QPushButton::clicked, this, [](){
        QDesktopServices::openUrl(QUrl("https://deadbydaylight.com/"));
    });
}

MainWindow::~MainWindow()
{
    delete ui;

}

