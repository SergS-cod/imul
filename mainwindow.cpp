#include "mainwindow.h"
#include "ui_mainwindow.h"


QList <com> command;
int index_page;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
////
    port* A=new port;
         Tcp_server* B=new Tcp_server;

     connect (this,SIGNAL(s_send_to(QByteArray)),A,SLOT(send_to(QByteArray)));
     connect (this,SIGNAL(s_send_to_ethert(QByteArray)),B,SLOT(send_to(QByteArray)));




//      QAction* pCheckableAction = file->addAction("&COM port");
//      QAction* pEthernet = file->addAction("&Ethernet");
//          pCheckableAction->setCheckable(true);
//          pEthernet->setCheckable(true);
//          pEthernet->setChecked(true);

//          if(pCheckableAction->isChecked())
//            {  pEthernet->setChecked(false);
//              qDebug()<<"kkkkkkkkkkkkkkk";
//          }

//          if(pEthernet->isChecked())
//            {  pCheckableAction->setChecked(false);
//              qDebug()<<"hhhhhhhhhhhhh";
//          }
        //  pCheckableAction->setChecked(true);

      //QMenuBar mnuBar;
//      menu_bar_ = new QMenuBar(this);
//        menu_bar_->setNativeMenuBar(false);

//      QMenu*   pmnu   = new QMenu("&Menu");
////      pmnu->addAction("&About Qt",
////                          &app,
////                          SLOT(aboutQt()),
////                          Qt::CTRL + Qt::Key_Q
////                         );

//          pmnu->addSeparator();

//          QAction* pCheckableAction = pmnu->addAction("&CheckableItem");
//          pCheckableAction->setCheckable(true);
//          pCheckableAction->setChecked(true);

//      //    pmnu->addAction(QPixmap(img4_xpm), "&IconItem");

//          QMenu* pmnuSubMenu = new QMenu("&SubMenu", pmnu);
//          pmnu->addMenu(pmnuSubMenu);
//          pmnuSubMenu->addAction("&Test");

//          QAction* pDisabledAction = pmnu->addAction("&DisabledItem");
//          pDisabledAction->setEnabled(false);

//          pmnu->addSeparator();

//       //   pmnu->addAction("&Exit", &app, SLOT(quit()));
//       mnuBar.addMenu(pmnu);
//      mnuBar.show();
//menu_bar_->show();

 //ui->menuqwer->
   //  ui->actionwer();
         ui->actioncom_port->setCheckable(true);
             ui->actionEhternet->setCheckable(true);
                 ui->actionEhternet->setChecked(true);

 connect ( ui->actioncom_port,SIGNAL( changed()),this,SLOT(check()));
connect ( ui->actionEhternet,SIGNAL( changed()),this,SLOT(check2()));
// connect (this,SIGNAL( ui->,this,SLOT(check()));

