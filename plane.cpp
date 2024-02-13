#include "plane.h"
#include "ui_plane.h"


Plane::Plane(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Plane)
{



    ui->setupUi(this);
    ui->label->hide();
    ui->label_2->hide();
    ui->lineEdit->hide();
     ui->pushButton->hide();


    compute();

}
void Plane::compute()
{



}
Plane::~Plane()
{
    delete ui;
}


void Plane::on_pushButton_2_clicked()
{
    takeInput=false;
    ui->label->hide();
    ui->label_2->hide();
    ui->lineEdit->hide();
    ui->pushButtonAdd->hide();
    ui->pushButton_2->hide();
    ui->pushButton->hide();
//    startSimulation();

}


void Plane::on_pushButtonAdd_clicked()
{

    ui->label->show();
    ui->label_2->show();
    ui->lineEdit->show();
        ui->pushButton->show();

}


void Plane::on_pushButton_clicked()
{
    static int count=0;
    PlaneInfo.resize(count+1);
    PlaneInfo[count]=ui->lineEdit->text();
    ui->lineEdit->setText("");
    count++;
}

