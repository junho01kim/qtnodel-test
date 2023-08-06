#include <QCoreApplication>
#include <QBitArray>
#include <QByteArray>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QBitArray ba;
    QByteArray aa("hello");
    QByteArray ab;
    ab.resize(3);
    ab[0]=0xff;
    char *tt = aa.data();
    ba.resize(3);
    ba[0] = true;
    ba[1] = 0;
    ba.setBit(2,true);
    qDebug()<<ba[2];
    qDebug()<<aa;
    qDebug()<<ab[0];
    qDebug()<<ab.at(0);
    qDebug()<<tt;
    return a.exec();
}
