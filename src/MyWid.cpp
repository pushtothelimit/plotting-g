
#include<MyWid.h>

#include <iostream>
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




MyWid::MyWid() : QWidget() {
		


}
		

		
void MyWid::update(){
            /*
			//*str=txte1->toPlainText();
			bool ok;
			gotnum=(txte1->displayText()).toInt(&ok,10);
			plot1->listcrea(gotnum);
			//std::cout<<gotnum<<'\n';
            */
		}
		
/* Check if the file exist and launch the func that will create the
 * point array 
 */
int MyWid::updatefile(){
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
		
void MyWid::toprint(){
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
	
	

	
	








