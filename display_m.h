#ifndef DISPLAY_M_H
#define DISPLAY_M_H

#include <QWidget>

namespace Ui {
class Display_m;
}

class Display_m : public QWidget
{
    Q_OBJECT

public:
    explicit Display_m(QWidget *parent = nullptr);
    ~Display_m();

private:
    Ui::Display_m *ui;
};

#endif // DISPLAY_M_H
