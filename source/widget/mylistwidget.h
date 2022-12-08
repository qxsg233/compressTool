#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QListWidget>

class MyListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit MyListWidget(QListWidget *parent = 0);



};

#endif // MYLISTWIDGET_H
