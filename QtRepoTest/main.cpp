#include "mainwindow.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug()<<"water"<<endl;
    qDebug()<<"ground"<<endl;
    qDebug()<<"round3"<<endl;

    return a.exec();
}
