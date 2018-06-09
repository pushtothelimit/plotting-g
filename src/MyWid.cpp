#include "MyWid.h"
#include "ui_MyWid.h"

MyWid::MyWid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWid)
{
    ui->setupUi(this);
}

MyWid::~MyWid()
{
    delete ui;
}
