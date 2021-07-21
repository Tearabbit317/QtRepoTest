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

    return a.exec();
}
