#include "widget.h"
#include "./ui_widget.h"
#include "Serv_client.cpp"
#include <QDebug>
#include <QMessageBox>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_VertBut_clicked()
{
    qDebug()<<"me estriparon we";


}

void Widget::on_AristaBut_clicked()
{

}

void Widget::on_pushButton_clicked()
{
    QMessageBox::information(this,"Floyd Warshall",QString::fromStdString(cliente_serv()));
}
