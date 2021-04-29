#include "mainwindow.h"
#include "ui_mainwindow.h"


QList <com> command;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


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


void MainWindow:: razbor_com(parameter temp)
{


if((temp.getInt_command()==450)&&(temp.getInt_variable()==0))
{
    ui->WLAN_box->setCurrentIndex(0);
}

if((temp.getInt_command()==450)&&(temp.getInt_variable()==1))
{
    ui->WLAN_box->setCurrentIndex(1);
}




/// Просто вношу изменения

}
void MainWindow::setparam(int CMD, int Val, int start=-1, int end=-1, int password=-1, int dat=-1)
{
    com tmp;
    tmp.CMD = CMD;
    tmp.Val=Val;
    tmp.start=start;
    tmp.end=end;
    tmp.password=password;
    tmp.dat=dat;
    command.append(tmp);

}

void MainWindow::set_all_command()
{
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


