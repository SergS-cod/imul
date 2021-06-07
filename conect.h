#ifndef CONECT_H
#define CONECT_H

#include <QWidget>
#include  <QDebug>
namespace Ui {
class Conect;
}

class Conect : public QWidget
{
    Q_OBJECT

public:
    explicit Conect(QWidget *parent = 0);
    ~Conect();
    int port;
    QString com_port;

private slots:

    void on_pushButton_clicked();

signals:
    void reconn(int,QString);
private:
    Ui::Conect *ui;
};

#endif // CONECT_H
