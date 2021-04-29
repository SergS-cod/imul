#include "display_m.h"
#include "ui_display_m.h"

Display_m::Display_m(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Display_m)
{
    ui->setupUi(this);
}

Display_m::~Display_m()
{
    delete ui;
}
