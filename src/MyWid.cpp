#include "MyWid.h"
#include "ui_MyWid.h"

#include <qwidget.h>
#include <QStyle>
#include <QBoxLayout>
#include <qpushbutton.h>
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
}

MyWid::~MyWid()
{
    delete ui;
}


void MyWid::on_densityBtn_pressed(){

    /*
            //*str=txte1->toPlainText();
            bool ok;
            gotnum=(txte1->displayText()).toInt(&ok,10);
            plot1->listcrea(gotnum);
            //std::cout<<gotnum<<'\n';
    */
        }

int MyWid::on_readFileBtn_pressed(){
    /*
    int outVal = 0;
    QString fileName;
    fileName=txte02->displayText();
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
    */
}

void MyWid::on_exportBtn_pressed(){
    /*
    QString * strName =new QString;
    QString *strExt = new QString;
    *strExt=combo2->currentText();
    *strName=txte2->displayText();
    strName->append('.');
    strName->append(strExt);
    QwtPlotRenderer *printer=new QwtPlotRenderer;
    printer->renderDocument(plot1,*strName,*strExt,QSizeF( 300, 200 ), 85);
    delete printer;
    delete strName;
    delete strExt;
    */
    }
