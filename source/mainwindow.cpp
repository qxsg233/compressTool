#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //实例化对象
    QMenu *pMenuOrder = new QMenu(tr("菜单"), this);
    QAction *pActionPassword = new QAction(tr("密码"), this);
    QAction *pActionSet = new QAction(tr("设置"), this);
    QAction *pActionAbout = new QAction(tr("关于"), this);
    ui->menuBar->addMenu(pMenuOrder);
    ui->menuBar->addAction(pActionAbout);
    pMenuOrder->addAction(pActionPassword);
    pMenuOrder->addAction(pActionSet);

    //连接槽函数
    connect(pActionPassword, SIGNAL(triggered(bool)), this, SLOT(slot_actionPassword_triggered(bool)));
    connect(pActionSet, SIGNAL(triggered(bool)), this, SLOT(slot_actionSet_triggered(bool)));
    connect(pActionAbout, SIGNAL(triggered(bool)), this, SLOT(slot_actionAbout_triggered(bool)));
    connect(ui->pushButton_compress, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_compress_clicked(bool)));
    connect(ui->pushButton_uncompress, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_uncompress_clicked(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_actionPassword_triggered(bool)
{
    qDebug()<<"slot_actionPassword_triggered";
}

void MainWindow::slot_actionSet_triggered(bool)
{
    qDebug()<<"slot_actionSet_triggered";
}

void MainWindow::slot_actionAbout_triggered(bool)
{
    qDebug()<<"slot_actionAbout_triggered";
}

void MainWindow::slot_pushButton_compress_clicked(bool)
{
    qDebug()<<"slot_pushButton_compress_clicked";
}

void MainWindow::slot_pushButton_uncompress_clicked(bool)
{
    qDebug()<<"slot_pushButton_uncompress_clicked";
}
