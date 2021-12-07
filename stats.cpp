#include "stats.h"
#include "ui_stats.h"
#include <QString>
#include<qsqlquery.h>
#include "client.h"

stats::stats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stats)
{
    ui->setupUi(this);
}

stats::~stats()
{
    delete ui;
}
/*void stats::on_lineEdit_textChanged(const QString &arg1)
{
      int id=ui->id->text().toInt();
    // int client::getid() {return id;}
     //void client::setid(int)(int id){this->id=id;}



}




void stats::make()
{
        int e;
        int c;
        int total;

        QSqlQuery q;


        int id=2;



        q.prepare("SELECT COUNT(id) FROM client where id='"+id+"' ");
        q.exec();
        q.first() ;
        e=(q.value(0).toInt());


        q.prepare("SELECT COUNT(id) FROM client  ");
        q.exec();
        q.first() ;
        total=(q.value(0).toInt());

        e=((double)e/(double)total)*100;
        c=100-e;

        id= int::number(e); //selon ton id

        QPieSeries *series;
         series= new  QPieSeries();
         series->append("id"+id+"%",e);

         QPieSlice *slice0 = series->slices().at(0);
          slice0->setLabelVisible();

          QPieSlice *slice1 = series->slices().at(1);
             slice1->setExploded();
             slice1->setLabelVisible();
             slice1->setPen(QPen(Qt::darkRed, 2));
             slice1->setBrush(Qt::black);

              QChart *chart = new QChart();
              chart->addSeries(series);
              chart->setTitle("Statistiques sur les clients ");
              chart->legend()->show();
              QChartView *chartView = new QChartView(chart);
              chartView->setRenderHint(QPainter::Antialiasing);
              ui->verticalLayout->addWidget(chartView);

}
*/
