#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(const QString& name, QWidget *parent = nullptr);
    ~Widget();

    void setName(const QString& name);
    QString name() const;
    bool isCompleted() const;
    void task1();
    void task2();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
