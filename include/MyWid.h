#ifndef MYWID_H
#define MYWID_H

#include <QWidget>
#include <QApplication>>
#include <QLineEdit>
#include <QString>
#include <QComboBox>

#include <MyPlot.h>

namespace Ui {
class MyWid;
}

class MyWid : public QWidget
{
    Q_OBJECT

public:
    explicit MyWid(QWidget *parent = 0);
    ~MyWid();

   // MyPlot * plot1 ;
//    QLineEdit * txte01;
//    QLineEdit * txte02;
//    QLineEdit * txte1;
//    QLineEdit * txte2;
//    QComboBox *combo2;
//    QComboBox *combo01;
    int gotnum;
    int x,y,w,h;

public slots:

    void on_densityBtn_pressed();
    int on_readFileBtn_pressed();
    void on_exportBtn_pressed();

private:
    Ui::MyWid *ui;
};

#endif // MYWID_H
