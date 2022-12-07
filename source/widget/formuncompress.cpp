#include "formuncompress.h"
#include "ui_formuncompress.h"

FormUncompress::FormUncompress(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormUncompress)
{
    ui->setupUi(this);
}

FormUncompress::~FormUncompress()
{
    delete ui;
}
