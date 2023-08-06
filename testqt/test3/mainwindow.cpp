#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
#include <QInputDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //, mTasks()
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::addTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask()
{
#ifdef task1
    qDebug()<<"Adding new Task";
    QString stringq = "test";
    Task* task = new Task(stringq);
    task->printString();
    mTasks.append(task);
#else
    bool ok;
    QString name = QInputDialog::getText(this,
                                         tr("Add Task"),
                                         tr("Task name"),
                                         QLineEdit::Normal,
                                         tr("untitled task"),&ok);
    if(ok && !name.isEmpty())
    {
        qDebug() << "Adding new task";
        Task* task = new Task();
        //task->printString();

        mTasks.append(task);

        ui->horizontalLayout->addWidget(NULL);

    }
#endif
}

