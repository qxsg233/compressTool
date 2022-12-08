#include "formuncompress.h"
#include "ui_formuncompress.h"

FormUncompress::FormUncompress(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormUncompress)
{
    ui->setupUi(this);
    ui->listWidget_fileList->clear();

    connect(ui->pushButton_addFile, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_addFile_clicked(bool)));
    connect(ui->pushButton_deleteFile, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_deleteFile_clicked(bool)));
    connect(ui->pushButton_clearFile, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_clearFile_clicked(bool)));
    connect(ui->pushButton_outputPath, SIGNAL(clicked(bool)), this, SLOT(slot_pushButton_outputPath_clicked(bool)));
}

FormUncompress::~FormUncompress()
{
    delete ui;
}

void FormUncompress::slot_pushButton_addFile_clicked(bool)
{
    QStringList strList = QFileDialog::getOpenFileNames();
    int count = ui->listWidget_fileList->count();
    QStringList widgetList;
    for(int i=0; i<count; i++)
    {
        widgetList.append(ui->listWidget_fileList->item(i)->text());
    }
    foreach (QString temp, strList) {
        bool isExist = false;
        for(int i=0; i<widgetList.size(); i++)
        {
            if(widgetList.at(i) == temp)
            {
                isExist = true;
                break;
            }
        }
        if(isExist == false)
        {
            ui->listWidget_fileList->addItem(temp);
        }
    }
}

void FormUncompress::slot_pushButton_deleteFile_clicked(bool)
{
    delete ui->listWidget_fileList->currentItem();
}

void FormUncompress::slot_pushButton_clearFile_clicked(bool)
{
    ui->listWidget_fileList->clear();
}

void FormUncompress::slot_pushButton_outputPath_clicked(bool)
{
    QString path = QFileDialog::getExistingDirectory();
    ui->lineEdit_outputPath->setText(path+"/");
}
