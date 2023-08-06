#ifndef TASK_H
#define TASK_H
//#include <QInputDialog>
#include <QWidget>
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class Task; }
QT_END_NAMESPACE
class Task : public QWidget
{
    Q_OBJECT
public:
    Task(QWidget *parent = nullptr);
    ~Task();

public slots:
   // void rename();
signals:
   // void removed(Task* task);
private:
  Ui::Task *ui;
    //QString qname;
};



#endif // TASK_H

