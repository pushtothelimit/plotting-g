#include <MyWid.h>
#include "ui_MyWid.h"

#include <QWidget>
#include <QStyle>
#include <QBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include <QVector>
#include <QTextStream>
#include <QFile>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_series_data.h>

MyWid::MyWid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWid)
{
    ui->setupUi(this);
    plot1 = new MyPlot;
    ui->plotLayout->addWidget(plot1);

}

MyWid::~MyWid()
{
    //delete plot1;
    delete ui;
}


void MyWid::on_densityBtn_pressed(){


            bool ok;
            gotnum=(ui->densityTxt->displayText()).toInt(&ok,10);
            //plot1->listcrea(gotnum);
            plot1->listcrea(gotnum);


        }

int MyWid::on_readFileBtn_pressed(){

    int outVal = 0;
    QString fileName;
    fileName = ui->fileNameTxt->displayText();
    QTextStream out(stdout);
    QFile file(fileName);
    QTextStream in(&file);
    int chk=file.open(QIODevice::ReadOnly);

    if (!chk) {

        out<<"File does not exist";
        outVal = 1;
    }
    else {
        out<<"ho aperto" << endl;
        file.close();
        plot1->listcreafile(fileName);
    }
    return outVal;

}

void MyWid::on_exportBtn_pressed(){

    QString * strName =new QString;
    QString *strExt = new QString;
    *strExt=ui->exportCmb->currentText();
    *strName=ui->densityTxt->displayText();
    strName->append('.');
    strName->append(strExt);
    QwtPlotRenderer *printer=new QwtPlotRenderer;
    printer->renderDocument(plot1,*strName,*strExt,QSizeF( 300, 200 ), 85);
    delete printer;
    delete strName;
    delete strExt;

    }
