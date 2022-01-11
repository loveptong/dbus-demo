#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	connectSignals();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::connectSignals() 
{
	connect(ui->increase1,&QPushButton::clicked,this,&MainWindow::onIncrease1);
	connect(ui->increase2, &QPushButton::clicked, this, &MainWindow::onIncrease2);
	connect(ui->decrease1, &QPushButton::clicked, this, &MainWindow::onDecrease1);
	connect(ui->decrease2, &QPushButton::clicked, this, &MainWindow::onDecrease2);
	connect(ui->reset1, &QPushButton::clicked, this, &MainWindow::onReset1);
	connect(ui->reset2, &QPushButton::clicked, this, &MainWindow::onReset2);
	connect(ui->initDbus1, &QPushButton::clicked, this, &MainWindow::onInitDBus1);
	connect(ui->initDbus2, &QPushButton::clicked, this, &MainWindow::onInitDBus2);
}
void MainWindow::onInitDBus1() 
{
}
void MainWindow::onInitDBus2() 
{
}
void MainWindow::onIncrease1() 
{
}
void MainWindow::onIncrease2() 
{
}
void MainWindow::onDecrease1() 
{
}
void MainWindow::onDecrease2() 
{
}
void MainWindow::onReset1() 
{
}
void MainWindow::onReset2() 
{
}