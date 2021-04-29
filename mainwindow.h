#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "display_mode.h"
#include "parameter.h"


#include <QSerialPort>
#include  <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


struct com
{
    int CMD;
    int Val;
    int start;
    int end;
    int password;
    int dat;

};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void update_state();
    void set_all_command();

    void setparam(int CMD,int Val,int start,int end,int password,int dat);
    static MainWindow* GetInstance(QWidget* parent = 0);


public slots:

 void razbor_com(parameter);

signals:
 void s_send_to(QByteArray);
private:
    Ui::MainWindow *ui;
    static MainWindow* mainInstance;
};
#endif // MAINWINDOW_H
