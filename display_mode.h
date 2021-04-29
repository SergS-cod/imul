#ifndef DISPLAY_MODE_H
#define DISPLAY_MODE_H

#include <QWidget>

namespace Ui {
class display_mode;
}

class display_mode : public QWidget
{
    Q_OBJECT

public:
    explicit display_mode(QWidget *parent = nullptr);
    ~display_mode();

private:
    Ui::display_mode *ui;
};

#endif // DISPLAY_MODE_H
