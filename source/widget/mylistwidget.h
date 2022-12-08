#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QListWidget>
#include <QDebug>
#include <QDragEnterEvent>
#include <QUrl>
#include <QMimeData>
#include <QFileInfo>

class MyListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit MyListWidget(QWidget *parent = 0);
    void addItem(QString);
    void addItems(QStringList);
private:


    //重写下面两个函数来完成从该部件中拖拽出去的操作.
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    //重写下面三个函数来完成接受外来拖拽的操作.
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);

private:
    QStringList m_list;
};

#endif // MYLISTWIDGET_H
