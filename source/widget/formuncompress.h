#ifndef FORMUNCOMPRESS_H
#define FORMUNCOMPRESS_H

#include <QWidget>
#include <QFileDialog>
#include <QFile>
#include <QDebug>

namespace Ui {
class FormUncompress;
}

class FormUncompress : public QWidget
{
    Q_OBJECT

public:
    explicit FormUncompress(QWidget *parent = 0);
    ~FormUncompress();

private slots:
    void slot_pushButton_addFile_clicked(bool);
    void slot_pushButton_deleteFile_clicked(bool);
    void slot_pushButton_clearFile_clicked(bool);
    void slot_pushButton_outputPath_clicked(bool);
private:
    Ui::FormUncompress *ui;
};

#endif // FORMUNCOMPRESS_H
