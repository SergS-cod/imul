#include "display_modyle.h"
#include "ui_display_modyle.h"

display_modyle::display_modyle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::display_modyle)
{
    ui->setupUi(this);
}

display_modyle::~display_modyle()
{
    delete ui;
}
