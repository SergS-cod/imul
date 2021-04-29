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


private slots:
 void on_pushButton_Zoom_minus_clicked();

 void on_pushButton_Zoom_plus_clicked();

 void on_pushButton_Image_shift_H_minus_clicked();

 void on_pushButton_Image_shift_H_plus_clicked();

 void on_pushButton_Image_shift_V_minus_clicked();

 void on_pushButton_Image_shift_V_plus_clicked();

 void on_pushButton_Four_Corners_top_left_left_clicked();

 void on_pushButton_Four_Corners_top_left_up_clicked();

 void on_pushButton_Four_Corners_top_left_down_clicked();

 void on_pushButton_Four_Corners_top_left_right_clicked();

 void on_pushButton_Four_Corners_top_right_left_clicked();

 void on_pushButton_Four_Corners_top_right_up_clicked();

 void on_pushButton_Four_Corners_top_right_down_clicked();

 void on_pushButton_Four_Corners_top_right_right_clicked();

 void on_pushButton_Four_Corners_buttom_left_left_clicked();

 void on_pushButton_Four_Corners_buttom_left_up_clicked();

 void on_pushButton_Four_Corners_buttom_left_down_clicked();

 void on_pushButton_Four_Corners_buttom_left_right_clicked();

 void on_pushButton_Four_Corners_buttom_right_left_clicked();

 void on_pushButton_Four_Corners_buttom_right_up_clicked();

 void on_pushButton_Four_Corners_buttom_right_down_clicked();

 void on_pushButton_Four_Corners_buttom_right_right_clicked();

private:
    Ui::MainWindow *ui;
    static MainWindow* mainInstance;
};
#endif // MAINWINDOW_H
