#ifndef FORMUNCOMPRESS_H
#define FORMUNCOMPRESS_H

#include <QWidget>

namespace Ui {
class FormUncompress;
}

class FormUncompress : public QWidget
{
    Q_OBJECT

public:
    explicit FormUncompress(QWidget *parent = 0);
    ~FormUncompress();

private:
    Ui::FormUncompress *ui;
};

#endif // FORMUNCOMPRESS_H
