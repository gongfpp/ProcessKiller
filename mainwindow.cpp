#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QProcess"
#include "QDebug"
#include "QThreadPool"
#include "processfinder.h"
#include "QInputDialog"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 线程池初始化，设置最大线程池数
    QThreadPool::globalInstance()->setMaxThreadCount(2);


    connect(ui->getProcessButton,&QPushButton::clicked,[&](){
        qDebug() << "lambda";
        // 添加任务
        ProcessFinder* task = new ProcessFinder;
        connect(task,&ProcessFinder::emitUiDisplay,ui->plainTextEdit,&QPlainTextEdit::setPlainText);
        QThreadPool::globalInstance()->start(task);
//        disconnect(task,nullptr,nullptr,nullptr);
    });
//    QThreadPool::globalInstance()->start(task);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_killProcessButton_clicked(bool checked)
{
    QString processName =  QInputDialog::getText(this,QString::fromUtf8("杀！"),
                                       QString::fromUtf8("取其首级！"));
    QStringList params;
    params << "-PID" << processName;
    QProcess process ;
    process.start("taskkill",params);
    process.waitForFinished();
    process.close();
}
