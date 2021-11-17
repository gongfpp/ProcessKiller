#include "mainwindow.h"
#include <QApplication>
#include "QDebug"
#include "QTextCodec"
#pragma execution_character_set(“utf-8”)
//设置中文编码

int main(int argc, char *argv[])
{
//#ifdef Q_OS_WIN
//    // Temporary codepage change so we get an automatic font change.
//    system("chcp 936 > nul");
//    // Change to UTF-8.
//    system("chcp 65001 > nul");
//#endif

    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}


//int main(int argc, char *argv[])
//{
//#ifdef Q_OS_WIN
//    // Temporary codepage change so we get an automatic font change.
//    system("chcp 936 > nul");
//    // Change to UTF-8.
//    system("chcp 65001 > nul");
//#endif

//    QApplication a(argc, argv);
//    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
//    QString strMessage = QString::fromUtf8("我是UTF8编码的文件：");
//    qDebug() << strMessage;
//    return a.exec();
//}
