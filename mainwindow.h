#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "display_mode.h"
#include "parameter.h"
#include "port.h"

#include <QSerialPort>
#include  <QDebug>
#include  <port.h>

#include "tcp_server.h"

#include <QMenu>
#include <QMenuBar>
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

     QByteArray razbor_com(parameter);
      void check_auto_send();
        port* A;
        Tcp_server* g;

       QTcpSocket * a;
       QMenu *file;
        //Tcp_server* B;
public slots:


    void razbor(parameter);
    void check();

    void check2();

    void adres_slot(QTcpSocket *);


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


 void on_pushButton_Four_Corners_Reset_clicked();

 void on_pushButton_Geometric_Correction_Reset_clicked();

 void on_pushButton_PIP_PBP_Swap_clicked();

 void on_pushButton_Image_Setting_Brightness_minus_clicked();

 void on_pushButton_Image_Setting_Brightness_plus_clicked();

 void on_pushButton_Image_Setting_Contrast_minus_clicked();

 void on_pushButton_Image_Setting_Contrast_plus_clicked();

 void on_pushButton_Image_Setting_Color_Setting_Color_Temperature_reset_clicked();

 void on_pushButton_Image_Setting_Color_Settin_Color_Matching_reset_clicked();

 void on_pushButton_Image_Setting_Color_Setting_CMS_reset_clicked();

 void on_pushbutton_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_reset_clicked();

 void on_pushButton_Image_Setting_Darbee_Setting_reset_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp1_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp2_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp12_clicked();

 void on_pushButton_Setup_Lamp_Setting_Filter_reset_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lens_Lens_Calibration_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lens_Zoom_plus_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lens_Zoom_minus_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lens_Focus_plus_clicked();

 void on_pushButton_Setup_Lamp_Setting_Lens_Focus_minus_clicked();

 void on_pushButton_Setup_Security_Change_Password_clicked();

 void on_pushButton_Setup_Remote_Setting_Remote_code_minus_clicked();

 void on_pushButton_Setup_Remote_Setting_Remote_code_plus_clicked();

 void on_pushButton_reset_OSD_clicked();

 void on_pushButton_reset_to_Default_clicked();

 void on_pushButton_reset_to_Default_password_clicked();

 void on_pushButton_Option_reset_input_name_clicked();

 void on_tabWidget_tabBarClicked(int index);

 void on_pushButton_systeam_auto_clicked();

 void on_pushButton_systeam_auto_2_clicked();

 void on_pushButton_systeam_auto_3_clicked();

 void on_pushButton_systeam_auto_4_clicked();

 void on_pushButton_systeam_auto_5_clicked();

 void on_pushButton_systeam_auto_6_clicked();

 void on_pushButton_systeam_auto_7_clicked();

 void on_pushButton_systeam_auto_8_clicked();

 void on_pushButton_systeam_auto_9_clicked();

 void on_pushButton_systeam_auto_10_clicked();

 void on_pushButton_systeam_auto_11_clicked();

 void on_pushButton_systeam_auto_12_clicked();

 void on_pushButton_systeam_auto_13_clicked();

 void on_pushButton_systeam_auto_14_clicked();

 void on_pushButton_systeam_auto_15_clicked();

 void on_pushButton_systeam_auto_16_clicked();

 void on_pushButton_systeam_auto_17_clicked();

 void on_pushButton_systeam_auto_18_clicked();

 void on_pushButton_systeam_auto_19_clicked();

 void on_pushButton_systeam_auto_20_clicked();

 void on_pushButton_systeam_auto_21_clicked();

 void on_pushButton_systeam_auto_22_clicked();

 void on_pushButton_systeam_auto_23_clicked();

 void on_pushButton_systeam_auto_24_clicked();

 void on_pushButton_systeam_auto_25_clicked();

 void otpravka(QByteArray);

 void on_connect_button_clicked();

signals:
 void s_send_to(QByteArray);

void s_send_to_ethert(QByteArray);

private:
    Ui::MainWindow *ui;
    static MainWindow* mainInstance;
};
#endif // MAINWINDOW_H
