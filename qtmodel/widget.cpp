#include "widget.h"
#include "ui_widget.h"
#include <QStandardItemModel>
#include <QStringListModel>
#include <QTableView>
#include <QVBoxLayout>
#include <QFileSystemModel>
#include <QSplitter>
#include <QTreeView>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QStandardItemModel *model1 = new QStandardItemModel(0,3);
    model1->setHeaderData(0,Qt::Horizontal,QObject::tr("Subject"));
    model1->setHeaderData(1,Qt::Horizontal,QObject::tr("Description"));
    model1->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));

    model1->setVerticalHeaderItem(0,new QStandardItem("col1"));
    model1->setVerticalHeaderItem(1,new QStandardItem("col2"));

    model1->setData(model1->index(0,0),"data00");
    model1->setData(model1->index(0,1),"data01");
    model1->setData(model1->index(0,2),"data02");
    model1->setData(model1->index(1,0),"data10");
    model1->setData(model1->index(1,1),"data11");
    model1->setData(model1->index(1,2),"data12");


    QTableView *view = new QTableView();
    view->setModel(model1);

    QStringList datalist;
    datalist.append("data0");
    datalist.append("data1");
    datalist.append("data2");
    QAbstractItemModel *model2 = new QStringListModel(datalist);
    //QStringListModel *model2 = new QStringListModel();


    //model2->setStringList(datalist);

    QListView *listview = new QListView();
    listview->setModel(model2);

    QSplitter *splitter = new QSplitter();
    QFileSystemModel *model3 = new QFileSystemModel;
    model3->setRootPath(QDir::rootPath());//QDir::currentPath()

    QTreeView *treeview = new QTreeView(splitter);
    treeview->setModel(model3);
    treeview->setRootIndex(model3->index(QDir::rootPath()));

    QListView *listview2 = new QListView(splitter);
    listview2->setModel(model3);
    listview2->setRootIndex(model3->index(QDir::rootPath()));


    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(view);
    layout->addWidget(listview);
    layout->addWidget(splitter);

    setLayout(layout);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

