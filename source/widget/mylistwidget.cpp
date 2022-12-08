#include "mylistwidget.h"

MyListWidget::MyListWidget(QWidget *parent) : QListWidget(parent)
{
    this->setAcceptDrops(true);
    this->clear();
    m_list.clear();
}

void MyListWidget::addItem(QString str)
{
    qDebug()<<"addItem";
    if(str.isEmpty())
    {
        return;
    }
    if(m_list.indexOf(str)<0)
    {
        m_list.append(str);
        this->clear();
        this->addItems(m_list);
    }
}

void MyListWidget::addItems(QStringList list)
{
    qDebug()<<"addItems";
    if(list.isEmpty())
    {
        return;
    }

    foreach (QString temp, list) {
        if(m_list.indexOf(temp)>=0)
        {
            list.removeOne(temp);
        }
    }
    this->clear();
    this->addItems(m_list);
}

void MyListWidget::mousePressEvent(QMouseEvent *event)
{
    //qDebug()<<"mousePressEvent"<<event;
}

void MyListWidget::mouseMoveEvent(QMouseEvent *event)
{
    //qDebug()<<"mouseMoveEvent"<<event;
}

void MyListWidget::dragEnterEvent(QDragEnterEvent *event)
{
    QList<QUrl> urls = event->mimeData()->urls();
    foreach (QUrl u, urls) {
        if(QFileInfo(u.toLocalFile()).isFile())
        {
            event->acceptProposedAction();
            return;
        }
    }
}

void MyListWidget::dragMoveEvent(QDragMoveEvent *event)
{
    //qDebug()<<"dragMoveEvent"<<event;
}

void MyListWidget::dropEvent(QDropEvent *event)
{
    //qDebug()<<"dropEvent"<<event;
    QList<QUrl> urls = event->mimeData()->urls();
    if(urls.isEmpty())
    {
        return;
    }
    foreach (QUrl u, urls) {
        QString filepath = u.toLocalFile();
        if(QFileInfo(filepath).isFile())
        {
            this->addItem(filepath);
        }
    }
}
