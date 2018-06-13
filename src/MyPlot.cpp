#include <MyPlot.h>
#include <QTextStream>
#include <QFile>
#include <QVector>

MyPlot::MyPlot()
{
    curve1 = new QwtPlotCurve("Curve 1");
}

MyPlot::~MyPlot(){

    xp.clear();
    yp.clear();
}

void MyPlot::listcrea(int npoint){

   // double  xVal,
     //       yVal;
    //QVector<double> xp,yp;

    std::cout<<"chiamatocrea " << npoint << std::endl;

    //QString prova("sin(x)");

    if (npoint == 0) npoint = 100;

    xp.resize(npoint);
    yp.resize(npoint);

    for(int i=0; i<npoint; i++ )
    {
           xp[i] = ((double)10/npoint)*i;
           yp[i] = 5.0*sin( xp[i]);
    }
        curve1->setSamples(xp,yp);
        xp.clear();
        yp.clear();
        curve1->attach(this);
        this->replot();
        this->show();
}

void MyPlot::listcreafile(QString str){

   //QString * fileName =new QString;
   //*fileName=txte02->displayText();
   QTextStream out(stdout);
   QFile file(str);
   file.open(QIODevice::ReadOnly);
   QTextStream in(&file);
   out<<"File read\n";

   double xaux, yaux;
   int i=0;

    while (!((in>>xaux).atEnd())) {

       xp.push_back(xaux);
       in>>yaux;
       yp.push_back(yaux);
       out << xp[i]<<'\t'<<yp[i]<< endl;
       i++;
   }
   file.close();
   curve1->setSamples(xp,yp);
   xp.clear();
   yp.clear();
   curve1->attach(this);
   this->replot();
   this->show();
}

void MyPlot::setlist(){


}
