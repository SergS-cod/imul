#include "conect.h"
#include "ui_conect.h"

Conect::Conect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Conect)
{
    ui->setupUi(this);


    com_port=ui->lineEdit_com->text();
    port=ui->lineEdit_portt->text().toInt();
}

Conect::~Conect()
{
    delete ui;
}


void Conect::on_pushButton_clicked()
{
    com_port=ui->lineEdit_com->text();
    port=ui->lineEdit_portt->text().toInt();
    emit reconn(port,com_port);
    close();
}
