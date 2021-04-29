#ifndef DISPLAY_MODYLE_H
#define DISPLAY_MODYLE_H

#include <QWidget>

namespace Ui {
class display_modyle;
}

class display_modyle : public QWidget
{
    Q_OBJECT

public:
    explicit display_modyle(QWidget *parent = nullptr);
    ~display_modyle();

private:
    Ui::display_modyle *ui;
};

#endif // DISPLAY_MODYLE_H
