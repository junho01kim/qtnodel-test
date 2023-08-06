#include "widget.h"
#include "ui_widget.h"

Widget::Widget(const QString& name, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setName(name);
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::task1);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Widget::task2);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::setName(const QString& name)
{
    ui->checkBox->setText(name);
}

QString Widget::name() const
{
    return ui->checkBox->text();
}

bool Widget::isCompleted() const
{
    return ui->checkBox->isChecked();
}

void Widget::task1()
{
    this->checkstatus = isCompleted();
    qDebug()<<"checkbox:"<<this->checkstatus;

}

void Widget::task2()
{
    this->checkname = name();
    qDebug()<<"checkboxname:"<<this->checkname;
}
