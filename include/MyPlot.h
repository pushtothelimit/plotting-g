#ifndef MYPLOT_H
#define MYPLOT_H

#include <QObject>
#include <QWidget>
#include <QApplication>
#include <QBoxLayout>
#include <QPushButton>
#include <QVector>
#include <QTextStream>
#include <iostream>
#include <cmath>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_renderer.h>

class MyPlot : public QwtPlot
{
    Q_OBJECT

public:
    MyPlot();
    ~MyPlot();

    /* TODO: put these thing as private members, we cannot give public access to class data (properties)
     * we have to use members (e.g. setPos())
     * create a structure to cointain xp and yp array in order to have more logical approach (we could also
     * implement a polar system inside the same structure and other stuffs like this one...
     */

    void listcreafile(QString str);
    void setlist();


public slots:
    void listcrea(int npoint);

private:
    QVector<double> xp,yp;
   // QVsector<double> yp;

    QwtPlotCurve* curve1;
    QwtPlotRenderer *printer;
};

#endif // MYPLOT_H
