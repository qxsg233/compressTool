#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void slot_actionPassword_triggered(bool);       //密码活动点击事件槽函数
    void slot_actionSet_triggered(bool);            //设置活动点击事件槽函数
    void slot_actionAbout_triggered(bool);          //关于活动点击事件槽函数
    void slot_pushButton_compress_clicked(bool);    //压缩按键点击事件槽函数
    void slot_pushButton_uncompress_clicked(bool);  //解压按键点击事件槽函数
private:
    Ui::MainWindow *ui;
    QMenu *pMenuOrder;          //菜单对象指针
    QAction *pActionPassword;   //密码活动对象指针
    QAction *pActionSet;        //设置活动对象指针
    QAction *pActionAbout;      //关于活动对象指针
};

#endif // MAINWINDOW_H
