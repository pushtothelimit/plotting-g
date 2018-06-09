#ifndef MYWID_H
#define MYWID_H

#include <QWidget>

namespace Ui {
class MyWid;
}

class MyWid : public QWidget
{
    Q_OBJECT

public:
    explicit MyWid(QWidget *parent = 0);
    ~MyWid();

private:
    Ui::MyWid *ui;
};

#endif // MYWID_H
