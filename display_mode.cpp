#include "display_mode.h"
#include "ui_display_mode.h"

display_mode::display_mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::display_mode)
{
    ui->setupUi(this);
}

display_mode::~display_mode()
{
    delete ui;
}
