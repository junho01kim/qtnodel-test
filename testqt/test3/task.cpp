#include "task.h"
//#include "qdebug.h"
//#include "ui_task.h"
//#include "ui_widget.h"


Task::Task(QWidget *parent) :
    QWidget(parent)
    //,ui(new Ui::Task(nullptr))
{
    //Ui::Task *ui1;
    //ui1= new Ui::Task(NULL);
    //ui1->setupUi(this);

    //connect(ui->removeButton, &QPushButton::clicked,[this]{
    //    emit removed(this);
    //});
}

Task::~Task()
{
    //delete ui;
}

