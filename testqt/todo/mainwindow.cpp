#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::task1 );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::task1()
{
    qDebug() << "test";
}