QByteArray a;
a.append("wwwww");
otpravka(a);

    ui->label_2xzczx->setText("0");
    connect(ui->horizontsl, &QSlider::valueChanged, ui->label_2xzczx,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_2Auto->setText("0");
    connect(ui->horizontsl_2, &QSlider::valueChanged, ui->label_2Auto,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //setting Audio page
    ui->label_var_Volume->setText("5");
    connect(ui->horizontalSlider_Volume, &QSlider::valueChanged, ui->label_var_Volume,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Mic_Volume->setText("5");
    connect(ui->horizontalSlider_Mic_Volume, &QSlider::valueChanged, ui->label_var_Mic_Volume,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Treble->setText("0");
    connect(ui->horizontalSlider_Treble, &QSlider::valueChanged, ui->label_var_Treble,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Bass->setText("0");
    connect(ui->horizontalSlider_Bass, &QSlider::valueChanged, ui->label_var_Bass,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Edge Mask
    ui->label_var_Edge_Mask->setText("0");
    connect(ui->horizontalSlider_Edge_Mask, &QSlider::valueChanged, ui->label_var_Edge_Mask,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Zoom
    ui->label_var_Zoom->setText("10");
    connect(ui->horizontalSlider_Zoom, &QSlider::valueChanged, ui->label_var_Zoom,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Digital Zoom
    ui->label_var_H_Zoom->setText("50");
    connect(ui->horizontalSlider_H_Zoom, &QSlider::valueChanged, ui->label_var_H_Zoom,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_V_Zoom->setText("50");
    connect(ui->horizontalSlider_V_Zoom, &QSlider::valueChanged, ui->label_var_V_Zoom,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Image shift
    ui->label_var_Image_shift_H->setText("0");
    connect(ui->horizontalSlider_Image_shift_H, &QSlider::valueChanged, ui->label_var_Image_shift_H,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_shift_V->setText("0");
    connect(ui->horizontalSlider_Image_shift_V, &QSlider::valueChanged, ui->label_var_Image_shift_V,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //H Keystone
    ui->label_var_H_Keystone->setText("0");
    connect(ui->horizontalSlider_H_Keystone, &QSlider::valueChanged, ui->label_var_H_Keystone,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //V Keystone
    ui->label_var_V_Keystone->setText("0");
    connect(ui->horizontalSlider_V_Keystone, &QSlider::valueChanged, ui->label_var_V_Keystone,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Four Corners
    //top-left
    ui->label_var_Four_Corners_top_left_H->setText("60");
    connect(ui->horizontalSlider_Four_Corners_top_left_H, &QSlider::valueChanged, ui->label_var_Four_Corners_top_left_H,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Four_Corners_top_left_V->setText("40");
    connect(ui->horizontalSlider_Four_Corners_top_left_V, &QSlider::valueChanged, ui->label_var_Four_Corners_top_left_V,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //top-right
    ui->label_var_Four_Corners_top_right_H->setText("60");
    connect(ui->horizontalSlider_Four_Corners_top_right_H, &QSlider::valueChanged, ui->label_var_Four_Corners_top_right_H,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Four_Corners_top_right_V->setText("40");
    connect(ui->horizontalSlider_Four_Corners_top_right_V, &QSlider::valueChanged, ui->label_var_Four_Corners_top_right_V,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //buttom_left
    ui->label_var_Four_Corners_buttom_left_H->setText("60");
    connect(ui->horizontalSlider_Four_Corners_buttom_left_H, &QSlider::valueChanged, ui->label_var_Four_Corners_buttom_left_H,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Four_Corners_buttom_left_V->setText("40");
    connect(ui->horizontalSlider_Four_Corners_buttom_left_V, &QSlider::valueChanged, ui->label_var_Four_Corners_buttom_left_V,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //buttom-right
    ui->label_var_Four_Corners_buttom_right_H->setText("60");
    connect(ui->horizontalSlider_Four_Corners_buttom_right_H, &QSlider::valueChanged, ui->label_var_Four_Corners_buttom_right_H,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Four_Corners_buttom_right_V->setText("40");
    connect(ui->horizontalSlider_Four_Corners_buttom_right_V, &QSlider::valueChanged, ui->label_var_Four_Corners_buttom_right_V,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Geometric Correction
    ui->label_var_Geometric_Correction_H_Arc->setText("0");
    connect(ui->horizontalSlider_Geometric_Correction_H_Arc, &QSlider::valueChanged, ui->label_var_Geometric_Correction_H_Arc,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Geometric_Correction_V_Arc->setText("0");
    connect(ui->horizontalSlider_Geometric_Correction_V_Arc, &QSlider::valueChanged, ui->label_var_Geometric_Correction_V_Arc,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Geometric_Correction_H_keystone->setText("0");
    connect(ui->horizontalSlider_Geometric_Correction_H_keystone, &QSlider::valueChanged, ui->label_var_Geometric_Correction_H_keystone,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Geometric_Correction_V_keystone->setText("0");
    connect(ui->horizontalSlider_Geometric_Correction_V_keystone, &QSlider::valueChanged, ui->label_var_Geometric_Correction_V_keystone,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Brightness
    ui->label_var_Image_Setting_Brightness->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Brightness, &QSlider::valueChanged, ui->label_var_Image_Setting_Brightness,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Contrast
    ui->label_var_Image_Setting_Contrast->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Contrast, &QSlider::valueChanged, ui->label_var_Image_Setting_Contrast,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Sharpness
    ui->label_var_Image_Setting_Sharpness->setText("8");
    connect(ui->horizontalSlider_Image_Setting_Sharpness, &QSlider::valueChanged, ui->label_var_Image_Setting_Sharpness,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Color
    ui->label_var_Image_Setting_Color->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color, &QSlider::valueChanged, ui->label_var_Image_Setting_Color,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Tint
    ui->label_var_Image_Setting_Tint->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Tint, &QSlider::valueChanged, ui->label_var_Image_Setting_Tint,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //BrilliantColor
    ui->label_var_Image_Setting_Color_Setting_BrilliantColor->setText("5");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_BrilliantColor, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_BrilliantColor,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Color Matching
    //R
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_R->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_R, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_R,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_R->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_R, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_R,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_R->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_R, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_R,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //G
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_G->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_G, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_G,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_G->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_G, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_G,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_G->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_G, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_G,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //B
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_B->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_B, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_B,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_B->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_B, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_B,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_B->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_B, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_B,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //C
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_C->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_C, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_C,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_C->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_C, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_C,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_C->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_C, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_C,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Y
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_Y->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_Y, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_Y,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_Y->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_Y, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_Y,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_Y->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_Y, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_Y,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //M
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_M->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_M, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_M,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_M->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_M, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_M,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_M->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_M, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_M,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //W
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_W->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_W, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_W,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_W->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_W, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_W,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_W->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_W, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_W,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //CMS
    //R
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_R, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_R->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_R, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_R,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_R->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_R, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_R,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //G
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_G->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_G, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_G,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_G->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_G, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_G,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_G->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_G, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_G,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //B
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_B->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_B, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_B,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_B->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_B, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_B,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_B->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_B, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_B,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //C
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_C->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_C, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_C,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_C->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_C, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_C,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_C->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_C, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_C,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Y
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_Y->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_Y, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_Y,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_Y->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_Y, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_Y,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_Y->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_Y, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_Y,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //M
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_M->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_M, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_M,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_M->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_M, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_M,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_M->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_M, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_M,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //W
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_W->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_W, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_W,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_W->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_W, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_W,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_W->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_W, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_W,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Noise
    ui->label_var_Noise_reduction->setText("0");
    connect(ui->horizontalSlider_Noise_Reduction, &QSlider::valueChanged, ui->label_var_Noise_reduction,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Color Wheel Index   2x
    ui->lbbbbbb->setText("0");
    connect(ui->horizontalSlider_2xxxxx, &QSlider::valueChanged, ui->lbbbbbb,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));


    ui->horizontalSlider_fan_speed1->setMinimum(0);
    ui->horizontalSlider_fan_speed1->setMaximum(9999);
    ui->horizontalSlider_fan_speed2->setMinimum(0);
    ui->horizontalSlider_fan_speed2->setMaximum(9999);
    ui->horizontalSlider_fan_speed3->setMinimum(0);
    ui->horizontalSlider_fan_speed3->setMaximum(9999);


    //Fan Speed
    ui->laaabel_2_fan_1->setText("0");
    connect(ui->horizontalSlider_fan_speed1, &QSlider::valueChanged, ui->laaabel_2_fan_1,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));


    //Fan Speed
    ui->laaabel_2_fan_2->setText("0");
    connect(ui->horizontalSlider_fan_speed2, &QSlider::valueChanged, ui->laaabel_2_fan_2,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));


    //Fan Speed
    ui->laaabel_2_fan_3->setText("0");
    connect(ui->horizontalSlider_fan_speed3, &QSlider::valueChanged, ui->laaabel_2_fan_3,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));


    //Fan Speed

    ui->horizontalSlider_fan_speed4->setMinimum(0);
    ui->horizontalSlider_fan_speed4->setMaximum(9999);
    ui->laaabel_2_fan_4->setText("0");
    connect(ui->horizontalSlider_fan_speed4, &QSlider::valueChanged, ui->laaabel_2_fan_4,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));



    //Color Wheel Index   3x
    ui->lbbbbbbbb->setText("0");
    connect(ui->horizontalSlider_3xxxxx, &QSlider::valueChanged, ui->lbbbbbbbb,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));


    //color Matching
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Red->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Red, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Red,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Red->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Red, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Red,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Red->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Red, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Red,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Green->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Green, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Green,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Green->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Green, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Green,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Green->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Green, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Green,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Blue->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Blue, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Blue,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Blue->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Blue, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Blue,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum)); ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Blue->setText("500");
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Blue->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Blue, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Blue,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_White->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_White, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_White,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_White->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_White, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_White,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_White->setText("500");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_White, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_White,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //RGB Gain/Bias
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Gain->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Gain, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Gain,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Gain->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Gain, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Gain,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Gain->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Gain, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Gain,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Bias->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Bias, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Bias,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Bias->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Bias, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Bias,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Bias->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Bias, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Bias,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //White Level
    ui->label_var_Image_Setting_Color_Setting_White_level->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_White_level, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_White_level,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Black Level
    ui->label_var_Image_Setting_Color_Setting_Black_level->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Black_level, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Black_level,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Saturation
    ui->label_var_Image_Setting_Color_Setting_Saturation->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Saturation, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Saturation,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Hue
    ui->label_var_Image_Setting_Color_Setting_Hue->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Color_Setting_Hue, &QSlider::valueChanged, ui->label_var_Image_Setting_Color_Setting_Hue,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //signal
    ui->label_var_Image_Setting_Signal_Frequency->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Signal_Frequency, &QSlider::valueChanged, ui->label_var_Image_Setting_Signal_Frequency,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Signal_Phase->setText("16");
    connect(ui->horizontalSlider_Image_Setting_Signal_Phase, &QSlider::valueChanged, ui->label_var_Image_Setting_Signal_Phase,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Signal_H_position->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Signal_H_position, &QSlider::valueChanged, ui->label_var_Image_Setting_Signal_H_position,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Image_Setting_Signal_V_position->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Signal_V_position, &QSlider::valueChanged, ui->label_var_Image_Setting_Signal_V_position,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Lens_Iris
    ui->label_var_Image_Setting_Lens_Iris->setText("6");
    connect(ui->horizontalSlider_Image_Setting_Lens_Iris, &QSlider::valueChanged, ui->label_var_Image_Setting_Lens_Iris,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //Darbee Settings
    ui->label_var_Image_Setting_Darbee_Setting_Level->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Darbee_Setting_Level, &QSlider::valueChanged, ui->label_var_Image_Setting_Darbee_Setting_Level,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Lens Settings
    ui->label_var_Setup_Lamp_Setting_Lens__Memory_Apply_Position->setText("5");
    connect(ui->horizontalSlider_Setup_Lamp_Setting_Lens__Memory_Apply_Position, &QSlider::valueChanged, ui->label_var_Setup_Lamp_Setting_Lens__Memory_Apply_Position,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Setup_Lamp_Setting_Lens__Memory_Save_Current_Position->setText("5");
    connect(ui->horizontalSlider_Setup_Lamp_Setting_Lens__Memory_Save_Current_Position, &QSlider::valueChanged, ui->label_var_Setup_Lamp_Setting_Lens__Memory_Save_Current_Position,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Power Settings
    ui->label_var_Setup_Power_Setting_Sleep_Timer->setText("485");
    connect(ui->horizontalSlider_Setup_Power_Setting_Sleep_Timer, &QSlider::valueChanged, ui->label_var_Setup_Power_Setting_Sleep_Timer,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Setup_Power_Setting_Auto_Power_Off->setText("90");
    connect(ui->horizontalSlider_Setup_Power_Setting_Auto_Power_Off, &QSlider::valueChanged, ui->label_var_Setup_Power_Setting_Auto_Power_Off,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Security
    ui->label_var_Setup_Security_Timer_Day->setText("0");
    connect(ui->horizontalSlider_Setup_Security_Timer_Day, &QSlider::valueChanged, ui->label_var_Setup_Security_Timer_Day,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Setup_Security_Timer_Month->setText("0");
    connect(ui->horizontalSlider_Setup_Security_Timer_Month, &QSlider::valueChanged, ui->label_var_Setup_Security_Timer_Month,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Setup_Security_Timer_Hour->setText("0");
    connect(ui->horizontalSlider_Setup_Security_Timer_Hour, &QSlider::valueChanged, ui->label_var_Setup_Security_Timer_Hour,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Remote Settings
    ui->label_var_Setup_Remote_Setting_Remote_code->setText("50");
    connect(ui->horizontalSlider_Setup_Remote_Setting_Remote_code, &QSlider::valueChanged, ui->label_var_Setup_Remote_Setting_Remote_code,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Setup_Remote_Setting_Remote_user1->setText("10");
    connect(ui->horizontalSlider_Setup_Remote_Setting_Remote_user1, &QSlider::valueChanged, ui->label_var_Setup_Remote_Setting_Remote_user1,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Setup_Remote_Setting_Remote_user2->setText("10");
    connect(ui->horizontalSlider_Setup_Remote_Setting_Remote_user2, &QSlider::valueChanged, ui->label_var_Setup_Remote_Setting_Remote_user2,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Setup_Remote_Setting_Remote_user3->setText("10");
    connect(ui->horizontalSlider_Setup_Remote_Setting_Remote_user3, &QSlider::valueChanged, ui->label_var_Setup_Remote_Setting_Remote_user3,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Projector ID
    ui->label_var_Setup_Projector_ID->setText("50");
    connect(ui->horizontalSlider_Setup_Projector_ID, &QSlider::valueChanged, ui->label_var_Setup_Projector_ID,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //options
    ui->label_var_Options_Menu_Transparency->setText("5");
    connect(ui->horizontalSlider_Options_Menu_Transparency, &QSlider::valueChanged, ui->label_var_Options_Menu_Transparency,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //INFO
    ui->label_var_Info_Projector_id->setText("0");
    connect(ui->horizontalSlider_Info_Projector_id, &QSlider::valueChanged, ui->label_var_Info_Projector_id,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Info_remote_code->setText("0");
    connect(ui->horizontalSlider_Info_remote_code, &QSlider::valueChanged, ui->label_var_Info_remote_code,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    ui->label_var_Info_remote_code_Active->setText("0");
    connect(ui->horizontalSlider_Info_remote_code_Active, &QSlider::valueChanged, ui->label_var_Info_remote_code_Active,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    //Gamma
    ui->label_var_Image_Setting_Display_Gamma_Film->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_Film, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_Film,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Display_Gamma_Video->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_Video, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_Video,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Display_Gamma_Graphics->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_Graphics, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_Graphics,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Display_Gamma_Standart->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_Standart, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_Standart,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Display_Gamma_1_8->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_1_8, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_1_8,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Display_Gamma_2_0->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_2_0, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_2_0,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));

    ui->label_var_Image_Setting_Display_Gamma_2_4->setText("0");
    connect(ui->horizontalSlider_Image_Setting_Display_Gamma_2_4, &QSlider::valueChanged, ui->label_var_Image_Setting_Display_Gamma_2_4,
            static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    //***test
    parameter temp("7E303031353020340D");
     razbor_com(temp);
    //***


}

MainWindow* MainWindow::mainInstance = 0;

MainWindow* MainWindow::GetInstance(QWidget *parent)
{
    if(mainInstance == NULL)
    {
        mainInstance = new MainWindow(parent);
    }
    return mainInstance;
}

void MainWindow:: update_state()
{
}

QByteArray MainWindow:: razbor_com(parameter temp)
{


    temp.print_parameter_inf();
    QString usual = "QPushButton {border: 1px solid #8f8f91;border-radius: 4px;background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dbd8d5);}"
                    "QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);}"
                    "QPushButton:flat { border: none; /* для плоской кнопки границы нет */}"
                    "QPushButton:default {border-color: navy; /* делаем кнопку по умолчанию выпуклой */}";
    QString unusual = "QPushButton {border: 1px solid #8f8f91;border-radius: 4px;background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #7feb4d, stop: 1 #4cbb17);}"
                      "QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);}"
                      "QPushButton:flat { border: none; /* для плоской кнопки границы нет */}"
                      "QPushButton:default {border-color: navy; /* делаем кнопку по умолчанию выпуклой */}";

    QByteArray F,P,Ok,INFO,Check,ret;
    F.append("F");
    P.append("P");
    Ok.append("  Ok");
    INFO.append("INFO");
    ret.append("ret");

    int tmp;
    //READ
    //Display Mode
    if(temp.getInt_command()==123){
        if(temp.getInt_variable()==1){
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==2){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==3){
                Ok.append("3");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==4){
                Ok.append("11");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==5){
                Ok.append("14");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==6){
                Ok.append("12");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==7){
                Ok.append("4");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==8){
                Ok.append("4");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==9){
                Ok.append("10");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==10){
                Ok.append("5");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==11){
                Ok.append("9");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==12){
                Ok.append("6");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==13){
                Ok.append("15");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==14){
                Ok.append("16");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==15){
                Ok.append("17");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==16){
                Ok.append("18");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==17){
                Ok.append("19");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==18){
                Ok.append("20");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Display_Mode->currentIndex()==19){
                Ok.append("21");
                return Ok;
            }

        }
    }

    //Brightness
    if(temp.getInt_command()==125){
        if(temp.getInt_variable()==1){
            tmp = ui->horizontalSlider_Image_Setting_Brightness->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }
    //Contrast
    if(temp.getInt_command()==126){
        if(temp.getInt_variable()==1){
            tmp = ui->horizontalSlider_Image_Setting_Contrast->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //Color Temperature
    if(temp.getInt_command()==128){
        if(temp.getInt_variable()==1){
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==0){
                Ok.append("3");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==1){
                Ok.append("0");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==2){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==3){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==4){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==5){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==6){
                Ok.append("4");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==7){
                Ok.append("5");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==8){
                Ok.append("6");
                return Ok;
            }
            if(ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->currentIndex()==9){
                Ok.append("7");
                return Ok;
            }
        }
    }

    //Aspect Ratio
    if(temp.getInt_command()==127){
        if(temp.getInt_variable()==1){
            if(ui->comboBox_Aspect_ratio->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==2){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==3){
                Ok.append("3");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==4){
                Ok.append("5");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==5){
                Ok.append("9");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==6){
                Ok.append("6");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==7){
                Ok.append("7");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==8){
                Ok.append("8");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==9){
                Ok.append("11");
                return Ok;
            }
            if(ui->comboBox_Aspect_ratio->currentIndex()==10){
                Ok.append("12");
                return Ok;
            }
        }
    }

    //Digital Zoom
    if(temp.getInt_command()==543){
        if(temp.getInt_variable()==8){
            tmp = ui->horizontalSlider_H_Zoom->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }

        if(temp.getInt_variable()==7){
            tmp = ui->horizontalSlider_V_Zoom->value();
            Ok.append(QString::number(tmp));
            //qDebug()<<Ok;
            return Ok;
        }
    }

    //Image shif H
    if(temp.getInt_command()==543){
        if(temp.getInt_variable()==1){
            tmp = ui->horizontalSlider_Image_shift_H->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==2){
            tmp = ui->horizontalSlider_Image_shift_V->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //H Keystone
    if(temp.getInt_command()==543){
        if(temp.getInt_variable()==4){
            tmp = ui->horizontalSlider_H_Keystone->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //V Keystone
    if(temp.getInt_command()==543){
        if(temp.getInt_variable()==3){
            tmp = ui->horizontalSlider_V_Keystone->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //Geometric Correction
    if(temp.getInt_command()==543){
        if(temp.getInt_variable()==6){
            tmp = ui->horizontalSlider_Geometric_Correction_H_Arc->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==5){
            tmp = ui->horizontalSlider_Geometric_Correction_V_Arc->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==4){
            tmp = ui->horizontalSlider_Geometric_Correction_H_keystone->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==3){
            tmp = ui->horizontalSlider_Geometric_Correction_V_keystone->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //Source
    if(temp.getInt_command()==121){
        if(temp.getInt_variable()==1){
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==0){
                Ok.append("7");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==1){
                Ok.append("8");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==2){
                Ok.append("8");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==3){
                Ok.append("9");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==4){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==5){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==6){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==7){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==8){
                Ok.append("3");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==9){
                Ok.append("11");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==10){
                Ok.append("4");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==11){
                Ok.append("5");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==12){
                Ok.append("15");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==13){
                Ok.append("16");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==14){
                Ok.append("6");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==15){
                Ok.append("10");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==16){
                Ok.append("12");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==17){
                Ok.append("13");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==18){
                Ok.append("14");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==19){
                Ok.append("17");
                return Ok;
            }

            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==20){
                Ok.append("18");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Main->currentIndex()==21){
                Ok.append("20");
                return Ok;

            }
        }
    }

    if(temp.getInt_command()==131){
        if(temp.getInt_variable()==1){
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==1){
                Ok.append("7");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==2){
                Ok.append("2");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==3){
                Ok.append("11");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==4){
                Ok.append("8");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==5){
                Ok.append("9");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==6){
                Ok.append("3");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==7){
                Ok.append("6");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==8){
                Ok.append("4");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==9){
                Ok.append("5");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==10){
                Ok.append("1");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==11){
                Ok.append("16");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==12){
                Ok.append("17");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==13){
                Ok.append("13");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==14){
                Ok.append("10");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==15){
                Ok.append("12");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==16){
                Ok.append("14");
                return Ok;
            }
            if(ui->comboBox_PIP_PBP_Sourse_Sub->currentIndex()==17){
                Ok.append("15");
                return Ok;
            }
        }
    }

    //Mute
    if(temp.getInt_command()==356){
        if(temp.getInt_variable()==1){
            if(ui->comboBox_Mute->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->comboBox_Mute->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }
    }

    //Projection
    if(temp.getInt_command()==129){
        if(temp.getInt_variable()==1){
            if(ui->Front->isChecked()==1){
                Ok.append("0");
                return Ok;
            }
            if(ui->Rear->isChecked()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->Ceiling_top->isChecked()==1){
                Ok.append("2");
                return Ok;
            }
            if(ui->Rear_top->isChecked()==1){
                Ok.append("3");
                return Ok;
            }
        }
    }

    //Filter Settings   -------------------------????
    if(temp.getInt_command()==321){
        if(temp.getInt_variable()==1){
            Ok.append(ui->lineEdit_setup_filter_setting_filter_usage_hours->text().toInt());
            return Ok;
        }
    }

    //Lens Settings
    if(temp.getInt_command()==545){
        if(temp.getInt_variable()==4){
            if(ui->combobox_Setup_Lamp_Setting_Lens_Function_2->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Setup_Lamp_Setting_Lens_Function_2->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }

        if(temp.getInt_variable()==1){
            if(ui->combobox_Setup_Lamp_Setting_Zoom->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Setup_Lamp_Setting_Zoom->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }

        if(temp.getInt_variable()==2){
            if(ui->combobox_Setup_Lamp_Setting_Focus->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Setup_Lamp_Setting_Focus->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }

        if(temp.getInt_variable()==3){
            if(ui->combobox_Setup_Lamp_Setting_Shift_2->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Setup_Lamp_Setting_Shift_2->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }
    }

    //Power Mode (Standby)
    if(temp.getInt_command()==150){
        if(temp.getInt_variable()==16){
            if(ui->combobox_Setup_Power_Setting_Power_Mode->currentIndex()==0){
                Ok.append("1");
                return Ok;
            }
            if(ui->combobox_Setup_Power_Setting_Power_Mode->currentIndex()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    //Security Timer
    if(temp.getInt_command()==544){
        if(temp.getInt_variable()==1){
            tmp = ui->horizontalSlider_Setup_Security_Timer_Month->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==2){
            tmp = ui->horizontalSlider_Setup_Security_Timer_Day->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==3){
            tmp = ui->horizontalSlider_Setup_Security_Timer_Hour->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //IR Function
    if(temp.getInt_command()==542){
        if(temp.getInt_variable()==1){
            if(ui->combobox_Setup_Remote_Setting_IR_Function->currentIndex()==4){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Setup_Remote_Setting_IR_Function->currentIndex()==5){
                Ok.append("1");
                return Ok;
            }
        }

        if(temp.getInt_variable()==2){
            if(ui->combobox_Setup_Remote_Setting_IR_Function->currentIndex()==6){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Setup_Remote_Setting_IR_Function->currentIndex()==7){
                Ok.append("1");
                return Ok;
            }
        }
    }

    //Projector ID
    if(temp.getInt_command()==558){
        if(temp.getInt_variable()==1){
            tmp = ui->horizontalSlider_Setup_Projector_ID->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }

    //Closed Captioning
    if(temp.getInt_command()==354){
        if(temp.getInt_variable()==1){
            if(ui->combobox_Options_Closed_Captioning->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Options_Closed_Captioning->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->combobox_Options_Closed_Captioning->currentIndex()==2){
                Ok.append("2");
                return Ok;
            }
        }
    }

    //Input Source
    if(temp.getInt_command()==121){
        if(temp.getInt_variable()==1){
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==1){
                Ok.append("7");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==2){
                Ok.append("7");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==3){
                Ok.append("7");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==4){
                Ok.append("7");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==5){
                Ok.append("8");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==6){
                Ok.append("8");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==7){
                Ok.append("9");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==8){
                Ok.append("1");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==9){
                Ok.append("1");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==10){
                Ok.append("2");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==11){
                Ok.append("2");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==12){
                Ok.append("3");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==13){
                Ok.append("11");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==14){
                Ok.append("4");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==15){
                Ok.append("5");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==16){
                Ok.append("15");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==17){
                Ok.append("16");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==18){
                Ok.append("6");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==19){
                Ok.append("10");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==20){
                Ok.append("12");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==21){
                Ok.append("13");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==22){
                Ok.append("14");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==23){
                Ok.append("17");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==24){
                Ok.append("18");
                return Ok;
            }
            if(ui->combobox_Options_Inout_Sourse->currentIndex()==25){
                Ok.append("20");
                return Ok;
            }
        }
    }

    //MAC Address ---------???
    //IP Address ---------???
    //SSID ---------???
    if(temp.getInt_command()==451){
        if(temp.getInt_variable()==1){
            if(ui->Network_Status_box->currentIndex()==0){
                Ok.append("1");
                return Ok;
            }
            if(ui->Network_Status_box->currentIndex()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    if(temp.getInt_command()==87){
        if(temp.getInt_variable()==1){
            if(ui->Network_status_box->currentIndex()==0){
                Ok.append("1");
                return Ok;
            }
            if(ui->Network_status_box->currentIndex()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    //
    if(temp.getInt_command()==87){
        if(temp.getInt_variable()==1){
            if(ui->DHCP_box->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->DHCP_box->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }
    }



    //Other items
    //Power On Off
    if(temp.getInt_command()==124){
        if(temp.getInt_variable()==1){
            if(ui->ON->isChecked()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->OFF->isChecked()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    //AV Mute
    if(temp.getInt_command()==355){
        if(temp.getInt_variable()==1){
            if(ui->ON_mute->isChecked()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->OFF_mute->isChecked()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    //Mute
    if(temp.getInt_command()==356){
        if(temp.getInt_variable()==1){
            if(ui->ON_mute2->isChecked()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->OFF_mute2->isChecked()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    //Output 3D state
    //
    if(temp.getInt_command()==130){
        if(temp.getInt_variable()==1){
            if(ui->DDD->isChecked()==1){
                Ok.append("1");
                return Ok;
            }
            if(ui->DD->isChecked()==1){
                Ok.append("0");
                return Ok;
            }
        }
    }

    //Color Wheel Index
    if(temp.getInt_command()==559){
        if(temp.getInt_variable()==2){
            tmp = ui->horizontalSlider_2xxxxx->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
        if(temp.getInt_variable()==3){
            tmp = ui->horizontalSlider_3xxxxx->value();
            Ok.append(QString::number(tmp));
            return Ok;
        }
    }



    //WRITE-----------------------------------------------------------------------------------------------
    // POWER ON / OFF
    if(temp.getInt_command()==0){


        if(temp.getInt_variable()==0){
            ui->ON->setCheckState(Qt::Unchecked);
            ui->OFF->setCheckState(Qt::Checked);
            INFO.clear();
            if(ui->checkBox_wait_on->isChecked()==1){
                INFO.append("INFO2");
                otpravka(INFO);
                INFO.clear();
                if(ui->checkBox_how_answer_off->isChecked()==1){
                    check_auto_send();
                    otpravka(P);
                }
                if(ui->checkBox_how_answer_off->isChecked()==0){
                    check_auto_send();
                    otpravka(F);
                }
                return ret;
            }

            if(ui->checkBox_wait_on->isChecked()==0)  {
                 if(ui->checkBox_how_answer_off->isChecked()==1){
                     otpravka(P);
                     INFO.append("INFO2");
                     otpravka(INFO);
                     INFO.clear();
                     check_auto_send();
                 }
                if(ui->checkBox_how_answer_off->isChecked()==0){
                    otpravka(F);
                    INFO.append("INFO2");
                    otpravka(INFO);
                    INFO.clear();
                }
                return ret;
            }
        }
        if(temp.getInt_variable()==1){

            if(temp.getInt_password()>=0 && temp.getInt_password()<=9999){
                ui->ON_Power_on_password->setCheckState(Qt::Checked);
                INFO.clear();
                if(ui->checkBox_wait_on->isChecked()==1){
                    INFO.append("INFO1");
                    otpravka(INFO);
                    INFO.clear();
                    INFO.append("INFO0");
                    otpravka(INFO);
                    INFO.clear();
                    if(ui->checkBox_how_answer_on->isChecked()==1){
                        check_auto_send();
                        otpravka(P);
                        return ret;
                    }
                    if(ui->checkBox_how_answer_on==0){
                        otpravka(F);
                        return ret;
                    }
                }

                if(ui->checkBox_wait_on->isChecked()==0)  {
                    if(ui->checkBox_how_answer_on->isChecked()==1){

                        otpravka(P);
                        INFO.clear();
                        INFO.append("INFO0");
                        otpravka(INFO);
                        INFO.clear();
                        INFO.append("INFO1");
                        otpravka(INFO);
                        check_auto_send();
                        return ret;
                    }
                    if(ui->checkBox_how_answer_on->isChecked()==0){
                        otpravka(F);
                        INFO.clear();
                        INFO.append("INFO0");
                        otpravka(INFO);
                        INFO.clear();
                        INFO.append("INFO1");
                        otpravka(INFO);
                        INFO.clear();

                        return ret;
                    }

                }

            }
            if(temp.getInt_password() == -1){
                ui->ON->setCheckState(Qt::Checked);
                ui->OFF->setCheckState(Qt::Unchecked);
                INFO.clear();
                if(ui->checkBox_wait_on->isChecked()==1){
                    INFO.append("INFO1");
                    otpravka(INFO);
                    INFO.clear();
                    INFO.append("INFO0");
                    otpravka(INFO);
                    INFO.clear();
                    if(ui->checkBox_how_answer_on->isChecked()==1){
                        check_auto_send();
                        otpravka(P);
                        return ret;
                    }
                    if(ui->checkBox_how_answer_on==0){
                        otpravka(F);
                        return ret;
                    }
                }

                if(ui->checkBox_wait_on->isChecked()==0)  {
                    if(ui->checkBox_how_answer_on->isChecked()==1){
                         qDebug()<<"POWERRRR: ";
                         qDebug()<<P;
                        otpravka(P);
                        INFO.clear();
                        INFO.append("INFO0");
                        otpravka(INFO);
                        INFO.clear();
                        INFO.append("INFO1");
                        otpravka(INFO);
                        check_auto_send();
                        return ret;
                    }

                    if(ui->checkBox_how_answer_on->isChecked()==0){
                        otpravka(F);
                        INFO.clear();
                        INFO.append("INFO0");
                        otpravka(INFO);
                        INFO.clear();
                        INFO.append("INFO1");
                        otpravka(INFO);
                        INFO.clear();

                        return ret;
                    }

                }
            }
        }
    }

    //    if(temp.getInt_command()==124)
    //    {
    //        if(temp.getInt_variable()==1)
    //        {
    //            if ((ui->ON->isChecked()==Qt::Checked)&&(ui->OFF->isChecked()==Qt::Unchecked))
    //            {
    //                QByteArray To;
    //                To.append("Ok1");
    //                otpravka(To);
    //            }
    //            if ((ui->ON->isChecked()==Qt::Unchecked)&&(ui->OFF->isChecked()==Qt::Checked))
    //            {
    //                QByteArray To;
    //                To.append("Ok0");
    //                otpravka(To);
    //            }

    //        }

    //    }

    ////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////setup screen type 16 9 16 10

    //    if(temp.getInt_command()==0)
    //    {
    //        if(temp.getInt_variable()==0)
    //        {
    //            ui->ON->setCheckState(Qt::Unchecked);
    //            ui->OFF->setCheckState(Qt::Checked);
    //        }

    //        if(temp.getInt_variable()==1)
    //        {ui->ON->setCheckState(Qt::Checked);
    //            ui->OFF->setCheckState(Qt::Unchecked);
    //        }

    //    }

    //////////////////////////////////////////////////////////////////
    ///
    ////////////////////////////////////////////////////////////setup Projection
    if(temp.getInt_command()==71)
    {
        if(temp.getInt_variable()==1)
        {
            ui->Front->setCheckState(Qt::Checked);
            ui->Rear->setCheckState(Qt::Unchecked);
            ui->Ceiling_top->setCheckState(Qt::Unchecked);
            ui->Rear_top->setCheckState(Qt::Unchecked);

            return P;
        }

        if(temp.getInt_variable()==2)
        {
            ui->Front->setCheckState(Qt::Unchecked);
            ui->Rear->setCheckState(Qt::Checked);
            ui->Ceiling_top->setCheckState(Qt::Unchecked);
            ui->Rear_top->setCheckState(Qt::Unchecked);
            return P;

        }
        if(temp.getInt_variable()==3)
        {
            ui->Front->setCheckState(Qt::Unchecked);
            ui->Rear->setCheckState(Qt::Unchecked);
            ui->Ceiling_top->setCheckState(Qt::Checked);
            ui->Rear_top->setCheckState(Qt::Unchecked);
            return P;

        }

        if(temp.getInt_variable()==4)
        {
            ui->Front->setCheckState(Qt::Unchecked);
            ui->Rear->setCheckState(Qt::Unchecked);
            ui->Ceiling_top->setCheckState(Qt::Unchecked);
            ui->Rear_top->setCheckState(Qt::Checked);
            return P;

        }

    }
    //    if(temp.getInt_command()==129)
    //    {
    //        if(temp.getInt_variable()==1)
    //        {
    //            if ((ui->Front->isChecked()==Qt::Checked)&&(ui->Rear->isChecked()==Qt::Unchecked)&&(ui->Ceiling_top->isChecked()==Qt::Unchecked)&&(ui->Rear_top->isChecked()==Qt::Unchecked))
    //            {
    //                QByteArray To;
    //                To.append("Ok0");
    //                otpravka(To);
    //            }
    //            if ((ui->Front->isChecked()==Qt::Unchecked)&&(ui->Rear->isChecked()==Qt::Checked)&&(ui->Ceiling_top->isChecked()==Qt::Unchecked)&&(ui->Rear_top->isChecked()==Qt::Unchecked))
    //            {
    //                QByteArray To;
    //                To.append("Ok1");
    //                otpravka(To);
    //            }
    //            if ((ui->Front->isChecked()==Qt::Unchecked)&&(ui->Rear->isChecked()==Qt::Unchecked)&&(ui->Ceiling_top->isChecked()==Qt::Checked)&&(ui->Rear_top->isChecked()==Qt::Unchecked))
    //            {
    //                QByteArray To;
    //                To.append("Ok2");
    //                otpravka(To);
    //            }
    //            if ((ui->Front->isChecked()==Qt::Unchecked)&&(ui->Rear->isChecked()==Qt::Unchecked)&&(ui->Ceiling_top->isChecked()==Qt::Unchecked)&&(ui->Rear_top->isChecked()==Qt::Checked))
    //            {
    //                QByteArray To;
    //                To.append("Ok3");
    //                otpravka(To);
    //            }
    //        }
    //    }

    ///

    ///////////////////////////////////////////////////////// AV Mute
    if(temp.getInt_command()==2)
    {
        if(temp.getInt_variable()==0)
        {
            ui->ON_mute->setChecked(false);
            ui->OFF_mute->setChecked(true);
            return P;
        }

        if(temp.getInt_variable()==1)
        {
            ui->ON_mute->setChecked(true);
            ui->OFF_mute->setChecked(false);
            return P;
        }
    }
    //    if(temp.getInt_command()==355)
    //    {
    //        if(temp.getInt_variable()==1)
    //        {
    //            if ((ui->ON_mute->isChecked())&&(!ui->OFF_mute->isChecked()))
    //            {
    //                QByteArray To;
    //                To.append("Ok1");
    //                otpravka(To);
    //            }
    //            if ((!ui->ON_mute->isChecked())&&(ui->OFF_mute->isChecked()))
    //            {
    //                QByteArray To;
    //                To.append("Ok0");
    //                otpravka(To);
    //            }

    //        }

    //    }

    ///////////////////////////////////////////////////////////////// Mute
    if(temp.getInt_command()==3)
    {
        if(temp.getInt_variable()==0)
        {
            ui->ON_mute2->setChecked(false);
            ui->OFF_mute2->setChecked(true);
            return P;
        }

        if(temp.getInt_variable()==1)
        {
            ui->ON_mute2->setChecked(true);
            ui->OFF_mute2->setChecked(false);
            return P;
        }

    }
    //    if(temp.getInt_command()==356)
    //    {
    //        if(temp.getInt_variable()==1)
    //        {
    //            if ((ui->ON_mute2->isChecked())&&(!ui->OFF_mute2->isChecked()))
    //            {
    //                QByteArray To;
    //                To.append("Ok1");
    //                otpravka(To);
    //            }
    //            if ((!ui->ON_mute2->isChecked())&&(ui->OFF_mute2->isChecked()))
    //            {
    //                QByteArray To;
    //                To.append("Ok0");
    //                otpravka(To);
    //            }
    //        }
    //    }

    ///////////////////////////////////////////////////////////////////////  Freeze
    if(temp.getInt_command()==4)
    {
        if(temp.getInt_variable()==0)
        {
            ui->Freeze_2->setCurrentIndex(0);
            return P;

        }

        if(temp.getInt_variable()==1)
        {
            ui->Freeze_2->setCurrentIndex(1);
            return P;
        }
    }

    /// ////////////////////////////////////////////////////////////////////////// PC MODE
    if(temp.getInt_command()==549)
    {
        if(temp.getInt_variable()==0)
        {

            ui->OFF_4->setCheckState(Qt::Checked);
            ui->ON_4->setCheckState(Qt::Unchecked);
            return P;
        }
        if(temp.getInt_variable()==1)
        {

            ui->OFF_4->setCheckState(Qt::Unchecked);
            ui->ON_4->setCheckState(Qt::Checked);
            return P;
        }

    }



    /////////////////////////////////////////////////
    ///  /// ////////////////////////////////////////////////////////////////////////// SERIAL PORT ECHO
    if(temp.getInt_command()==556)
    {
        if(temp.getInt_variable()==0)
        {

            ui->OFF_5->setCheckState(Qt::Checked);
            ui->ON_5->setCheckState(Qt::Unchecked);
            return P;
        }
        if(temp.getInt_variable()==1)
        {

            ui->OFF_5->setCheckState(Qt::Unchecked);
            ui->ON_5->setCheckState(Qt::Checked);
            return P;
        }

    }



    /////////////////////////////////////////////////
    ///  ///  /// ////////////////////////////////////////////////////////////////////////// SERIAL PORT PATH
    if(temp.getInt_command()==557)
    {
        if(temp.getInt_variable()==1)
        {

            ui->OFF_6->setCheckState(Qt::Checked);
            ui->ON_6->setCheckState(Qt::Unchecked);
            return P;
        }
        if(temp.getInt_variable()==2)
        {

            ui->OFF_6->setCheckState(Qt::Unchecked);
            ui->ON_6->setCheckState(Qt::Checked);
            return P;
        }

    }



    /////////////////////////////////////////////////
    /// ///  ///  /// ////////////////////////////////////////////////////////////////////////// SOURCE LOCK
    if(temp.getInt_command()==100)
    {
        if(temp.getInt_variable()==0)
        {

            ui->OFF_7->setCheckState(Qt::Checked);
            ui->ON_7->setCheckState(Qt::Unchecked);
            return P;
        }
        if(temp.getInt_variable()==1)
        {

            ui->OFF_7->setCheckState(Qt::Unchecked);
            ui->ON_7->setCheckState(Qt::Checked);
            return P;
        }

    }



    /////////////////////////////////////////////////
    /// ///  ///  /// ////////////////////////////////////////////////////////////////////////// GAMMA FILM

    if(temp.getInt_command()==182)
    {
        if(temp.getInt_variable()==0)
        {

            ui->Cureve_Type->setCheckState(Qt::Checked);
            return P;

        }

    }


    if(temp.getInt_command()==206)
    {
        if(temp.getInt_variable()==0)
        {

            ui->Reset->setCheckState(Qt::Checked);
            return P;

        }

    }


    /////////////////////////////////////////////////

    /// ///  ///  /// ////////////////////////////////////////////////////////////////////////// GAMMA VIDEO

    if(temp.getInt_command()==184)
    {
        if(temp.getInt_variable()==1)
        {

            ui->Cureve_Type_1->setCheckState(Qt::Checked);
            return P;

        }

    }


    if(temp.getInt_command()==207)
    {
        if(temp.getInt_variable()==1)
        {

            ui->Reset_1->setCheckState(Qt::Checked);
            return P;

        }

    }


    /////////////////////////////////////////////////



    /// ///  ///  /// ////////////////////////////////////////////////////////////////////////// GAMMA GRAPHICS

    if(temp.getInt_command()==186)
    {
        if(temp.getInt_variable()==1)
        {

            ui->Cureve_Type_2->setCheckState(Qt::Checked);
            return P;

        }

    }


    if(temp.getInt_command()==208)
    {
        if(temp.getInt_variable()==1)
        {

            ui->Reset_2->setCheckState(Qt::Checked);
            return P;

        }

    }


    /////////////////////////////////////////////////
    /// ///  ///  /// ////////////////////////////////////////////////////////////////////////// GAMMA PC SDANDART

    if(temp.getInt_command()==188)
    {
        if(temp.getInt_variable()==1)
        {
            ui->Cureve_Type_3->setCheckState(Qt::Checked);
            return P;

        }

    }


    if(temp.getInt_command()==209)
    {
        if(temp.getInt_variable()==1)
        {
            ui->Reset_3->setCheckState(Qt::Checked);
            return P;

        }

    }

    /////////////////////////////////////////////////
    /// ///  ///  /// ////////////////////////////////////////////////////////////////////////// IMAGE AI
    if(temp.getInt_command()==194)
    {
        if(temp.getInt_variable()==0)
        {

            ui->OFF8->setCheckState(Qt::Checked);
            ui->ON8->setCheckState(Qt::Unchecked);
            return P;
        }
        if(temp.getInt_variable()==1)
        {

            ui->OFF8->setCheckState(Qt::Unchecked);
            ui->ON8->setCheckState(Qt::Checked);
            return P;
        }

    }

    //////////////////////////////////
    /// ////////////////////////////////////////////////////////////////////////// Noise Reduction
    if(temp.getInt_command()==196){
        if(temp.check_include_interval(0,10)){
            ui->horizontalSlider_Noise_Reduction->setValue(temp.getInt_variable());
            return P;
        }

    }


    ///
    ////////////////////////////////////////////////////////////////////////////////////// superwide
    if(temp.getInt_command()==199)
    {
        if(temp.getInt_variable()==0){
            ui->comboBox_superwide->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->comboBox_superwide->setCurrentIndex(1);
            return P;
        }



        if(temp.getInt_variable()==2){
            ui->comboBox_superwide->setCurrentIndex(2);
            return P;
        }


        if(temp.getInt_variable()==3){
            ui->comboBox_superwide->setCurrentIndex(3);
            return P;
        }


    }
    ///
    /// ////////////////////////////////////////////////////////////////////////// 2D u 3D
    //    if(temp.getInt_command()==130)
    //    {
    //        if(temp.getInt_variable()==1)
    //        {
    //            if ((ui->DD->isChecked())&&(!ui->DDD->isChecked()))
    //            {
    //                QByteArray To;
    //                To.append("Ok0");
    //                otpravka(To);
    //            }
    //            if ((!ui->DD->isChecked())&&(ui->DDD->isChecked()))
    //            {
    //                QByteArray To;
    //                To.append("Ok1");
    //                otpravka(To);
    //            }

    //        }
    //    }

    /////////////////////////////////////////////////


    // Network page
    // Color Wheel Index
    if(temp.getInt_command()==547)
    {
        if(temp.getInt_variable()==1){
            ui->Crestron_box->setCurrentIndex(0);
            return P;
        }


        if(temp.getInt_variable()==2){
            ui->Crestron_box->setCurrentIndex(1);
            return P;
        }


    }

    if(temp.getInt_command()==548)
    {
        if(temp.getInt_variable()==0){
            ui->comboBox5465465465_2->setCurrentIndex(0);
            return P;
        }


        if(temp.getInt_variable()==1){
            ui->comboBox5465465465_2->setCurrentIndex(1);
            return P;
        }



        if(temp.getInt_variable()==2){
            ui->comboBox5465465465_2->setCurrentIndex(1);
            return P;
        }



    }


    if(temp.getInt_command()==550)
    {
        if(temp.getInt_variable()==0){
            ui->comboBox5465465465_3->setCurrentIndex(0);
            return P;
        }


        if(temp.getInt_variable()==1){
            ui->comboBox5465465465_3->setCurrentIndex(1);
            return P;
        }



        if(temp.getInt_variable()==2){
            ui->comboBox5465465465_3->setCurrentIndex(1);
            return P;
        }



    }



    if(temp.getInt_command()==553){
        if(temp.check_include_interval(0,248)){
            ui->horizontalSlider_2xxxxx->setValue(temp.getInt_variable());
            return P;

        }

    }


    if(temp.getInt_command()==551){
        if(temp.check_include_interval(5,3000)){
            ui->horizontsl_2->setValue(temp.getInt_variable());
            return P;
        }

    }





    if(temp.getInt_command()==554){
        if(temp.check_include_interval(0,248)){
            ui->horizontalSlider_3xxxxx->setValue(temp.getInt_variable());
            return P;
        }

    }

    // Point blank
    if(temp.getInt_command()==312)
    {
        if(temp.getInt_variable()==1){
            ui->comboBox_color->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==2){
            ui->comboBox_color->setCurrentIndex(1);
            return P;
        }

    }

    if(temp.getInt_command()==522){
        if(temp.check_include_interval(0,10)){
            ui->horizontsl->setValue(temp.getInt_variable());
            return P;
        }

    }

    //Control
    if(temp.getInt_command()==454)
    {
        if(temp.getInt_variable()==0){
            ui->Crestron_box->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->Crestron_box->setCurrentIndex(1);
            return P;
        }

    }

    if(temp.getInt_command()==455)
    {
        if(temp.getInt_variable()==0){
            ui->Extron_box->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->Extron_box->setCurrentIndex(1);
            return P;
        }

    }

    if(temp.getInt_command()==456)
    {
        if(temp.getInt_variable()==0){
            ui->PJLink_box->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->PJLink_box->setCurrentIndex(1);
            return P;
        }

    }

    if(temp.getInt_command()==457)
    {
        if(temp.getInt_variable()==0){
            ui->AMX_Device_Discovery_box->setCurrentIndex(0);
            return P;
        }


        if(temp.getInt_variable()==1){
            ui->AMX_Device_Discovery_box->setCurrentIndex(1);
            return P;
        }

    }

    if(temp.getInt_command()==458)
    {
        if(temp.getInt_variable()==0){
            ui->Telnet_box->setCurrentIndex(0);
            return P;
        }


        if(temp.getInt_variable()==1){
            ui->Telnet_box->setCurrentIndex(1);
            return P;
        }

    }


    if(temp.getInt_command()==459)
    {
        if(temp.getInt_variable()==0){
            ui->HTTP_box->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->HTTP_box->setCurrentIndex(1);
            return P;
        }

    }

    if((temp.getInt_command()==450)&&(temp.getInt_variable()==0))
    {
        ui->WLAN_box->setCurrentIndex(0);
        return P;
    }

    if((temp.getInt_command()==450)&&(temp.getInt_variable()==1))
    {
        ui->WLAN_box->setCurrentIndex(1);
        return P;
    }

    //------------------------------Audio page-----------------------------------------------------------------------------
    //Internal Speaker
    if(temp.getInt_command()==310){
        if(temp.getInt_variable()==0){
            ui->comboBox_Internal_speaker->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Internal_speaker->setCurrentIndex(1);
            return P;
        }
    }

    //Mute
    if(temp.getInt_command()==80){
        if(temp.getInt_variable()==0){
            ui->comboBox_Mute->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->comboBox_Mute->setCurrentIndex(1);
            return P;
        }

    }
    //Mic
    if(temp.getInt_command()==562){
        if(temp.getInt_variable()==0){
            ui->comboBox_Mic->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->comboBox_Mic->setCurrentIndex(1);
            return P;
        }

    }
    //Volume
    if(temp.getInt_command()==81){
        if(temp.check_include_interval(0,10)){
            ui->horizontalSlider_Volume->setValue(temp.getInt_variable());
            return P;
        }

    }
    //Mic_Volume
    if(temp.getInt_command()==93){
        if(temp.check_include_interval(0,10)){
            ui->horizontalSlider_Mic_Volume->setValue(temp.getInt_variable());
            return P;
        }
    }
    //Audio Input
    if(temp.getInt_command()==89){
        if(temp.getInt_variable()==0){
            ui->comboBox_Audio_Input->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Audio_Input->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Audio_Input->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Audio_Input->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Audio_Input->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Audio_Input->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Audio_Input->setCurrentIndex(6);
            return P;

        }
        if(temp.getInt_variable()==7){
            ui->comboBox_Audio_Input->setCurrentIndex(7);
            return P;

        }
        if(temp.getInt_variable()==8){
            ui->comboBox_Audio_Input->setCurrentIndex(8);
            return P;

        }
        if(temp.getInt_variable()==9){
            ui->comboBox_Audio_Input->setCurrentIndex(9);
            return P;

        }
    }

    //Audio Delay
    //????
    //Audio Out (Standby)
    if(temp.getInt_command()==510){
        if(temp.getInt_variable()==0){
            ui->comboBox_Audio_Out->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->comboBox_Audio_Out->setCurrentIndex(1);
            return P;
        }

    }
    //SRS
    if(temp.getInt_command()==94){
        if(temp.getInt_variable()==0){
            ui->comboBox_SRS->setCurrentIndex(0);
            return P;
        }

        if(temp.getInt_variable()==1){
            ui->comboBox_SRS->setCurrentIndex(1);
            return P;
        }
    }
    //Treble
    if(temp.getInt_command()==95){
        if(temp.check_include_interval(-10,10)){
            ui->horizontalSlider_Treble->setValue(temp.getInt_variable());
            return P;
        }
    }
    //Bass
    if(temp.getInt_command()==96){
        if(temp.check_include_interval(-10,10)){
            ui->horizontalSlider_Bass->setValue(temp.getInt_variable());
            return P;
        }
    }
    //------------------------------END Audio page

    //------------------------------3D page
    //3D Mode
    if(temp.getInt_command()==230){

        if(temp.getInt_variable()==0){
            ui->comboBox_3D_Mode->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_3D_Mode->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_3D_Mode->setCurrentIndex(2);
            return P;

        }
    }
    //3D_2D
    if(temp.getInt_command()==400){
        if(temp.getInt_variable()==0){
            ui->comboBox_3D_2D->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_3D_2D->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_3D_2D->setCurrentIndex(2);
            return P;

        }
    }
    //3D Format
    if(temp.getInt_command()==405){
        if(temp.getInt_variable()==0){
            ui->comboBox_3D_Format->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_3D_Format->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_3D_Format->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_3D_Format->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==7){
            ui->comboBox_3D_Format->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==8){
            ui->comboBox_3D_Format->setCurrentIndex(5);
            return P;

        }
    }
    //3D sync invert
    if(temp.getInt_command()==231){
        if(temp.getInt_variable()==0){
            ui->comboBox_3D_sync_invert->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_3D_sync_invert->setCurrentIndex(1);
            return P;

        }
    }
    //2D_3D
    if(temp.getInt_command()==402){
        if(temp.getInt_variable()==0){
            ui->comboBox_2D_3D->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_2D_3D->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_2D_3D->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_2D_3D->setCurrentIndex(3);
            return P;

        }
    }
    //------------------------------END 3D page

    //------------------------------Display page
    //Aspect ratio
    if(temp.getInt_command()==60){
        if(temp.getInt_variable()==1){
            ui->comboBox_Aspect_ratio->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Aspect_ratio->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Aspect_ratio->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Aspect_ratio->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==9){
            ui->comboBox_Aspect_ratio->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Aspect_ratio->setCurrentIndex(6);
            return P;

        }
        if(temp.getInt_variable()==7){
            ui->comboBox_Aspect_ratio->setCurrentIndex(7);
            return P;

        }
        if(temp.getInt_variable()==8){
            ui->comboBox_Aspect_ratio->setCurrentIndex(8);
            return P;

        }
        if(temp.getInt_variable()==11){
            ui->comboBox_Aspect_ratio->setCurrentIndex(9);
            return P;

        }
        if(temp.getInt_variable()==12){
            ui->comboBox_Aspect_ratio->setCurrentIndex(10);
            return P;

        }

    }

    //Edge Mask
    if(temp.getInt_command()==61){
        if(temp.check_include_interval(0,10)){
            ui->horizontalSlider_Edge_Mask->setValue(temp.getInt_variable());
            return P;
        }

    }

    //Zoom
    if(temp.getInt_command()==5){
        if(temp.getInt_variable() == 1){
            emit on_pushButton_Zoom_plus_clicked();
            return P;

        }
    }

    if(temp.getInt_command()==6){
        if(temp.getInt_variable() == 1){
            emit on_pushButton_Zoom_minus_clicked();
            return P;

        }
    }

    if(temp.getInt_command()==62){
        if(temp.check_include_interval(-5,25)){
            ui->horizontalSlider_Zoom->setValue(temp.getInt_variable());
            return P;
        }

    }

    //Digital Zoom
    if(temp.getInt_command()==504){
        if(temp.check_include_interval(0,100)){
            ui->horizontalSlider_H_Zoom->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==505){
        if(temp.check_include_interval(0,100)){
            ui->horizontalSlider_V_Zoom->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Image shift
    //H
    if(temp.getInt_command()==540){
        if(temp.getInt_variable() == 2){
            emit on_pushButton_Image_shift_H_plus_clicked();
            return P;

        }

        if(temp.getInt_variable() == 1){
            emit on_pushButton_Image_shift_H_minus_clicked();
            return P;

        }
    }

    if(temp.getInt_command()==63){
        if(temp.check_include_interval(-100,100)){
            ui->horizontalSlider_Image_shift_H->setValue(temp.getInt_variable());
            return P;
        }

    }
    //V
    if(temp.getInt_command()==541){
        if(temp.getInt_variable() == 2){
            emit on_pushButton_Image_shift_V_plus_clicked();
            return P;

        }

        if(temp.getInt_variable() == 1){
            emit on_pushButton_Image_shift_V_minus_clicked();
            return P;

        }
    }

    if(temp.getInt_command()==64){
        if(temp.check_include_interval(-100,100)){
            ui->horizontalSlider_Image_shift_V->setValue(temp.getInt_variable());
            return P;
        }

    }
    //H Keystone
    if(temp.getInt_command()==65){
        if(temp.check_include_interval(-40,40)){
            ui->horizontalSlider_H_Keystone->setValue(temp.getInt_variable());
            return P;
        }

    }

    //V Keystone
    if(temp.getInt_command()==66){
        if(temp.check_include_interval(-40,40)){
            ui->horizontalSlider_V_Keystone->setValue(temp.getInt_variable());
            return P;
        }

    }
    //Four Corners
    //top_lef
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 1){
            //                if(temp.check_include_interval(0,120)){
            //                    ui->horizontalSlider_Four_Corners_top_left_H->setValue(temp.getInt_variable());
            //                }
            return P;

        }
    }
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 2){
            //                if(temp.check_include_interval(0,80)){
            //                    ui->horizontalSlider_Four_Corners_top_left_V->setValue(temp.getInt_variable());
            //                }
            return P;

        }
    }

    if(temp.getInt_command()==59){
        if(temp.getInt_variable() == 1){
            emit on_pushButton_Four_Corners_top_left_right_clicked();
            return P;

        }
        if(temp.getInt_variable() == 2){
            emit on_pushButton_Four_Corners_top_left_left_clicked();
            return P;

        }
        if(temp.getInt_variable() == 3){
            emit on_pushButton_Four_Corners_top_left_up_clicked();
            return P;

        }
        if(temp.getInt_variable() == 4){
            emit on_pushButton_Four_Corners_top_left_down_clicked();
            return P;

        }

    }

    //top_right
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 3){
            //            if(temp.check_include_interval(0,120)){
            //                ui->horizontalSlider_Four_Corners_top_right_H->setValue(temp.getInt_variable());
            //            }
            return P;

        }
    }
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 4){
            //            if(temp.check_include_interval(0,80)){
            //                ui->horizontalSlider_Four_Corners_top_right_V->setValue(temp.getInt_variable());
            //                      }
            return P;

        }
    }
    if(temp.getInt_command()==59){
        if(temp.getInt_variable() == 5){
            emit on_pushButton_Four_Corners_top_right_right_clicked();
            return P;

        }
        if(temp.getInt_variable() == 6){
            emit on_pushButton_Four_Corners_top_right_left_clicked();
            return P;

        }
        if(temp.getInt_variable() == 7){
            emit on_pushButton_Four_Corners_top_right_up_clicked();
            return P;

        }
        if(temp.getInt_variable() == 8){
            emit on_pushButton_Four_Corners_top_right_down_clicked();
            return P;

        }
    }
    //buttom_left
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 5){
            //                if(temp.check_include_interval(0,120)){
            //                    ui->horizontalSlider_Four_Corners_buttom_left_H->setValue(temp.getInt_variable());
            //                }

            return P;
        }
    }
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 6){
            //                if(temp.check_include_interval(0,80)){
            //                    ui->horizontalSlider_Four_Corners_buttom_left_V->setValue(temp.getInt_variable());
            //                }

            return P;
        }
    }

    if(temp.getInt_command()==59){
        if(temp.getInt_variable() == 9){
            emit on_pushButton_Four_Corners_buttom_left_right_clicked();
            return P;

        }
        if(temp.getInt_variable() == 10){
            emit on_pushButton_Four_Corners_buttom_left_left_clicked();
            return P;

        }
        if(temp.getInt_variable() == 11){
            emit on_pushButton_Four_Corners_buttom_left_up_clicked();
            return P;

        }
        if(temp.getInt_variable() == 12){
            emit on_pushButton_Four_Corners_buttom_left_down_clicked();
            return P;

        }
    }
    //buttom_right
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 7){
            //            if(temp.check_include_interval(0,120)){
            //                ui->horizontalSlider_Four_Corners_buttom_right_H->setValue(temp.getInt_variable());
            //            }
            return P;

        }
    }
    if(temp.getInt_command()==58){
        if(temp.getInt_variable() == 8){
            //            if(temp.check_include_interval(0,80)){
            //                ui->horizontalSlider_Four_Corners_buttom_right_V->setValue(temp.getInt_variable());
            //            }
            return P;

        }
    }
    if(temp.getInt_command()==59){
        if(temp.getInt_variable() == 13){
            emit on_pushButton_Four_Corners_buttom_right_right_clicked();
            return P;

        }
        if(temp.getInt_variable() == 14){
            emit on_pushButton_Four_Corners_buttom_right_left_clicked();
            return P;

        }
        if(temp.getInt_variable() == 15){
            emit on_pushButton_Four_Corners_buttom_right_up_clicked();
            return P;

        }
        if(temp.getInt_variable() == 16){
            emit on_pushButton_Four_Corners_buttom_right_down_clicked();
            return P;

        }
    }
    if(temp.getInt_command()==516){
        if(temp.getInt_variable() == 1){
            emit on_pushButton_Four_Corners_Reset_clicked();
            return P;

        }
    }
    //Geometric Correction
    if(temp.getInt_command()==300){
        if(temp.check_include_interval(-10,10)){
            ui->horizontalSlider_Geometric_Correction_H_Arc->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==301){
        if(temp.check_include_interval(-10,10)){
            ui->horizontalSlider_Geometric_Correction_V_Arc->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==65){
        if(temp.check_include_interval(-40,140)){
            ui->horizontalSlider_Geometric_Correction_H_keystone->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==66){
        if(temp.check_include_interval(-40,140)){
            ui->horizontalSlider_Geometric_Correction_V_keystone->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==69){
        if(temp.getInt_variable()==0){
            ui->comboBox_Geometric_Correction_Auto_Keystone->setCurrentIndex(0);
            return P;

        }

        if(temp.getInt_variable()==1){
            ui->comboBox_Geometric_Correction_Auto_Keystone->setCurrentIndex(1);
            return P;

        }
    }

    if(temp.getInt_command()==561){
        if(temp.getInt_variable() == 1){
            emit on_pushButton_Geometric_Correction_Reset_clicked();
            return P;

        }
    }
    //PIP_PBP
    if(temp.getInt_command()==302){
        if(temp.getInt_variable()==0){
            ui->comboBox_PIP_PBP_Screen->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_PIP_PBP_Screen->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_PIP_PBP_Screen->setCurrentIndex(2);
            return P;

        }
    }

    if(temp.getInt_command()==303){
        if(temp.getInt_variable()==1){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==7){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(6);
            return P;

        }
        if(temp.getInt_variable()==8){
            ui->comboBox_PIP_PBP_Location->setCurrentIndex(7);
            return P;

        }
    }

    if(temp.getInt_command()==304){
        if(temp.getInt_variable()==1){
            ui->comboBox_PIP_PBP_Size->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_PIP_PBP_Size->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_PIP_PBP_Size->setCurrentIndex(2);
            return P;

        }
    }

    if(temp.getInt_command()==12){
        if(temp.getInt_variable()==1){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==15){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==16){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(6);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(7);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(9);
            return P;

        }
        if(temp.getInt_variable()==14){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(10);
            return P;

        }
        if(temp.getInt_variable()==9){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(11);
            return P;

        }
        if(temp.getInt_variable()==10){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(12);
            return P;

        }
        if(temp.getInt_variable()==20){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(13);
            return P;

        }
        if(temp.getInt_variable()==21){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(14);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(15);
            return P;

        }
        if(temp.getInt_variable()==11){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(16);
            return P;

        }
        if(temp.getInt_variable()==17){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(17);
            return P;

        }
        if(temp.getInt_variable()==18){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(18);
            return P;

        }
        if(temp.getInt_variable()==19){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(19);
            return P;

        }
        if(temp.getInt_variable()==23){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(20);
            return P;

        }
        if(temp.getInt_variable()==22){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(21);
            return P;

        }
        if(temp.getInt_variable()==24){
            ui->comboBox_PIP_PBP_Sourse_Main->setCurrentIndex(22);
            return P;

        }
    }

    if(temp.getInt_command()==305){
        if(temp.getInt_variable()==1){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==13){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(6);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(7);
            return P;

        }
        if(temp.getInt_variable()==7){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(8);
            return P;

        }
        if(temp.getInt_variable()==8){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(9);
            return P;

        }
        if(temp.getInt_variable()==9){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(10);
            return P;

        }
        if(temp.getInt_variable()==10){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(11);
            return P;

        }
        if(temp.getInt_variable()==11){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(12);
            return P;

        }
        if(temp.getInt_variable()==12){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(13);
            return P;

        }
        if(temp.getInt_variable()==14){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(14);
            return P;

        }
        if(temp.getInt_variable()==15){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(15);
            return P;

        }
        if(temp.getInt_variable()==16){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(16);
            return P;

        }
        if(temp.getInt_variable()==17){
            ui->comboBox_PIP_PBP_Sourse_Sub->setCurrentIndex(17);
            return P;

        }
    }

    if(temp.getInt_command()==306){
        if(temp.getInt_variable() == 1){
            emit on_pushButton_PIP_PBP_Swap_clicked();
            return P;

        }
    }

    //Image_Setting
    //Display Mode
    if(temp.getInt_command()==20){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(1);
            return P;

        }

        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==11){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==16){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==12){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(6);
            return P;

        }

        if(temp.getInt_variable()==13){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(8);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(9);
            return P;

        }
        if(temp.getInt_variable()==9){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(10);
            return P;

        }

        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(11);
            return P;

        }
        if(temp.getInt_variable()==14){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(12);
            return P;

        }
        if(temp.getInt_variable()==15){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(13);
            return P;

        }
        if(temp.getInt_variable()==17){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(14);
            return P;

        }
        if(temp.getInt_variable()==18){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(15);
            return P;

        }
        if(temp.getInt_variable()==19){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(16);
            return P;

        }
        if(temp.getInt_variable()==20){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(17);
            return P;

        }
        if(temp.getInt_variable()==21){
            ui->comboBox_Image_Setting_Display_Mode->setCurrentIndex(18);
            return P;

        }
    }

    //Wall Color
    if(temp.getInt_command()==506){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==7){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Wall_Color->setCurrentIndex(6);
            return P;

        }
    }

    //Gamma
    if(temp.getInt_command()==35){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(3);
            return P;

        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(4);
            return P;

        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(5);
            return P;

        }
        if(temp.getInt_variable()==12){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(6);
            return P;

        }
        if(temp.getInt_variable()==8){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(7);
            return P;

        }
        if(temp.getInt_variable()==9){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(8);
            return P;

        }
        if(temp.getInt_variable()==10){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(9);
            return P;

        }
        if(temp.getInt_variable()==11){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(10);
            return P;

        }
        if(temp.getInt_variable()==12){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(11);
            return P;

        }
        if(temp.getInt_variable()==13){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(12);
            return P;

        }
        if(temp.getInt_variable()==14){
            ui->comboBox_Image_Setting_Display_Gamma->setCurrentIndex(13);
            return P;

        }

    }

    if(temp.getInt_command()==183){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_Film->setValue(temp.getInt_variable());
            return P;
        }
    }
    if(temp.getInt_command()==185){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_Video->setValue(temp.getInt_variable());
            return P;
        }
    }
    if(temp.getInt_command()==187){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_Graphics->setValue(temp.getInt_variable());
            return P;
        }
    }
    if(temp.getInt_command()==189){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_Standart->setValue(temp.getInt_variable());
            return P;
        }
    }
    if(temp.getInt_command()==533){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_1_8->setValue(temp.getInt_variable());
            return P;
        }
    }
    if(temp.getInt_command()==534){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_2_0->setValue(temp.getInt_variable());
            return P;
        }
    }
    if(temp.getInt_command()==535){
        if(temp.check_include_interval(-5,5)){
            ui->horizontalSlider_Image_Setting_Display_Gamma_2_4->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Gain
    if(temp.getInt_command()==21){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Brightness->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==46){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Image_Setting_Brightness_minus_clicked();
            return P;

        }
        if(temp.getInt_variable()==2){
            emit on_pushButton_Image_Setting_Brightness_plus_clicked();
            return P;

        }
    }

    //Contrast
    if(temp.getInt_command()==22){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Contrast->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==47){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Image_Setting_Contrast_minus_clicked();
            return P;

        }
        if(temp.getInt_variable()==2){
            emit on_pushButton_Image_Setting_Contrast_plus_clicked();
            return P;

        }
    }

    //Sharpness
    if(temp.getInt_command()==23){
        if(temp.check_include_interval(1,15)){
            ui->horizontalSlider_Image_Setting_Sharpness->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Color
    if(temp.getInt_command()==45){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Tint
    if(temp.getInt_command()==44){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Tint->setValue(temp.getInt_variable());
            return P;
        }
    }

    //BriliantColor
    if(temp.getInt_command()==34){
        if(temp.check_include_interval(1,10)){
            ui->horizontalSlider_Image_Setting_Color_Setting_BrilliantColor->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Color Temperature
    if(temp.getInt_command()==36){
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->setCurrentIndex(0);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->setCurrentIndex(1);
            return P;

        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->setCurrentIndex(2);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->setCurrentIndex(3);
            return P;

        }

        //...
    }

    if(temp.getInt_command()==33){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Image_Setting_Color_Setting_Color_Temperature_reset_clicked();
            return P;
        }
    }

    //Color Matching
    //R
    if(temp.getInt_command()==333){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_R->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==327){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_R->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==339){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_R->setValue(temp.getInt_variable());
            return P;
        }
    }
    //G
    if(temp.getInt_command()==334){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_G->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==328){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_G->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==340){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_G->setValue(temp.getInt_variable());
            return P;
        }
    }
    //B
    if(temp.getInt_command()==335){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_B->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==329){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_B->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==341){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_B->setValue(temp.getInt_variable());
            return P;
        }
    }
    //C
    if(temp.getInt_command()==336){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_C->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==330){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_C->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==342){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_C->setValue(temp.getInt_variable());
            return P;
        }
    }
    //Y
    if(temp.getInt_command()==337){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_Y->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==331){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_Y->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==343){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_Y->setValue(temp.getInt_variable());
            return P;
        }
    }
    //M
    if(temp.getInt_command()==338){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_M->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==332){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_M->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==344){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_M->setValue(temp.getInt_variable());
            return P;
        }
    }
    //W
    if(temp.getInt_command()==345){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_W->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==346){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_W->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==347){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_W->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Color Gamut
    if(temp.getInt_command()==211){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(0);
            return P;

        }

        if(temp.getInt_variable()==7){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(1);
            return P;

        }

        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(2);
            return P;

        }

        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(3);
            return P;

        }

        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(4);
            return P;

        }

        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(5);
            return P;

        }

        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(6);
            return P;

        }

        if(temp.getInt_variable()==8){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(7);
            return P;

        }

        if(temp.getInt_variable()==9){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(8);
            return P;

        }

        if(temp.getInt_variable()==10){
            ui->comboBox_Image_Setting_Color_Setting_Color_Temperature_2_Golot_Gamult->setCurrentIndex(9);
            return P;

        }
    }


    //CMS
    //R
    if(temp.getInt_command()==333){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_R->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==327){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_R->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==339){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_R->setValue(temp.getInt_variable());
            return P;
        }

    }
    //G
    if(temp.getInt_command()==334){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_G->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==328){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_G->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==340){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_G->setValue(temp.getInt_variable());
            return P;
        }

    }
    //B
    if(temp.getInt_command()==335){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_B->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==329){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_B->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==341){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_B->setValue(temp.getInt_variable());
            return P;
        }

    }
    //C
    if(temp.getInt_command()==336){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_C->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==330){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_C->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==342){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_C->setValue(temp.getInt_variable());
            return P;
        }

    }
    //Y
    if(temp.getInt_command()==336){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_Y->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==331){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_Y->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==343){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_Y->setValue(temp.getInt_variable());
            return P;
        }

    }
    //M
    if(temp.getInt_command()==338){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_M->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==332){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_M->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==344){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_M->setValue(temp.getInt_variable());
            return P;
        }

    }
    //W
    if(temp.getInt_command()==345){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_W->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==346){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_W->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==347){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_W->setValue(temp.getInt_variable());
            return P;
        }

    }

    //Color Matching
    if(temp.getInt_command()==410){
        if(temp.getInt_variable()==0){
            ui->checkBox_Image_Setting_Color_Setting_Color_Matching_disable->setCheckState(Qt::Checked);
            ui->checkBox_Image_Setting_Color_Setting_Color_Matching_enable->setCheckState(Qt::Unchecked);
            return P;

        }
        if(temp.getInt_variable()==1){
            ui->checkBox_Image_Setting_Color_Setting_Color_Matching_disable->setCheckState(Qt::Unchecked);
            ui->checkBox_Image_Setting_Color_Setting_Color_Matching_enable->setCheckState(Qt::Checked);
            return P;

        }
    }

    if(temp.getInt_command()==411){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_Color_Setting_Color_Matching_Auto_Test_Pattern->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Color_Setting_Color_Matching_Auto_Test_Pattern->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==412){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Red->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==413){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Red->setValue(temp.getInt_variable());
            return P;
        }

    }
    if(temp.getInt_command()==414){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Red->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==415){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Green->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==416){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Green->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==417){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Green->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==418){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_Blue->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==419){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_Blue->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==420){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_Blue->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==421){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_Part_of_White->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==422){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_Part_of_White->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==423){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_Part_of_White->setValue(temp.getInt_variable());
            return P;
        }

    }

    //RGB Gain/Bias
    if(temp.getInt_command()==24){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Gain->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==25){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Gain->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==26){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Gain->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==27){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Bias->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==28){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Bias->setValue(temp.getInt_variable());
            return P;
        }

    }

    if(temp.getInt_command()==29){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Bias->setValue(temp.getInt_variable());
            return P;
        }

    }

    //Color Space

    if(temp.getInt_command()==37){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Color_Setting_Color_Space->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Color_Setting_Color_Space->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Color_Setting_Color_Space->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Color_Setting_Color_Space->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Color_Setting_Color_Space->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Color_Setting_Color_Space->setCurrentIndex(6 );
            return P;
        }
    }

    //RGB Channel [w/pixelwork]
    if(temp.getInt_command()==508){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Color_Setting_RGB_Channel_pixelwork->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Color_Setting_RGB_Channel_pixelwork->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Color_Setting_RGB_Channel_pixelwork->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Color_Setting_RGB_Channel_pixelwork->setCurrentIndex(3);
            return P;
        }
    }

    //White Level
    if(temp.getInt_command()==200){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_White_level->setValue(temp.getInt_variable());
            return P;
        }
    }
    //Black Level
    if(temp.getInt_command()==201){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Black_level->setValue(temp.getInt_variable());
            return P;
        }

    }
    //Saturatuon
    if(temp.getInt_command()==202){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Saturation->setValue(temp.getInt_variable());
            return P;
        }
    }
    //Hue
    if(temp.getInt_command()==203){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Color_Setting_Hue->setValue(temp.getInt_variable());
            return P;
        }
    }
    //IRE
    if(temp.getInt_command()==204){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Color_Setting_IRE->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_Color_Setting_IRE->setCurrentIndex(1);
            return P;
        }
    }

    //signal
    if(temp.getInt_command()==91){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_Signal_Automatic->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Signal_Automatic->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==73){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Signal_Frequency->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==74){
        if(temp.check_include_interval(0,31)){
            ui->horizontalSlider_Image_Setting_Signal_Phase->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==75){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Signal_H_position->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==76){
        if(temp.check_include_interval(-50,50)){
            ui->horizontalSlider_Image_Setting_Signal_V_position->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Gaming mode
    //**************

    //Lens Iris
    if(temp.getInt_command()==216){
        if(temp.check_include_interval(1,12)){
            ui->horizontalSlider_Image_Setting_Lens_Iris->setValue(temp.getInt_variable());
            return P;
        }
    }
    //Dynamic Contrast
    //**************

    //Brightness Mode
    if(temp.getInt_command()==110){
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Brightness_Mode->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Brightness_Mode->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Brightness_Mode->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Brightness_Mode->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Brightness_Mode->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(0);
            return P;
        }
    }
    //Brightness Mode Power
    if(temp.getInt_command()==326){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(6);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(8);
            return P;
        }
        if(temp.getInt_variable()==8){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(9);
            return P;
        }
        if(temp.getInt_variable()==9){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(10);
            return P;
        }
        if(temp.getInt_variable()==10){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_Power->setCurrentIndex(11);
            return P;
        }

    }
    // Brightness Mode DynamicBlack
    if(temp.getInt_command()==191){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_DynamicBlack->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_DynamicBlack->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_DynamicBlack->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_Image_Setting_Brightness_Mode_DynamicBlack->setCurrentIndex(3);
            return P;
        }
    }

    //PureEngine
    //UltraDetail
    if(temp.getInt_command()==41){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail->setCurrentIndex(6);
            return P;
        }
    }

    if(temp.getInt_command()==431){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(6);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==8){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(8);
            return P;
        }
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(9);
            return P;
        }
        if(temp.getInt_variable()==10){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(10);
            return P;
        }
        if(temp.getInt_variable()==11){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(11);
            return P;
        }
        if(temp.getInt_variable()==12){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(12);
            return P;
        }
        if(temp.getInt_variable()==13){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(13);
            return P;
        }
        if(temp.getInt_variable()==14){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(14);
            return P;
        }
        if(temp.getInt_variable()==15){
            ui->comboBox_Image_Setting_PureEngine_UltraDetail_User->setCurrentIndex(15);
            return P;
        }
    }

    if(temp.getInt_command()==42){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_PureEngine_PureColor->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_PureEngine_PureColor->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_PureEngine_PureColor->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_PureEngine_PureColor->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->comboBox_Image_Setting_PureEngine_PureColor->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->comboBox_Image_Setting_PureEngine_PureColor->setCurrentIndex(5);
            return P;
        }
    }

    if(temp.getInt_command()==190){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_PureEngine_PureMotion->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_PureEngine_PureMotion->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_PureEngine_PureMotion->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->comboBox_Image_Setting_PureEngine_PureMotion->setCurrentIndex(3);
            return P;
        }
    }

    if(temp.getInt_command()==197){
        if(temp.getInt_variable()==0){
            ui->comboBox_Image_Setting_PureEngine_PureMotion_Demo->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->comboBox_Image_Setting_PureEngine_PureMotion_Demo->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->comboBox_Image_Setting_PureEngine_PureMotion_Demo->setCurrentIndex(2);
            return P;
        }
    }

    //Darbee Settings
    //Mode
    //Level
    //Demo Mode
    //reset
    if(temp.getInt_command()==509){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Image_Setting_Darbee_Setting_reset_clicked();
            return P;
        }
    }

    //Remote Control Simulation
    //    if(temp.getInt_command()==140){
    //        if(temp.getInt_variable()==1){}
    //        if(temp.getInt_variable()==2){}
    //        if(temp.getInt_variable()==3){}
    //        if(temp.getInt_variable()==4){}
    //        if(temp.getInt_variable()==5){}
    //        if(temp.getInt_variable()==6){}
    //        if(temp.getInt_variable()==7){}
    //        if(temp.getInt_variable()==8){}
    //        if(temp.getInt_variable()==9){}
    //        if(temp.getInt_variable()==10){}
    //        if(temp.getInt_variable()==11){}
    //        if(temp.getInt_variable()==12){}
    //        if(temp.getInt_variable()==13){}
    //        if(temp.getInt_variable()==14){}
    //        if(temp.getInt_variable()==15){}
    //        if(temp.getInt_variable()==16){}
    //        if(temp.getInt_variable()==17){}
    //        if(temp.getInt_variable()==18){}
    //        if(temp.getInt_variable()==19){}
    //        if(temp.getInt_variable()==20){}
    //        if(temp.getInt_variable()==21){}
    //        if(temp.getInt_variable()==22){}
    //        if(temp.getInt_variable()==23){}
    //        if(temp.getInt_variable()==24){}
    //        if(temp.getInt_variable()==25){}
    //        if(temp.getInt_variable()==26){}
    //        if(temp.getInt_variable()==27){}
    //        if(temp.getInt_variable()==28){}
    //        if(temp.getInt_variable()==30){}
    //        if(temp.getInt_variable()==31){}
    //        if(temp.getInt_variable()==32){}
    //        if(temp.getInt_variable()==33){}
    //        if(temp.getInt_variable()==34){}
    //        if(temp.getInt_variable()==35){}
    //        if(temp.getInt_variable()==36){}
    //        if(temp.getInt_variable()==37){}
    //        if(temp.getInt_variable()==38){}
    //        if(temp.getInt_variable()==39){}
    //        if(temp.getInt_variable()==40){}
    //        if(temp.getInt_variable()==41){}
    //        if(temp.getInt_variable()==42){}
    //        if(temp.getInt_variable()==43){}
    //        if(temp.getInt_variable()==44){}
    //        if(temp.getInt_variable()==45){}
    //        if(temp.getInt_variable()==47){}
    //        if(temp.getInt_variable()==51){}
    //        if(temp.getInt_variable()==52){}
    //        if(temp.getInt_variable()==53){}
    //        if(temp.getInt_variable()==54){}
    //        if(temp.getInt_variable()==55){}
    //        if(temp.getInt_variable()==56){}
    //        if(temp.getInt_variable()==57){}
    //        if(temp.getInt_variable()==58){}
    //        if(temp.getInt_variable()==59){}
    //        if(temp.getInt_variable()==60){}
    //        if(temp.getInt_variable()==61){}
    //        if(temp.getInt_variable()==63){}
    //        if(temp.getInt_variable()==64){}
    //        if(temp.getInt_variable()==65){}
    //        if(temp.getInt_variable()==66){}
    //        if(temp.getInt_variable()==67){}
    //        if(temp.getInt_variable()==68){}
    //        if(temp.getInt_variable()==69){}
    //        if(temp.getInt_variable()==70){}
    //        if(temp.getInt_variable()==71){}
    //        if(temp.getInt_variable()==72){}
    //        if(temp.getInt_variable()==73){}
    //        if(temp.getInt_variable()==74){}
    //        if(temp.getInt_variable()==75){}
    //        if(temp.getInt_variable()==76){}
    //        if(temp.getInt_variable()==77){}
    //        if(temp.getInt_variable()==78){}
    //        if(temp.getInt_variable()==79){}
    //        if(temp.getInt_variable()==80){}
    //        if(temp.getInt_variable()==81){}
    //        if(temp.getInt_variable()==82){}
    //    }
    //Setup
    //Lamp Settings
    if(temp.getInt_command()==111){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp_clicked();
            return P;
        }
        if(temp.getInt_variable()==2){
            emit on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp1_clicked();
            return P;
        }
        if(temp.getInt_variable()==3){
            emit on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp12_clicked();
            return P;
        }
    }

    if(temp.getInt_command()==116){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp2_clicked();
            return P;
        }
    }


    if(temp.getInt_command()==92){
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Lamp_Mode->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Lamp_Setting_Lamp_Mode->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Lamp_Setting_Lamp_Mode->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Lamp_Setting_Lamp_Mode->setCurrentIndex(3);
            return P;
        }

    }

    if(temp.getInt_command()==109){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Lamp_Setting_Lamp_Reminder->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Lamp_Reminder->setCurrentIndex(1);
            return P;
        }
    }

    //Filter Settings
    if(temp.getInt_command()==320){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Lamp_Setting_Filter_Optional_Filter_Installed->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Filter_Optional_Filter_Installed->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==322){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Lamp_Setting_Filter_Filter_Reminder->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Filter_Filter_Reminder->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Lamp_Setting_Filter_Filter_Reminder->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Lamp_Setting_Filter_Filter_Reminder->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Lamp_Setting_Filter_Filter_Reminder->setCurrentIndex(4);
            return P;
        }
    }

    if(temp.getInt_command()==322){
        if(temp.getInt_variable()==0){
            emit on_pushButton_Setup_Lamp_Setting_Filter_reset_clicked();
            return P;
        }
    }
    //Lens Settings
    if(temp.getInt_command()==349){
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Lens_Function->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Lamp_Setting_Lens_Function->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==84){
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Lamp_Setting_Lens_Shift->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Lamp_Setting_Lens_Shift->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Setup_Lamp_Setting_Lens_Shift->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Setup_Lamp_Setting_Lens_Shift->setCurrentIndex(3);
            return P;
        }
    }

    if(temp.getInt_command()==525){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Setup_Lamp_Setting_Lens_Lens_Calibration_clicked();
            return P;
        }
    }

    //Type
    //....
    if(temp.getInt_command()==85){
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Lens_Function_2->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Lamp_Setting_Lens_Function_2->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==85){
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Lamp_Setting_Zoom->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Lamp_Setting_Zoom->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==85){
        if(temp.getInt_variable()==5){
            ui->combobox_Setup_Lamp_Setting_Focus->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Setup_Lamp_Setting_Focus->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==84){
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Shift_2->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Lamp_Setting_Shift_2->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==307){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Setup_Lamp_Setting_Lens_Zoom_plus_clicked();
            return P;
        }
        if(temp.getInt_variable()==2){
            emit on_pushButton_Setup_Lamp_Setting_Lens_Zoom_minus_clicked();
            return P;
        }
    }

    if(temp.getInt_command()==308){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Setup_Lamp_Setting_Lens_Focus_plus_clicked();
            return P;
        }
        if(temp.getInt_variable()==2){
            emit on_pushButton_Setup_Lamp_Setting_Lens_Focus_minus_clicked();
            return P;
        }
    }

    if(temp.getInt_command()==325){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Lamp_Setting_Lens_Shutter->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Lamp_Setting_Lens_Shutter->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==359){
        if(temp.check_include_interval(1,10)){
            ui->horizontalSlider_Setup_Lamp_Setting_Lens__Memory_Apply_Position->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==360){
        if(temp.check_include_interval(1,10)){
            ui->horizontalSlider_Setup_Lamp_Setting_Lens__Memory_Save_Current_Position->setValue(temp.getInt_variable());
            return P;
        }
    }

    //Anamorphic Lens
    //...

    //Power Settings
    if(temp.getInt_command()==105){

        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_Direct_Power_On->setCurrentIndex(0);
            INFO.clear();
            if(ui->checkBox_wait_on->isChecked()==1){
                INFO.append("INFO2");
                otpravka(INFO);
                INFO.clear();
                if(ui->checkBox_how_answer_off->isChecked()==1){
                    check_auto_send();
                    otpravka(P);
                }
                if(ui->checkBox_how_answer_off->isChecked()==0){
                    check_auto_send();
                    otpravka(F);
                }
                return ret;
            }

            if(ui->checkBox_wait_on->isChecked()==0)  {
                 if(ui->checkBox_how_answer_off->isChecked()==1){
                     otpravka(P);
                     INFO.append("INFO2");
                     otpravka(INFO);
                     INFO.clear();
                     check_auto_send();
                 }
                if(ui->checkBox_how_answer_off->isChecked()==0){
                    otpravka(F);
                    INFO.append("INFO2");
                    otpravka(INFO);
                    INFO.clear();
                }
                return ret;
            }
        }


        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_Direct_Power_On->setCurrentIndex(1);
            INFO.clear();
            if(ui->checkBox_wait_on->isChecked()==1){
                INFO.append("INFO1");
                otpravka(INFO);
                INFO.clear();
                INFO.append("INFO0");
                otpravka(INFO);
                INFO.clear();
                if(ui->checkBox_how_answer_on->isChecked()==1){
                    check_auto_send();
                    otpravka(P);
                    return ret;
                }
                if(ui->checkBox_how_answer_on==0){
                    otpravka(F);
                    return ret;
                }
            }

            if(ui->checkBox_wait_on->isChecked()==0)  {
                if(ui->checkBox_how_answer_on->isChecked()==1){
                    otpravka(P);
                    INFO.clear();
                    INFO.append("INFO0");
                    otpravka(INFO);
                    INFO.clear();
                    INFO.append("INFO1");
                    otpravka(INFO);
                    check_auto_send();
                    return ret;
                }
                if(ui->checkBox_how_answer_on->isChecked()==0){
                    otpravka(F);
                    INFO.clear();
                    INFO.append("INFO0");
                    otpravka(INFO);
                    INFO.clear();
                    INFO.append("INFO1");
                    otpravka(INFO);
                    INFO.clear();

                    return ret;
                }

            }
        }
    }

    if(temp.getInt_command()==113){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_Signal_Power_On->setCurrentIndex(0);
            INFO.clear();
            if(ui->checkBox_wait_on->isChecked()==1){
                INFO.append("INFO2");
                otpravka(INFO);
                INFO.clear();
                if(ui->checkBox_how_answer_off->isChecked()==1){
                    check_auto_send();
                    otpravka(P);
                }
                if(ui->checkBox_how_answer_off->isChecked()==0){
                    check_auto_send();
                    otpravka(F);
                }
                return ret;
            }

            if(ui->checkBox_wait_on->isChecked()==0)  {
                 if(ui->checkBox_how_answer_off->isChecked()==1){
                     otpravka(P);
                     INFO.append("INFO2");
                     otpravka(INFO);
                     INFO.clear();
                     check_auto_send();
                 }
                if(ui->checkBox_how_answer_off->isChecked()==0){
                    otpravka(F);
                    INFO.append("INFO2");
                    otpravka(INFO);
                    INFO.clear();
                }
                return ret;
            }
        }

        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_Signal_Power_On->setCurrentIndex(1);
            INFO.clear();
            if(ui->checkBox_wait_on->isChecked()==1){
                INFO.append("INFO1");
                otpravka(INFO);
                INFO.clear();
                INFO.append("INFO0");
                otpravka(INFO);
                INFO.clear();
                if(ui->checkBox_how_answer_on->isChecked()==1){
                    check_auto_send();
                    otpravka(P);
                    return ret;
                }
                if(ui->checkBox_how_answer_on==0){
                    otpravka(F);
                    return ret;
                }
            }


            if(ui->checkBox_wait_on->isChecked()==0)  {
                if(ui->checkBox_how_answer_on->isChecked()==1){
                    otpravka(P);
                    INFO.clear();
                    INFO.append("INFO0");
                    otpravka(INFO);
                    INFO.clear();
                    INFO.append("INFO1");
                    otpravka(INFO);
                    check_auto_send();
                    return ret;
                }
                if(ui->checkBox_how_answer_on->isChecked()==0){
                    otpravka(F);
                    INFO.clear();
                    INFO.append("INFO0");
                    otpravka(INFO);
                    INFO.clear();
                    INFO.append("INFO1");
                    otpravka(INFO);
                    INFO.clear();

                    return ret;
                }

            }
        }
    }

    if(temp.getInt_command()==106){
        if(temp.check_include_interval(0,180)){
            ui->horizontalSlider_Setup_Power_Setting_Auto_Power_Off->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==107){
        if(temp.check_include_interval(0,990)){
            ui->horizontalSlider_Setup_Power_Setting_Sleep_Timer->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==507){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_Always_On->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_Always_On->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==115){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_Quick_Resume->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_Quick_Resume->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==114){
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_Power_Mode->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_Power_Mode->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==520){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_USB_Power->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_USB_Power->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Power_Setting_USB_Power->setCurrentIndex(2);
            return P;
        }
    }

    if(temp.getInt_command()==521){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Setting_Wireless->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Setting_Wireless->setCurrentIndex(1);
            return P;
        }
    }

    //Security
    if(temp.getInt_command()==78){
        if(temp.getInt_variable() == 0 && temp.getInt_password() >=0 && temp.getInt_password() <= 9999){
            ui->combobox_Setup_Security->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable() == 1 && temp.getInt_password() >=0 && temp.getInt_password() <= 9999){
            ui->combobox_Setup_Security->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==527){
        if(temp.check_include_interval(0,9999)){
            if(ui->combobox_Setup_Security->currentIndex() == 1 ){
                ui->combobox_Setup_Security->setCurrentIndex(0);
                return P;
            }

            if(ui->combobox_Setup_Security->currentIndex() == 0 ){
                ui->combobox_Setup_Security->setCurrentIndex(1);
                return P;
            }
        }
    }

    if(temp.getInt_command()==537){
        if(temp.check_include_interval(0,12)){
            ui->horizontalSlider_Setup_Security_Timer_Month->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==538){
        if(temp.check_include_interval(0,30)){
            ui->horizontalSlider_Setup_Security_Timer_Day->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==539){
        if(temp.check_include_interval(0,24)){
            ui->horizontalSlider_Setup_Security_Timer_Hour->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==77){
        QByteArray mdh = temp.getDate();
        int M,D,H;
        M = D = H = 0;
        M = mdh.left(4).right(1).toInt()*10 +mdh.left(6).right(1).toInt();
        D = mdh.left(8).right(1).toInt()*10 +mdh.left(10).right(1).toInt();
        H = mdh.left(12).right(1).toInt()*10 +mdh.left(14).right(1).toInt();
        ui->horizontalSlider_Setup_Security_Timer_Month->setValue(M);
        ui->horizontalSlider_Setup_Security_Timer_Day->setValue(D);
        ui->horizontalSlider_Setup_Security_Timer_Hour->setValue(H);
        return P;
    }
    //HDMI Link Settings
    if(temp.getInt_command()==511){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_HDMI_Link->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_HDMI_Link->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==512){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Inclusive_of_TV->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Inclusive_of_TV->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==513){
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_On_Link->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Power_On_Link->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Power_On_Link->setCurrentIndex(2);
            return P;
        }
    }

    if(temp.getInt_command()==514){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Power_Off_Link->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Power_Off_Link->setCurrentIndex(1);
            return P;
        }
    }

    //Test Pattern
    if(temp.getInt_command()==195){
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(6);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==8){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(8);
            return P;
        }
        if(temp.getInt_variable()==9){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(9);
            return P;
        }
        if(temp.getInt_variable()==10){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(10);
            return P;
        }
        if(temp.getInt_variable()==11){
            ui->combobox_Setup_Test_Pattern->setCurrentIndex(11);
            return P;
        }
    }

    //Remote Settings
    if(temp.getInt_command()==11){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(6);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==8){
            ui->combobox_Setup_Remote_Setting_IR_Function->setCurrentIndex(8);
            return P;
        }
    }

    if(temp.getInt_command()==48){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Setup_Remote_Setting_Remote_code_minus_clicked();
            return P;
        }
        if(temp.getInt_variable()==2){
            emit on_pushButton_Setup_Remote_Setting_Remote_code_plus_clicked();
            return P;
        }
    }

    if(temp.getInt_command()==350){
        if(temp.check_include_interval(0,99)){
            ui->horizontalSlider_Setup_Remote_Setting_Remote_code->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==117){
        if(temp.check_include_interval(1,20)){
            ui->horizontalSlider_Setup_Remote_Setting_Remote_user1->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==118){
        if(temp.check_include_interval(1,20)){
            ui->horizontalSlider_Setup_Remote_Setting_Remote_user2->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==119){
        if(temp.check_include_interval(1,20)){
            ui->horizontalSlider_Setup_Remote_Setting_Remote_user3->setValue(temp.getInt_variable());
            return P;
        }
    }

    //projector ID
    if(temp.getInt_command()==79){
        if(temp.check_include_interval(0,99)){
            ui->horizontalSlider_Setup_Projector_ID->setValue(temp.getInt_variable());
            return P;
        }
    }

    //12V
    if(temp.getInt_command()==192){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_12V_Trigger->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_12V_Trigger->setCurrentIndex(1);
            return P;
        }
    }

    //12V_B
    if(temp.getInt_command()==193){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_12V_Trigger_B->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_12V_Trigger_B->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_12V_Trigger_B->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_12V_Trigger_B->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_12V_Trigger_B->setCurrentIndex(4);
            return P;
        }
    }

    if(temp.getInt_command()==205){
        if(temp.getInt_variable()==0){
            ui->combobox_Setup_12V_Trigger_B_4_3->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Setup_12V_Trigger_B_4_3->setCurrentIndex(1);
            return P;
        }


    }

    if(temp.getInt_command()==205){
        if(temp.getInt_variable()==2){
            ui->combobox_Setup_12V_Trigger_B_16_9->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Setup_12V_Trigger_B_16_9->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==205){
        if(temp.getInt_variable()==4){
            ui->combobox_Setup_12V_Trigger_LTB->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Setup_12V_Trigger_LTB->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==205){
        if(temp.getInt_variable()==6){
            ui->combobox_Setup_12V_Trigger_Native->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->combobox_Setup_12V_Trigger_Native->setCurrentIndex(1);
            return P;
        }
    }

    //HDBaseT_Control_RS232
    if(temp.getInt_command()==98){
        if(temp.getInt_variable()==0){
            ui->combobox_HDBaseT_Control_Enternet->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_HDBaseT_Control_Enternet->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==97){
        if(temp.getInt_variable()==0){
            ui->combobox_HDBaseT_Control_RS232->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_HDBaseT_Control_RS232->setCurrentIndex(1);
            return P;
        }
    }

    //options
    if(temp.getInt_command()==70){
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Language->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_Language->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Language->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Options_Language->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Options_Language->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Options_Language->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->combobox_Options_Language->setCurrentIndex(6);
            return P;
        }
        if(temp.getInt_variable()==8){
            ui->combobox_Options_Language->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==9){
            ui->combobox_Options_Language->setCurrentIndex(8);
            return P;
        }
        if(temp.getInt_variable()==10){
            ui->combobox_Options_Language->setCurrentIndex(9);
            return P;
        }
        if(temp.getInt_variable()==11){
            ui->combobox_Options_Language->setCurrentIndex(10);
            return P;
        }
        if(temp.getInt_variable()==12){
            ui->combobox_Options_Language->setCurrentIndex(11);
            return P;
        }
        if(temp.getInt_variable()==13){
            ui->combobox_Options_Language->setCurrentIndex(12);
            return P;
        }
        if(temp.getInt_variable()==14){
            ui->combobox_Options_Language->setCurrentIndex(13);
            return P;
        }
        if(temp.getInt_variable()==15){
            ui->combobox_Options_Language->setCurrentIndex(14);
            return P;
        }
        if(temp.getInt_variable()==16){
            ui->combobox_Options_Language->setCurrentIndex(15);
            return P;
        }
        if(temp.getInt_variable()==17){
            ui->combobox_Options_Language->setCurrentIndex(16);
            return P;
        }
        if(temp.getInt_variable()==18){
            ui->combobox_Options_Language->setCurrentIndex(17);
            return P;
        }
        if(temp.getInt_variable()==19){
            ui->combobox_Options_Language->setCurrentIndex(18);
            return P;
        }

        if(temp.getInt_variable()==20){
            ui->combobox_Options_Language->setCurrentIndex(19);
            return P;
        }
        if(temp.getInt_variable()==21){
            ui->combobox_Options_Language->setCurrentIndex(20);
            return P;
        }
        if(temp.getInt_variable()==22){
            ui->combobox_Options_Language->setCurrentIndex(21);
            return P;
        }
        if(temp.getInt_variable()==23){
            ui->combobox_Options_Language->setCurrentIndex(22);
            return P;
        }
        if(temp.getInt_variable()==24){
            ui->combobox_Options_Language->setCurrentIndex(23);
            return P;
        }
        if(temp.getInt_variable()==25){
            ui->combobox_Options_Language->setCurrentIndex(24);
            return P;
        }
        if(temp.getInt_variable()==26){
            ui->combobox_Options_Language->setCurrentIndex(25);
            return P;
        }
        if(temp.getInt_variable()==27){
            ui->combobox_Options_Language->setCurrentIndex(26);
            return P;
        }
    }

    if(temp.getInt_command()==88){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Closed_Captioning->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Closed_Captioning->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_Closed_Captioning->setCurrentIndex(2);
            return P;
        }
    }

    if(temp.getInt_command()==72){
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Menu_Location->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_Menu_Location->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Menu_Location->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Options_Menu_Location->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Options_Menu_Location->setCurrentIndex(4);
            return P;
        }
    }

    if(temp.getInt_command()==515){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Menu_Timer->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Menu_Timer->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Menu_Timer->setCurrentIndex(2);
            return P;
        }
    }

    if(temp.getInt_command()==526){
        if(temp.check_include_interval(0,9)){
            ui->horizontalSlider_Options_Menu_Transparency->setValue(temp.getInt_variable());
            return P;
        }
    }

    if(temp.getInt_command()==563){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Auto_Sourse->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Auto_Sourse->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==12){
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==15){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==16){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(8);
            return P;

        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(9);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(10);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(12);
            return P;
        }

        if(temp.getInt_variable()==14){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(13);
            return P;
        }
        if(temp.getInt_variable()==9){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(14);
            return P;
        }
        if(temp.getInt_variable()==10){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(15);
            return P;
        }
        if(temp.getInt_variable()==20){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(16);
            return P;
        }
        if(temp.getInt_variable()==21){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(17);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(18);
            return P;
        }
        if(temp.getInt_variable()==11){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(19);
            return P;
        }
        if(temp.getInt_variable()==17){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(20);
            return P;
        }
        if(temp.getInt_variable()==18){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(21);
            return P;
        }
        if(temp.getInt_variable()==19){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(22);
            return P;
        }
        if(temp.getInt_variable()==23){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(23);
            return P;
        }
        if(temp.getInt_variable()==22){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(24);
            return P;
        }
        if(temp.getInt_variable()==24){
            ui->combobox_Options_Inout_Sourse->setCurrentIndex(25);
            return P;
        }
    }

    //Input Name
    if(temp.getInt_command()==519){
        if(temp.getInt_variable()==1){
            emit on_pushButton_Option_reset_input_name_clicked();
            return P;
        }
    }

    if(temp.getInt_command()==518){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Input_Name->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Input_Name->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_Input_Name->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Input_Name->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Options_Input_Name->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==5){
            ui->combobox_Options_Input_Name->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Options_Input_Name->setCurrentIndex(6);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->combobox_Options_Input_Name->setCurrentIndex(7);
            return P;
        }
        if(temp.getInt_variable()==8){
            ui->combobox_Options_Input_Name->setCurrentIndex(8);
            return P;
        }
        if(temp.getInt_variable()==9){
            ui->combobox_Options_Input_Name->setCurrentIndex(9);
            return P;
        }
        if(temp.getInt_variable()==10){
            ui->combobox_Options_Input_Name->setCurrentIndex(10);
            return P;
        }
        if(temp.getInt_variable()==11){
            ui->combobox_Options_Input_Name->setCurrentIndex(11);
            return P;
        }
        if(temp.getInt_variable()==12){
            ui->combobox_Options_Input_Name->setCurrentIndex(12);
            return P;
        }
        if(temp.getInt_variable()==13){
            ui->combobox_Options_Input_Name->setCurrentIndex(13);
            return P;
        }
        if(temp.getInt_variable()==14){
            ui->combobox_Options_Input_Name->setCurrentIndex(14);
            return P;
        }
        if(temp.getInt_variable()==15){
            ui->combobox_Options_Input_Name->setCurrentIndex(15);
            return P;
        }
        if(temp.getInt_variable()==16){
            ui->combobox_Options_Input_Name->setCurrentIndex(16);
            return P;
        }
        if(temp.getInt_variable()==17){
            ui->combobox_Options_Input_Name->setCurrentIndex(17);
            return P;
        }
        if(temp.getInt_variable()==18){
            ui->combobox_Options_Input_Name->setCurrentIndex(18);
            return P;
        }
        if(temp.getInt_variable()==19){
            ui->combobox_Options_Input_Name->setCurrentIndex(19);
            return P;
        }
        if(temp.getInt_variable()==20){
            ui->combobox_Options_Input_Name->setCurrentIndex(20);
            return P;
        }
        if(temp.getInt_variable()==21){
            ui->combobox_Options_Input_Name->setCurrentIndex(21);
            return P;
        }
        if(temp.getInt_variable()==22){
            ui->combobox_Options_Input_Name->setCurrentIndex(22);
            return P;
        }

    }
    //
    if(temp.getInt_command()==309){
        if(temp.getInt_variable()==1){
            ui->combobox_Options_VGA_Out->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_VGA_Out->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_VGA_Out->setCurrentIndex(2);
            return P;
        }
    }

    if(temp.getInt_command()==101){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_High_Altitude->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_High_Altitude->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==348){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Display_Mode_Lock->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Display_Mode_Lock->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==103){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Keypad_Lock->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Keypad_Lock->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==102){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Information_Hide->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Information_Hide->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==82){
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Logo->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Logo->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==2){
            ui->combobox_Options_Logo->setCurrentIndex(2);
            return P;
        }
    }

    if(temp.getInt_command()==503){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Beep->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Beep->setCurrentIndex(1);
            return P;
        }
    }

    if(temp.getInt_command()==104){
        if(temp.getInt_variable()==0){
            ui->combobox_Options_Background_Color->setCurrentIndex(0);
            return P;
        }
        if(temp.getInt_variable()==1){
            ui->combobox_Options_Background_Color->setCurrentIndex(1);
            return P;
        }
        if(temp.getInt_variable()==3){
            ui->combobox_Options_Background_Color->setCurrentIndex(2);
            return P;
        }
        if(temp.getInt_variable()==4){
            ui->combobox_Options_Background_Color->setCurrentIndex(3);
            return P;
        }
        if(temp.getInt_variable()==6){
            ui->combobox_Options_Background_Color->setCurrentIndex(4);
            return P;
        }
        if(temp.getInt_variable()==7){
            ui->combobox_Options_Background_Color->setCurrentIndex(5);
            return P;
        }
    }

    //reset
    if(temp.getInt_command()==546){
        if(temp.getInt_variable()==1){
            emit on_pushButton_reset_OSD_clicked();
            return P;
        }
    }

    if(temp.getInt_command()==112){
        //temp.print_parameter_inf();
        if(temp.getInt_variable()==1 && temp.getInt_password() == -1){
            emit on_pushButton_reset_to_Default_clicked();
            return P;
        }

        if(temp.getInt_variable()==1 && temp.getInt_password()>=0 && temp.getInt_password()<=9999){
            emit on_pushButton_reset_to_Default_password_clicked();
            return P;
        }
    }

    //------------------------------END Display page

    /// Просто вношу изменения
    ///

    if(temp.getInt_command()==140){
        //temp.print_parameter_inf();
        if(temp.getInt_variable()==1)
        {
            ui->Power->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==2)
        {
            ui->PowerOff->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==3)
        {
            ui->pushButton_mouse_up->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==4)
        {
            ui->pushButton_mouse_left->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==5)
        {
            ui->pushButton_mouse_enter->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==6)
        {
            ui->pushButton_right->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==7)
        {
            ui->pushButton_down->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==8)
        {
            ui->pushButton_left_click->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==9)
        {
            ui->pushButton_right_click->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==10)
        {
            ui->pushButton_up->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==11)
        {
            ui->pushButton_left->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==12)
        {
            ui->pushButton_enter->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==13)
        {
            ui->pushButton_right_2->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==14)
        {
            ui->pushButton_down_2->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==15)
        {
            ui->pushButton_plus->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==16)
        {
            ui->pushButton_minus->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==17)
        {
            ui->pushButton_minus_Volume->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==18)
        {
            ui->pushButton_plus_Volume->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==19)
        {
            ui->pushButton_Brightness->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==20)
        {
            ui->pushButton_menu->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==21)
        {
            ui->pushButton_zoom->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==22)
        {
            ui->pushButton_DVI_D->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==23)
        {
            ui->pushButton_VGA_1->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==24)
        {
            ui->pushButton_AV_mute->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==25)
        {
            ui->pushButton_S_Video->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==26)
        {
            ui->pushButton_VGA_2->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==27)
        {
            ui->pushButton_Video->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==28)
        {
            ui->pushButton_Contrast->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==30)
        {
            ui->pushButton_Freeze->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==31)
        {
            ui->pushButton_Lens_shift->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==32)
        {
            ui->pushButton_Zoom_plus->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==33)
        {
            ui->pushButton_Zoom_minus->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==34)
        {
            ui->pushButton_plus_focus->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==35)
        {
            ui->pushButton_minus_focus->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==36)
        {
            ui->pushButton_mode->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==37)
        {
            ui->pushButton__Aspect_Ration->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==38)
        {
            ui->pushButton_12V_trigger_On->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==39)
        {
            ui->pushButton_12V_trigger_Off->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==40)
        {
            ui->pushButton_info->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==41)
        {
            ui->pushButton_Re_sync->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==42)
        {
            ui->pushButton_HDIM_1->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==43)
        {
            ui->pushButton_HDIM_2->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==44)
        {
            ui->pushButton_BNC->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==45)
        {
            ui->pushButton_Component->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==47)
        {
            ui->pushButton_Source->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==51)
        {
            ui->pushButton_one->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==52)
        {
            ui->pushButton_two->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==53)
        {
            ui->pushButton_three->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==54)
        {
            ui->pushButton_foure->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==55)
        {
            ui->pushButton_five->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==56)
        {
            ui->pushButton_six->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==57)
        {
            ui->pushButton_seven->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==58)
        {
            ui->pushButton_eight->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==59)
        {
            ui->pushButton_nine->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==60)
        {
            ui->pushButton_zero->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==61)
        {
            ui->pushButton_Gamma->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==63)
        {
            ui->pushButton_PIP->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==64)
        {
            ui->pushButton_left_H->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==65)
        {
            ui->pushButton_right_H->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==66)
        {
            ui->pushButton_left_V->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==67)
        {
            ui->pushButton_right_V->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==68)
        {
            ui->pushButton_H_Keystone_plus->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==69)
        {
            ui->pushButton_H_Keystone_minus->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==70)
        {
            ui->pushButton_hot_key->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==71)
        {
            ui->pushButton_hot_key_2->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==72)
        {
            ui->pushButton_hot_key_3->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==73)
        {
            ui->pushButton_Pattern->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==74)
        {
            ui->pushButton_exit->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==75)
        {
            ui->pushButton_HDIM_3->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==76)
        {
            ui->pushButton_Display_Port->setStyleSheet(unusual);
            return P;

        }

        if(temp.getInt_variable()==77)
        {
            ui->pushButton_Mute->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==78)
        {
            ui->pushButton_3D->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==79)
        {
            ui->pushButton_DB->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==80)
        {
            ui->pushButton_Sleep_timer->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==81)
        {
            ui->pushButton_Home->setStyleSheet(unusual);
            return P;

        }
        if(temp.getInt_variable()==82)
        {
            ui->pushButton_Return->setStyleSheet(unusual);
            return P;

        }
    }

    //INFO
    //[Open Info Menu] [Close Info Menu]
    //write
    if(temp.getInt_command()==313){
        if(temp.getInt_variable()==1){
            qDebug()<<"[Open Info Menu]";
            ui->tabWidget->setCurrentIndex(5);
            return P;
        }
        if(temp.getInt_variable()==0){
            qDebug()<<"[Close Info Menu]";
            ui->tabWidget->setCurrentIndex(0);
            return P;
        }
    }

    //Regulatory
    //Serial Number
    //read
    if(temp.getInt_command()==353){
        if(temp.getInt_variable()==1){
            Ok.append(ui->lineEdit_info_serial_number->text());
            return Ok;
        }
    }
    //Current Input Source
    //read
    if(temp.getInt_command()==121){
        if(temp.getInt_variable()==1){
            Check.append(ui->combobox_Options_Inout_Sourse->currentText());
            return Check;
        }
    }
    //Resolution
    //read
    if(temp.getInt_command()==150){
        if(temp.getInt_variable()==4){
            Ok.append(ui->lineEdit_info_Resolution->text());  
            return Ok;
        }
    }
    //Refresh Rate
    //read
    if(temp.getInt_command()==150){
        if(temp.getInt_variable()==19){
            Ok.append(ui->lineEdit_info_Refresh_Rate->text());
            return Ok;
        }
    }

    //Network status
    if(temp.getInt_command()==87){
        if(temp.getInt_variable()==1){
            if(ui->combobox_info_Network_status->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_info_Network_status->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }
    }

    //IP Address
    if(temp.getInt_command()==150){
        if(temp.getInt_variable()==19){
            // Ok.append(/*nnn_nnn_nnn_nnn*/);
            return Ok;
        }
    }

    //Display
    if(temp.getInt_command()==123){
        if(temp.getInt_variable()==1){
            Check.append(ui->comboBox_Image_Setting_Display_Mode->currentText());
            return Check;
        }
    }
    //Power Mode
    if(temp.getInt_command()==150){
        if(temp.getInt_variable()==16){
            if(ui->combobox_info_Power_Mode->currentIndex()==0){
                Ok.append("0");
                return Ok;
            }
            if(ui->combobox_info_Power_Mode->currentIndex()==1){
                Ok.append("1");
                return Ok;
            }
        }
    }

    //Filter Usage Hours
    if(temp.getInt_command()==321){
        if(temp.getInt_variable()==1){
            return Ok;
        }
    }

    //Lamp Hours
    if(temp.getInt_command()==108){
        if(temp.getInt_variable()==1){
            Ok.append(ui->lineEdit_info_total->text());
            return Ok;
        }
    }

    if(temp.getInt_command()==108){
        if(temp.getInt_variable()==2){
            Ok.append(ui->lineEdit_info_lamp_2_hour->text());
            return Ok;
        }
    }
    //---------------------------
    return F;



    //Model Name
    if(temp.getInt_command()==151){
        if(temp.getInt_variable()==1)
        {
            if(ui->Optoma_box->currentIndex()==0)
                return Ok.append("1");
            if(ui->Optoma_box->currentIndex()==1)
                return Ok.append("2");
            if(ui->Optoma_box->currentIndex()==2)
                return Ok.append("3");
            if(ui->Optoma_box->currentIndex()==3)
                return Ok.append("4");
            if(ui->Optoma_box->currentIndex()==4)
                return Ok.append("5");
            if(ui->Optoma_box->currentIndex()==5)
                return Ok.append("6");

        }

    }

    //RS232 Version No
    if(temp.getInt_command()==152){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->lineEdit_RS232->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }
    // Software Version
    if(temp.getInt_command()==122){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->edit_software_version->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }

    //LAN FW version
    if(temp.getInt_command()==357){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->edit_lan_fw_frame->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }


    //Fan Speed1
    if(temp.getInt_command()==351){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->laaabel_2_fan_1->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }

    //Fan Speed2
    if(temp.getInt_command()==351){
        if(temp.getInt_variable()==2)
        {
            QString str;
            str=ui->laaabel_2_fan_2->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }


    //Fan Speed3
    if(temp.getInt_command()==351){
        if(temp.getInt_variable()==3)
        {
            QString str;
            str=ui->laaabel_2_fan_3->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }

    //Fan Speed4
    if(temp.getInt_command()==351){
        if(temp.getInt_variable()==4)
        {
            QString str;
            str=ui->laaabel_2_fan_4->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }

    // System Temperature
    if(temp.getInt_command()==352){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->lineEdit_RS232_2->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }

    // Current Wat
    if(temp.getInt_command()==358){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->lineEdit_current_wat->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
    }

    // Info String
    if(temp.getInt_command()==150){
        if(temp.getInt_variable()==1)
        {
            QString str;
            str=ui->lineEdit_Info_string->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }

        if(temp.getInt_variable()==2)
        {
            QString str;
            str=ui->lineEdit_native_resolution->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==3)
        {
            QString str;
            str=ui->lineEdit_main_source->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==4)
        {
            QString str;
            str=ui->lineEdit_Resolution->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==5)
        {
            QString str;
            str=ui->lineEdit_Signal_Format->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==6)
        {
            QString str;
            str=ui->lineEdit_Pixel_Clock->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==7)
        {
            QString str;
            str=ui->lineEdit_Horz_Refresh->text();
            return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==8)
        {
            QString str;
         str=ui->lineEdit_Vert_Refresh->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==9)
        {
            QString str;
         str=ui->lineEdit_main_source_4->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==10)
        {
            QString str;
         str=ui->lineEdit_Resolution_2->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==11)
        {
            QString str;
         str=ui->lineEdit_signal_format->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==12)
        {
            QString str;
         str=ui->lineEdit_Pixel_Clock_2->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==13)
        {
            QString str;
         str=ui->lineEdit_horz_refresh->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==14)
        {
            QString str;
         str=ui->lineEdit_vert_refresh->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==15)
        {
            QString str;
         str=ui->lineEdit_light_source->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==16)
        {
            //QString str;
         //str=ui->lineEdit_main_source->text();

            if(ui->standby_power_mode_box->currentIndex()==0)
         {

             return Ok.append("1");
         }

         if(ui->standby_power_mode_box->currentIndex()==1)
         {

             return Ok.append("2");
         }

               //return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==17)
        {


         if(ui->box_DHCP->currentIndex()==0)
               return Ok.append("0");   //??????????????????????????????????

         if(ui->box_DHCP->currentIndex()==1)
               return Ok.append("1");   //??????????????????????????????????


        }
        if(temp.getInt_variable()==18)
        {
            QString str;
         str=ui->lineEdit_main_source_2->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }
        if(temp.getInt_variable()==19)
        {
            QString str;
         str=ui->lineEdit_main_source_3->text();
               return Ok.append(str.toLatin1());   //??????????????????????????????????

        }


        if(temp.getInt_variable()==20)
        {
//            QString str;
//         str=ui->lineEdit_main_source_3->text();
         if(ui->Optoma_box_4->currentIndex()==0)
               return Ok.append("1");   //??????????????????????????????????
         if(ui->Optoma_box_4->currentIndex()==0)
               return Ok.append("2");
         if(ui->Optoma_box_4->currentIndex()==0)
               return Ok.append("3");
        }

    }

    // Native Resolution


}

void MainWindow::check_auto_send()
{
    QByteArray INFO;

    if(ui->checkBox_pushButton_systeam_auto->isChecked()==1){
        INFO.append("INFO0");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_2->isChecked()==1){
        INFO.append("INFO1");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_3->isChecked()==1){
        INFO.append("INFO2");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_4->isChecked()==1){
        INFO.append("INFO3");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_5->isChecked()==1){
        INFO.append("INFO4");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_6->isChecked()==1){
        INFO.append("INFO5");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_7->isChecked()==1){
        INFO.append("INFO6");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_8->isChecked()==1){
        INFO.append("INFO7");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_9->isChecked()==1){
        INFO.append("INFO8");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_10->isChecked()==1){
        INFO.append("INFO9");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_11->isChecked()==1){
        INFO.append("INFO10");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_12->isChecked()==1){
        INFO.append("INFO11");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_13->isChecked()==1){
        INFO.append("INFO12");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_14->isChecked()==1){
        INFO.append("INFO13");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_15->isChecked()==1){
        INFO.append("INFO14");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_16->isChecked()==1){
        INFO.append("INFO15");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_17->isChecked()==1){
        INFO.append("INFO16");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_18->isChecked()==1){
        INFO.append("INFO17");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_19->isChecked()==1){
        INFO.append("INFO18");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_20->isChecked()==1){
        INFO.append("INFO19");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_21->isChecked()==1){
        INFO.append("INFO20");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_22->isChecked()==1){
        INFO.append("INFO21");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_23->isChecked()==1){
        INFO.append("INFO22");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_24->isChecked()==1){
        INFO.append("INFO23");
        otpravka(INFO);
        INFO.clear();
    }
    if(ui->checkBox_pushButton_systeam_auto_25->isChecked()==1){
        INFO.append("INFO24");
        otpravka(INFO);
        INFO.clear();
    }

}

void MainWindow::razbor(parameter a)
{
    a.print_parameter_inf();
    QByteArray tmp;
    tmp = razbor_com(a);
    if(tmp.data()!="ret"){
        otpravka(tmp);
    }

}

void MainWindow::check()
{
    if(ui->actioncom_port->isChecked())
    {
        ui->actionEhternet->setChecked(false);
        return;
    }
}

void MainWindow::check2()
{
    if(ui->actionEhternet->isChecked())
    {
        ui->actioncom_port->setChecked(false);
        return;
    }
}

void MainWindow::setparam(int CMD, int Val, int start=-1, int end=-1, int password=-1, int dat=-1){
    com tmp;
    tmp.CMD = CMD;
    tmp.Val = Val;
    tmp.start = start;
    tmp.end = end;
    tmp.password = password;
    tmp.dat = dat;
    command.append(tmp);
}

void MainWindow::set_all_command(){
    setparam(20,1);
    setparam(20,2);
    setparam(20,3);
    setparam(20,11);
    setparam(20,16);
    setparam(20,12);
    setparam(20,4);
    setparam(20,13);
    setparam(20,5);
    setparam(20,9);
    setparam(20,6);
    setparam(20,14);
    setparam(20,15);
    setparam(20,17);
    setparam(20,18);
    setparam(20,19);
    setparam(20,20);
    setparam(20,21);

    setparam(506,0);
    setparam(506,1);
    setparam(506,7);
    setparam(506,3);
    setparam(506,4);
    setparam(506,5);
    setparam(506,6);

    setparam(46,1);

    setparam(21,-1,-50,50);
    setparam(46,2);

    setparam(47,1);
    setparam(22,-1,-50,50);
    setparam(47,2);
    setparam(23,-1,1,15);
    setparam(45,-1,-50,50);
    setparam(44,-1,-50,50);



    setparam(35,1);
    setparam(183,-1,-5,5);
    setparam(35,2);


    setparam(185,-1,-5,5);

    setparam(35,3);
    setparam(187,-1,-5,5);
    setparam(35,4);
    setparam(189,-1,-5,5);
    setparam(35,5);

    setparam(533,-1,-5,5);
    setparam(35,6);
    setparam(534,-1,-5,5);

    ////////////////////////////////////////////////////////////////2 ///////////////


    setparam(35,12);
    setparam(535,-1,-5,5);
    setparam(35,8);
    setparam(35,9);
    setparam(35,10);
    setparam(35,11);
    setparam(35,12);
    setparam(35,13);
    setparam(35,14);

    setparam(532,1);
    setparam(532,2);
    setparam(532,3);
    setparam(532,4);
    setparam(532,5);
    setparam(532,6);
    setparam(532,7);
    setparam(532,8);
    setparam(536,-1,-5,5);
    setparam(34,-1,1,10);
    setparam(36,4);
    setparam(36,1);
    setparam(36,2);
    setparam(36,3);
    setparam(36,5);
    setparam(36,6);
    setparam(33,1);



    ///////////////////////////////////////////////////
    //setparam(333,-1,-50,50);
    //setparam(327,-1,-50,50);
    //setparam(339,-1,-50,50);
    //setparam(334,-1,-50,50);
    //setparam(328,-1,-50,50);
    //setparam(340,-1,-50,50);
    //setparam(335,-1,-50,50);
    //setparam(329,-1,-50,50);
    //setparam(341,-1,-50,50);
    //setparam(336,-1,-50,50);
    //setparam(330,-1,-50,50);
    //setparam(342,-1,-50,50);

    /////////////////////////////////////////////////////////////////////////////
    //setparam(337,-1,-50,50);
    //setparam(331,-1,-50,50);
    //setparam(343,-1,-50,50);
    //setparam(338,-1,-50,50);
    //setparam(332,-1,-50,50);
    //setparam(344,-1,-50,50);
    //setparam(345,-1,-50,50);
    //setparam(346,-1,-50,50);
    //setparam(347,-1,-50,50);   //????????
    //setparam(215,1);
    //setparam(211,1);
    //setparam(211,7);
    //setparam(211,6);
    //setparam(211,2);
    //setparam(211,3);
    //setparam(211,4);
    //setparam(211,5);
    //setparam(211,8);
    //setparam(211,9);
    //setparam(211,10);

    //setparam(333,-1,-50,50);
    //setparam(327,-1,-50,50);
    //setparam(339,-1,-50,50);
    //setparam(334,-1,-50,50);
    //setparam(328,-1,-50,50);
    //setparam(340,-1,-50,50);
    //setparam(335,-1,-50,50);
    //setparam(329,-1,-50,50);
    //setparam(341,-1,-50,50);
    //setparam(336,-1,-50,50);
    //setparam(330,-1,-50,50);
    //////////////////////////////////////////////6
    /////
    //setparam(342,-1,-50,50);
    //setparam(336,-1,-50,50);
    //setparam(331,-1,-50,50);
    //setparam(343,-1,-50,50);
    //setparam(338,-1,-50,50);
    //setparam(332,-1,-50,50);
    //setparam(344,-1,-50,50);
    //setparam(345,-1,-50,50);
    //setparam(346,-1,-50,50);
    //setparam(347,-1,-50,50);

    //setparam(215,1);
    //setparam(212,1);
    //setparam(212,2);
    //setparam(212,3);
    //setparam(212,4);
    //setparam(212,5);
    //setparam(212,6);
    //setparam(212,7);
    //setparam(213,-1,-50,50);
    //setparam(214,-1,-50,50);
    //setparam(217,-1,-50,50);


    setparam(410,0);
    setparam(410,1);
    setparam(411,0);
    setparam(411,1);
    setparam(412,-1,-50,50);
    setparam(413,-1,-50,50);
    setparam(415,-1,-50,50);
    setparam(414,-1,-50,50);
    setparam(416,-1,-50,50);
    setparam(417,-1,-50,50);
    setparam(418,-1,-50,50);
    //////////////////////////////////////////////////7
    ///

    setparam(419,-1,-50,50);
    setparam(420,-1,-50,50);
    setparam(421,-1,-50,50);
    setparam(422,-1,-50,50);
    setparam(423,-1,-50,50);



    setparam(24,-1,-50,50);
    setparam(25,-1,-50,50);
    setparam(26,-1,-50,50);
    setparam(27,-1,-50,50);
    setparam(28,-1,-50,50);
    setparam(29,-1,-50,50);

    setparam(517,1);
    setparam(37,1);
    setparam(37,2);
    setparam(37,3);
    setparam(37,4);
    setparam(37,6);
    setparam(37,5);


    setparam(200,-1,-50,50);
    setparam(201,-1,-50,50);
    setparam(202,-1,-50,50);
    setparam(203,-1,-50,50);

    setparam(204,1);
    setparam(204,0);
    setparam(91,0);
    setparam(91,1);

    setparam(73,-1,-50,50);
    setparam(74,-1,0,31);
    setparam(75,-1,-50,50);
    setparam(76,-1,-50,50);

    /////////////////////////////////8
    ///
    ///

    setparam(216,-1,1,12);
    setparam(110,1);
    setparam(110,2);
    setparam(110,4);
    setparam(110,3);
    setparam(110,6);
    setparam(110,7);
    setparam(110,5);
    setparam(326,0);
    setparam(326,1);
    setparam(326,2);
    setparam(326,3);
    setparam(326,4);
    setparam(326,5);
    setparam(326,6);
    setparam(326,7);
    setparam(326,8);
    setparam(326,9);
    setparam(326,10);
    setparam(191,0);
    setparam(191,1);
    setparam(191,2);
    setparam(191,3);
    setparam(41,0);
    setparam(41,1);
    setparam(41,2);
    setparam(41,3);
    setparam(41,4);
    setparam(41,5);
    setparam(41,6);
    setparam(431,0);
    setparam(431,1);
    setparam(431,2);
    setparam(431,3);
    setparam(431,4);
    setparam(431,5);
    setparam(431,6);
    setparam(431,7);
    setparam(431,8);
    setparam(431,9);
    setparam(431,10);
    setparam(431,11);
    setparam(431,12);
    setparam(431,13);
    setparam(431,14);
    setparam(431,15);
    setparam(42,0);
    setparam(42,1);
    setparam(42,2);
    setparam(42,3);
    setparam(42,4);
    setparam(42,5);
    setparam(190,0);
    setparam(190,1);
    setparam(190,2);
    setparam(190,3);
    setparam(197,0);
    setparam(197,1);
    setparam(197,2);
    /////////////////////////////////////////////////9
    ///
    setparam(509,1);
    setparam(230,0);
    setparam(230,1);
    setparam(230,3);
    setparam(400,0);
    setparam(400,1);
    setparam(400,2);
    setparam(405,0);
    setparam(405,1);
    setparam(405,2);
    setparam(405,3);
    setparam(405,7);
    setparam(405,8);
    setparam(231,0);
    setparam(231,1);
    setparam(402,0);
    setparam(402,1);
    setparam(402,2);
    setparam(402,3);
    setparam(60,1);
    setparam(60,2);
    setparam(60,3);
    setparam(60,5);
    setparam(60,9);
    setparam(60,6);
    setparam(60,7);
    setparam(60,8);
    setparam(60,11);
    setparam(60,12);
    setparam(61,-1,0,10);
    setparam(62,-1,-5,25);
    setparam(504,-1,0,100);
    setparam(505,-1,0,100);
    setparam(63,-1,-100,100);
    setparam(5,1);
    setparam(6,1);
    setparam(540,2);
    setparam(540,1);
    setparam(541,2);
    ///////////////////////////////////////////10
    ///
    ///
    ///
    ///
    ///

    setparam(64,-1,-100,100);
    setparam(65,-1,-40,40);
    setparam(66,-1,-40,40);
    setparam(541,1);
    setparam(58,1);
    setparam(58,2);
    setparam(59,1);
    setparam(59,2);
    setparam(59,3);
    setparam(59,4);
    setparam(58,3);
    setparam(58,4);
    setparam(59,5);
    setparam(59,6);
    setparam(59,7);
    setparam(59,8);
    setparam(58,5);
    setparam(58,6);
    setparam(59,9);
    setparam(59,10);
    setparam(59,12);
    setparam(59,11);
    setparam(58,7);
    setparam(58,8);
    setparam(59,13);
    setparam(59,14);
    setparam(59,15);
    setparam(59,16);
    setparam(516,1);

    setparam(300,-1,-10,10);
    setparam(301,-1,-10,10);
    //setparam(65,-1,-40,40);
    //setparam(66,-1,-40,40);

    setparam(69,0);
    setparam(69,1);
    setparam(561,1);
    setparam(302,0);
    setparam(302,1);
    setparam(302,2);
    setparam(303,1);

    setparam(303,2);
    setparam(303,3);
    ///////////////////////////////////////////11
    ///

    setparam(303,4);
    setparam(303,5);
    setparam(303,6);
    setparam(303,7);
    setparam(303,8);
    setparam(304,1);
    setparam(304,2);
    setparam(304,3);


    setparam(12,1);
    setparam(12,15);
    //setparam(12,15);
    setparam(12,16);
    setparam(12,2);
    setparam(12,3);
    setparam(12,5);
    //setparam(12,5);
    setparam(12,6);
    setparam(12,14);
    setparam(12,9);
    setparam(12,10);
    setparam(12,20);
    setparam(12,21);
    setparam(12,4);
    setparam(12,11);
    setparam(12,17);
    setparam(12,18);
    setparam(12,19);
    setparam(12,23);
    setparam(12,22);
    setparam(12,24);
    setparam(305,1);
    setparam(305,2);
    setparam(305,3);
    setparam(305,4);
    setparam(305,13);
    setparam(305,5);
    setparam(305,6);
    setparam(305,7);
    setparam(305,8);
    setparam(305,9);
    setparam(305,10);
    setparam(305,11);
    setparam(305,12);
    setparam(305,14);
    setparam(305,15);
    setparam(305,16);
    setparam(305,17);
    setparam(306,1);
    setparam(310,0);
    setparam(310,1);
    setparam(80,0);
    setparam(80,1);
    setparam(562,0);
    setparam(562,1);
    setparam(81,-1,0,10);
    ////////////////////////////////////12
    setparam(93,-1,0,10);
    setparam(89,0);
    setparam(89,1);
    setparam(89,2);
    setparam(89,3);
    setparam(89,4);
    setparam(89,5);
    setparam(89,6);
    setparam(89,7);
    setparam(89,8);
    setparam(89,9);
    setparam(510,0);
    setparam(510,1);
    setparam(94,0);
    setparam(94,1);
    setparam(95,-1,-10,10);
    setparam(96,-1,-10,10);

    setparam(71,1);
    setparam(71,2);
    setparam(71,3);

    setparam(523,1);
    setparam(523,2);
    setparam(523,3);
    setparam(524,4);//setparam(524,4);

    setparam(90,0);
    setparam(90,1);
    setparam(92,1);
    setparam(92,2);
    setparam(92,3);
    setparam(92,4);
    setparam(109,1);
    setparam(109,0);
    setparam(111,1);
    setparam(111,2);
    setparam(116,1);
    setparam(111,3);
    setparam(320,1);
    setparam(320,0);
    setparam(322,0);
    setparam(322,1);
    setparam(322,2);
    setparam(322,3);
    setparam(322,4);
    setparam(323,1);
    setparam(349,1);
    setparam(349,2);
    setparam(84,3);
    setparam(84,4);
    setparam(84,5);
    setparam(84,6);


    setparam(525,1);
    setparam(85,1);
    setparam(85,2);
    setparam(85,3);
    setparam(85,4);
    setparam(85,5);
    /////////////////////////////////////////13

    setparam(85,6);
    setparam(84,1);
    setparam(84,2);
    setparam(307,1);
    setparam(307,2);
    setparam(308,1);
    setparam(308,2);
    setparam(325,1);
    setparam(325,0);
    setparam(359,-1,1,10);
    setparam(360,-1,1,10);
    setparam(105,0);
    setparam(105,1);
    setparam(113,1);
    setparam(113,0);
    setparam(106,-1,0,180);
    setparam(107,-1,0,90);
    setparam(507,1);
    setparam(507,0);
    setparam(115,0);
    setparam(115,1);
    setparam(114,0);
    setparam(114,1);
    setparam(520,0);
    setparam(520,1);
    setparam(520,3);
    setparam(521,0);
    setparam(521,1);
    setparam(78,0,-1,-1,1);
    setparam(78,1,-1,-1,0);
    setparam(527,-1,0,9999);
    setparam(537,-1,0,12);
    setparam(538,-1,0,30);
    setparam(539,-1,0,24);


    setparam(77,-1,-1,-1,-1,1);

    setparam(511,0);
    setparam(511,1);
    setparam(512,0);
    setparam(512,1);
    setparam(513,1);

    ///////////////////////////////////////////14

    setparam(513,2);
    setparam(513,3);
    setparam(514,0);
    setparam(514,1);
    setparam(195,3);
    setparam(195,4);
    setparam(195,1);
    setparam(195,2);
    setparam(195,0);
    setparam(195,5);
    setparam(195,6);
    setparam(195,7);
    setparam(195,8);
    setparam(195,9);
    setparam(195,10);
    setparam(195,11);

    setparam(11,0);
    setparam(11,1);
    setparam(11,2);
    setparam(11,3);
    setparam(11,4);
    setparam(11,5);
    setparam(11,6);
    setparam(11,7);
    setparam(11,8);
    setparam(48,1);
    setparam(350,-1,0,99);
    setparam(48,2);
    setparam(117,-1,1,20);
    setparam(118,-1,1,20);
    setparam(119,-1,1,20);
    setparam(79,0,-1,0,99);
    setparam(192,0);
    setparam(192,1);
    setparam(193,0);
    setparam(193,1);
    setparam(193,2);
    setparam(193,3);
    setparam(193,4);
    setparam(205,0);
    setparam(205,1);
    setparam(205,2);
    setparam(205,3);
    setparam(205,4);
    setparam(205,5);
    setparam(205,6);
    setparam(205,7);


    setparam(98,0);
    setparam(98,1);
    setparam(97,0);
    setparam(97,1);
    setparam(70,1);
    setparam(70,2);
    setparam(70,3);
    setparam(70,4);
    setparam(70,5);
    setparam(70,6);
    setparam(70,7);
    setparam(70,8);
    setparam(70,9);
    setparam(70,10);
    setparam(70,11);
    setparam(70,12);
    setparam(70,13);
    setparam(70,14);
    setparam(70,15);
    setparam(70,16);
    setparam(70,17);
    setparam(70,18);
    setparam(70,19);
    setparam(70,20);
    setparam(70,21);
    setparam(70,22);
    setparam(70,23);
    setparam(70,24);
    setparam(70,25);
    setparam(70,26);
    setparam(70,27);
    setparam(70,28);

    setparam(88,0);
    setparam(88,1);
    setparam(88,2);
    setparam(72,1);
    setparam(72,2);
    setparam(72,3);
    setparam(72,4);
    setparam(72,5);
    setparam(515,0);
    setparam(515,1);
    setparam(515,2);
    setparam(515,3);
    setparam(526,4);
    setparam(526,-1,0,9);
    setparam(563,0);
    setparam(563,1);

    setparam(12,1);
    setparam(12,1);
    setparam(12,1);
    setparam(12,1);
    setparam(12,15);
    setparam(12,15);
    setparam(12,16);
    setparam(12,2);
    setparam(12,3);
    setparam(12,5);
    setparam(12,5);
    setparam(12,6);
    setparam(12,14);
    setparam(12,9);
    setparam(12,10);
    setparam(12,20);
    setparam(12,21);
    setparam(12,4);
    setparam(12,11);
    setparam(12,17);
    setparam(12,18);
    setparam(12,19);
    setparam(12,23);
    setparam(12,22);
    setparam(12,24);
    setparam(519,1);
    setparam(309,1);
    setparam(309,2);
    setparam(309,3);
    setparam(101,0);
    setparam(101,1);
    setparam(348,1);
    setparam(348,0);
    setparam(103,0);
    setparam(103,1);
    setparam(102,0);
    setparam(102,1);
    setparam(82,1);
    setparam(82,3);
    setparam(82,2);
    setparam(83,1);
    setparam(503,0);
    setparam(503,1);
    setparam(104,0);
    setparam(104,1);
    setparam(104,3);
    setparam(104,4);
    setparam(104,6);
    setparam(104,7);
    setparam(546,1);
    setparam(112,1);
    setparam(450,0);
    setparam(450,1);
    setparam(454,0);
    setparam(454,1);
    setparam(455,0);
    setparam(455,1);
    setparam(456,0);
    setparam(456,1);
    setparam(457,0);
    setparam(457,1);
    setparam(458,0);
    setparam(458,1);
    setparam(459,0);
    setparam(459,1);
    /////////////////////////////////////////17
    ///

    setparam(313,1);
    setparam(313,0);
    setparam(0,1);
    setparam(0,0);
    ////////////////////////пароль
    ///
    setparam(1,1);
    setparam(2,1);
    setparam(2,0);
    setparam(3,0);
    setparam(3,1);
    setparam(4,0);
    setparam(4,1);
    ///////////////////////////////////////18
    ///
    setparam(547,1);
    setparam(547,2);
    setparam(553,-1,0,248);
    setparam(554,-1,0,248);
    setparam(549,0);
    setparam(549,1);
    setparam(556,0);
    setparam(556,1);
    setparam(557,1);
    setparam(557,2);
    setparam(100,0);
    setparam(100,1);
    setparam(182,0);
    setparam(206,0);
    setparam(184,1);
    setparam(207,1);
    setparam(186,1);
    setparam(208,1);
    setparam(188,1);
    setparam(209,1);
    setparam(194,0);
    setparam(194,1);
    setparam(196,-1,0,10);
    setparam(199,0);
    setparam(199,1);
    setparam(199,2);
    setparam(199,3);
    ////???????????????????
    ///
    /// ///////////////////////////////////////19
    ///
    ///
    setparam(312,0);
    setparam(312,1);
    setparam(522,-1,0,10);
    setparam(528,-1,0,9999);
    setparam(529,-1,0,9999);
    setparam(548,0);
    setparam(548,1);
    setparam(548,2);
    setparam(550,0);
    setparam(550,1);
    setparam(550,2);
    setparam(551,-1,5,3000);
    setparam(552,1);
    setparam(560,0);
    setparam(560,1);

    setparam(140,1);
    setparam(140,2);
    setparam(140,3);
    setparam(140,4);
    setparam(140,5);
    setparam(140,6);
    setparam(140,7);
    setparam(140,8);
    setparam(140,9);
    setparam(140,10);

    setparam(140,11);
    setparam(140,12);
    setparam(140,13);
    setparam(140,14);
    setparam(140,15);
    setparam(140,16);
    setparam(140,17);
    setparam(140,18);
    setparam(140,19);
    setparam(140,20);

    setparam(140,21);
    setparam(140,22);
    setparam(140,23);
    setparam(140,24);
    setparam(140,25);
    setparam(140,26);
    setparam(140,27);
    setparam(140,28);

    setparam(140,30);
    setparam(140,31);
    setparam(140,32);
    setparam(140,33);
    setparam(140,34);
    setparam(140,35);
    setparam(140,36);
    setparam(140,37);
    setparam(140,38);
    setparam(140,39);
    setparam(140,40);

    setparam(140,41);
    setparam(140,42);
    setparam(140,43);
    setparam(140,44);
    setparam(140,45);
    setparam(140,47);

    setparam(140,51);
    setparam(140,52);
    setparam(140,53);
    setparam(140,54);
    setparam(140,55);
    setparam(140,56);
    setparam(140,57);


    /////////////////////////////////20
    ///

    setparam(140,58);
    setparam(140,59);
    setparam(140,60);

    setparam(140,61);
    setparam(140,63);
    setparam(140,64);
    setparam(140,65);
    setparam(140,66);
    setparam(140,67);
    setparam(140,68);
    setparam(140,69);
    setparam(140,70);

    setparam(140,71);
    setparam(140,72);
    setparam(140,73);
    setparam(140,74);
    setparam(140,75);
    setparam(140,76);
    setparam(140,77);
    setparam(140,78);
    setparam(140,79);
    setparam(140,80);
    setparam(140,81);
    setparam(140,82);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Zoom_minus_clicked(){
    ui->horizontalSlider_Zoom->setValue( ui->horizontalSlider_Zoom->value() - 1);
}

void MainWindow::on_pushButton_Zoom_plus_clicked(){
    ui->horizontalSlider_Zoom->setValue( ui->horizontalSlider_Zoom->value() + 1);
}

void MainWindow::on_pushButton_Image_shift_H_minus_clicked(){
    ui->horizontalSlider_Image_shift_H->setValue( ui->horizontalSlider_Image_shift_H->value() - 1);
}

void MainWindow::on_pushButton_Image_shift_H_plus_clicked(){
    ui->horizontalSlider_Image_shift_H->setValue( ui->horizontalSlider_Image_shift_H->value() + 1);
}

void MainWindow::on_pushButton_Image_shift_V_minus_clicked(){
    ui->horizontalSlider_Image_shift_V->setValue( ui->horizontalSlider_Image_shift_V->value() - 1);
}

void MainWindow::on_pushButton_Image_shift_V_plus_clicked(){
    ui->horizontalSlider_Image_shift_V->setValue( ui->horizontalSlider_Image_shift_V->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_top_left_left_clicked(){
    ui->horizontalSlider_Four_Corners_top_left_H->setValue( ui->horizontalSlider_Four_Corners_top_left_H->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_top_left_up_clicked(){
    ui->horizontalSlider_Four_Corners_top_left_V->setValue( ui->horizontalSlider_Four_Corners_top_left_V->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_top_left_down_clicked(){
    ui->horizontalSlider_Four_Corners_top_left_V->setValue( ui->horizontalSlider_Four_Corners_top_left_V->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_top_left_right_clicked(){
    ui->horizontalSlider_Four_Corners_top_left_H->setValue( ui->horizontalSlider_Four_Corners_top_left_H->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_top_right_left_clicked(){
    ui->horizontalSlider_Four_Corners_top_right_H->setValue( ui->horizontalSlider_Four_Corners_top_right_H->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_top_right_up_clicked(){
    ui->horizontalSlider_Four_Corners_top_right_V->setValue( ui->horizontalSlider_Four_Corners_top_right_V->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_top_right_down_clicked(){
    ui->horizontalSlider_Four_Corners_top_right_V->setValue( ui->horizontalSlider_Four_Corners_top_right_V->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_top_right_right_clicked(){
    ui->horizontalSlider_Four_Corners_top_right_H->setValue( ui->horizontalSlider_Four_Corners_top_right_H->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_left_left_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_left_H->setValue( ui->horizontalSlider_Four_Corners_buttom_left_H->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_left_up_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_left_V->setValue( ui->horizontalSlider_Four_Corners_buttom_left_V->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_left_down_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_left_V->setValue( ui->horizontalSlider_Four_Corners_buttom_left_V->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_left_right_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_left_H->setValue( ui->horizontalSlider_Four_Corners_buttom_left_H->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_right_left_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_right_H->setValue( ui->horizontalSlider_Four_Corners_buttom_right_H->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_right_up_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_right_V->setValue( ui->horizontalSlider_Four_Corners_buttom_right_V->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_right_down_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_right_V->setValue( ui->horizontalSlider_Four_Corners_buttom_right_V->value() - 1);
}

void MainWindow::on_pushButton_Four_Corners_buttom_right_right_clicked(){
    ui->horizontalSlider_Four_Corners_buttom_right_H->setValue( ui->horizontalSlider_Four_Corners_buttom_right_H->value() + 1);
}

void MainWindow::on_pushButton_Four_Corners_Reset_clicked(){
    //top-left
    ui->label_var_Four_Corners_top_left_H->setText("60");
    ui->horizontalSlider_Four_Corners_top_left_H->setValue(60);
    ui->label_var_Four_Corners_top_left_V->setText("40");
    ui->horizontalSlider_Four_Corners_top_left_V->setValue(40);
    //top-right
    ui->label_var_Four_Corners_top_right_H->setText("60");
    ui->horizontalSlider_Four_Corners_top_right_H->setValue(60);
    ui->label_var_Four_Corners_top_right_V->setText("40");
    ui->horizontalSlider_Four_Corners_top_right_V->setValue(40);

    //buttom_left
    ui->label_var_Four_Corners_buttom_left_H->setText("60");
    ui->horizontalSlider_Four_Corners_buttom_left_H->setValue(60);
    ui->label_var_Four_Corners_buttom_left_V->setText("40");
    ui->horizontalSlider_Four_Corners_buttom_left_V->setValue(40);

    //buttom-right
    ui->label_var_Four_Corners_buttom_right_H->setText("60");
    ui->horizontalSlider_Four_Corners_buttom_right_H->setValue(60);
    ui->label_var_Four_Corners_buttom_right_V->setText("40");
    ui->horizontalSlider_Four_Corners_buttom_right_V->setValue(40);
}
void MainWindow::on_pushButton_Geometric_Correction_Reset_clicked()
{
    ui->label_var_Geometric_Correction_H_Arc->setText("0");
    ui->horizontalSlider_Geometric_Correction_H_Arc->setValue(0);
    ui->label_var_Geometric_Correction_V_Arc->setText("0");
    ui->horizontalSlider_Geometric_Correction_V_Arc->setValue(0);
    ui->label_var_Geometric_Correction_H_keystone->setText("0");
    ui->horizontalSlider_Geometric_Correction_H_keystone->setValue(0);
    ui->label_var_Geometric_Correction_V_keystone->setText("0");
    ui->horizontalSlider_Geometric_Correction_V_keystone->setValue(0);
}

void MainWindow::on_pushButton_PIP_PBP_Swap_clicked(){
    //
}

void MainWindow::on_pushButton_Image_Setting_Brightness_minus_clicked(){
    ui->horizontalSlider_Image_Setting_Brightness->setValue( ui->horizontalSlider_Image_Setting_Brightness->value() - 1);
}

void MainWindow::on_pushButton_Image_Setting_Brightness_plus_clicked(){
    ui->horizontalSlider_Image_Setting_Brightness->setValue( ui->horizontalSlider_Image_Setting_Brightness->value() + 1);
}

void MainWindow::on_pushButton_Image_Setting_Contrast_minus_clicked(){
    ui->horizontalSlider_Image_Setting_Contrast->setValue( ui->horizontalSlider_Image_Setting_Contrast->value() - 1);
}

void MainWindow::on_pushButton_Image_Setting_Contrast_plus_clicked(){
    ui->horizontalSlider_Image_Setting_Contrast->setValue( ui->horizontalSlider_Image_Setting_Contrast->value() + 1);
}

void MainWindow::on_pushButton_Image_Setting_Color_Setting_Color_Temperature_reset_clicked(){
    ui->comboBox_Image_Setting_Color_Setting_Color_Temperature->setCurrentIndex(1);
}

void MainWindow::on_pushButton_Image_Setting_Color_Settin_Color_Matching_reset_clicked(){
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_R->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_R->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_R->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_R->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_R->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_R->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_G->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_G->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_G->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_G->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_G->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_G->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_B->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_B->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_B->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_B->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_B->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_B->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_C->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_C->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_C->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_C->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_C->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_C->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_Y->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_Y->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_Y->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_Y->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_Y->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_Y->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Saturation_M->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Saturation_M->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Hue_M->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Hue_M->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Gain_M->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Gain_M->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Red_W->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Red_W->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Green_W->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Green_W->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_Blue_W->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_Blue_W->setValue(0);
}

void MainWindow::on_pushButton_Image_Setting_Color_Setting_CMS_reset_clicked(){
    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_R->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_R->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_R->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_R->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_R->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_R->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_G->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_G->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_G->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_G->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_G->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_G->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_B->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_B->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_B->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_B->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_B->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_B->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_C->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_C->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_C->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_C->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_C->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_C->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_Y->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_Y->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_Y->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_Y->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_Y->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_Y->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_M->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_M->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_M->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_M->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_M->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_M->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_CMS_x_offset_W->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_x_offset_W->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_y_offset_W->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_y_offset_W->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_CMS_Brightness_W->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_CMS_Brightness_W->setValue(0);
}

void MainWindow::on_pushbutton_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_reset_clicked(){
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Gain->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Gain->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Gain->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Gain->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Gain->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Gain->setValue(0);

    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Bias->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Red_Bias->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Bias->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Green_Bias->setValue(0);
    ui->label_var_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Bias->setText("0");
    ui->horizontalSlider_Image_Setting_Color_Setting_Color_Matching_RGB_Gain_Bias_Blue_Bias->setValue(0);
}

void MainWindow::on_pushButton_Image_Setting_Darbee_Setting_reset_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp1_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp2_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lamp_reset_lamp12_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Filter_reset_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lens_Lens_Calibration_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lens_Zoom_plus_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lens_Zoom_minus_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lens_Focus_plus_clicked(){

}

void MainWindow::on_pushButton_Setup_Lamp_Setting_Lens_Focus_minus_clicked(){

}

void MainWindow::on_pushButton_Setup_Security_Change_Password_clicked(){

}

void MainWindow::on_pushButton_Setup_Remote_Setting_Remote_code_minus_clicked(){
    ui->horizontalSlider_Setup_Remote_Setting_Remote_code->setValue( ui->horizontalSlider_Setup_Remote_Setting_Remote_code->value() - 1);
}

void MainWindow::on_pushButton_Setup_Remote_Setting_Remote_code_plus_clicked(){
    ui->horizontalSlider_Setup_Remote_Setting_Remote_code->setValue( ui->horizontalSlider_Setup_Remote_Setting_Remote_code->value() + 1);
}

void MainWindow::on_pushButton_reset_OSD_clicked(){

}

void MainWindow::on_pushButton_reset_to_Default_clicked(){

}

void MainWindow::on_pushButton_reset_to_Default_password_clicked(){

}

void MainWindow::on_pushButton_Option_reset_input_name_clicked(){

}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    index_page = index;
    //qDebug()<<index;
}

void MainWindow::on_pushButton_systeam_auto_clicked(){
    QByteArray INFO;
    INFO.append("INFO0");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_2_clicked()
{
    QByteArray INFO;
    INFO.append("INFO1");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_3_clicked()
{
    QByteArray INFO;
    INFO.append("INFO2");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_4_clicked()
{
    QByteArray INFO;
    INFO.append("INFO3");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_5_clicked()
{
    QByteArray INFO;
    INFO.append("INFO4");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_6_clicked()
{
    QByteArray INFO;
    INFO.append("INFO5");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_7_clicked()
{
    QByteArray INFO;
    INFO.append("INFO6");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_8_clicked()
{
    QByteArray INFO;
    INFO.append("INFO7");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_9_clicked()
{
    QByteArray INFO;
    INFO.append("INFO8");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_10_clicked()
{
    QByteArray INFO;
    INFO.append("INFO9");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_11_clicked()
{
    QByteArray INFO;
    INFO.append("INFO10");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_12_clicked()
{
    QByteArray INFO;
    INFO.append("INFO11");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_13_clicked()
{
    QByteArray INFO;
    INFO.append("INFO12");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_14_clicked()
{
    QByteArray INFO;
    INFO.append("INFO13");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_15_clicked()
{
    QByteArray INFO;
    INFO.append("INFO14");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_16_clicked()
{
    QByteArray INFO;
    INFO.append("INFO15");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_17_clicked()
{
    QByteArray INFO;
    INFO.append("INFO16");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_18_clicked()
{
    QByteArray INFO;
    INFO.append("INFO17");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_19_clicked()
{
    QByteArray INFO;
    INFO.append("INFO18");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_20_clicked()
{
    QByteArray INFO;
    INFO.append("INFO19");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_21_clicked()
{
    QByteArray INFO;
    INFO.append("INFO20");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_22_clicked()
{
    QByteArray INFO;
    INFO.append("INFO21");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_23_clicked()
{
    QByteArray INFO;
    INFO.append("INFO22");
    emit


    s_send_to(INFO);
}

void MainWindow::on_pushButton_systeam_auto_24_clicked()
{
    QByteArray INFO;
    INFO.append("INFO23");
    otpravka(INFO);
}

void MainWindow::on_pushButton_systeam_auto_25_clicked()
{
    QByteArray INFO;
    INFO.append("INFO24");
    otpravka(INFO);
}

void MainWindow::otpravka(QByteArray TO)
{
    if(ui->actioncom_port->isChecked())
    {
     emit   s_send_to(TO);
    }
     if(ui->actionEhternet->isChecked())
      { emit  s_send_to_ethert(TO);
     }
}
