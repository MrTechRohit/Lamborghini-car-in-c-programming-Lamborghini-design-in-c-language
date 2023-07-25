/*........... WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ..............*/
/*_______________ C++ PROGRAM TO CREATE LAMBORGHINI CAR __________________*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TC//BGI");

    setcolor(WHITE);
    line(20,210,160,180);
    line(160,180,250,170);
    line(250,170,350,170);
    line(350,170,480,210);
    line(480,210,510,213);
    line(510,213,570,230);
    line(570,230,620,260);
    line(620,260,650,285);
    line(650,285,630,300);
    line(630,300,650,315);
    line(650,315,645,317);
    line(645,317,640,318);
    line(640,318,630,320);
    line(630,320,600,322);
    line(600,322,565,322);
    line(565,322,567,310);
    line(567,310,567,300);
    line(567,300,568,292);
    arc(519,300,10,160,50);
    line(473,282,472,290);
    line(472,290,472,303);
    line(472,303,475,322);

    //tier
    circle(520,300,45);
    circle(520,300,35);
    circle(520,300,15);
    circle(520,300,3);

    line(520,299,528,280);
    line(528,280,522,265);
    line(522,265,514,280);
    line(514,280,520,299);

    line(520,300,528,320);
    line(528,320,522,335);
    line(522,335,514,320);
    line(514,320,520,300);

    line(520,300,535,290);
    line(535,290,554,300);
    line(554,300,535,310);
    line(535,310,520,300);

    line(520,300,535,290);
    line(535,290,554,300);
    line(554,300,535,310);
    line(535,310,520,300);

    line(520,300,505,290);
    line(505,290,486,300);
    line(486,300,505,310);
    line(505,310,520,300);

    //body
    line(475,322,440,321);
    line(440,321,180,321);

    line(179,321,181,311);
    line(181,311,182,300);
    line(182,300,181,292);
    arc(133,300,10,160,50);
    line(86,282,85,290);
    line(85,290,85,303);
    line(85,303,86,309);
    line(86,309,87,313);
    line(87,313,88,321);

    //tier
    circle(133,300,45);
    circle(133,300,35);
    circle(133,300,15);
    circle(133,300,3);

    line(133,299,141,280);
    line(141,280,135,265);
    line(135,265,127,280);
    line(127,280,133,299);

    line(134,300,143,320);
    line(143,320,133,335);
    line(133,335,123,320);
    line(123,320,134,300);

    line(132,300,147,290);
    line(147,290,166,300);
    line(166,300,147,310);
    line(147,310,132,300);

    line(100,300,115,290);
    line(115,290,134,300);
    line(134,300,115,310);
    line(115,310,100,300);

    // end tire 2
    line(88,321,40,318);
    line(40,318,20,305);
    line(20,305,20,290);
    line(20,290,14,280);
    line(14,280,25,270);
    line(25,270,35,270);
    line(35,270,36,265);
    line(36,265,35,250);
    line(35,250,37,247);
    line(37,247,20,210);

    //detail 1
    line(20,290,35,300);
    line(35,300,20,301);
    line(35,300,48,300);
    line(48,300,72,295);
    line(72,295,85,307);

    //detail 2
    line(35,270,35,275);
    line(35,275,30,278);
    line(30,278,40,278);
    line(30,278,15,280);
    line(35,275,40,278);
    line(40,278,55,270);
    line(55,270,85,280);

    //detail 3
    line(36,250,47,250);
    line(36,255,44,254);
    line(44,254,50,268);
    line(47,250,44,220);
    line(47,250,55,268);
    line(44,220,25,210);
    line(44,220,100,240);

    //detail 4
    line(50,220,120,210);
    line(60,210,80,205);
    line(80,205,155,205);
    line(180,178,145,200);

    //window and mirror
    line(475,217,460,223);
    line(460,223,425,235);

    //mirror
    line(425,235,435,210);
    line(435,210,430,205);
    line(430,205,420,200);
    line(420,200,400,201);
    line(400,201,402,215);
    line(402,215,415,223);
    line(415,223,423,220);
    line(423,220,415,235);
    line(415,235,418,236);
    line(418,236,420,235);

    line(415,236,167,215);
    line(160,220,180,200);
    line(180,200,230,180);
    line(230,180,270,175);
    line(270,175,350,175);
    line(350,175,480,212);
    line(205,217,200,210);
    line(200,210,180,210);
    line(200,210,220,190);
    line(220,190,260,180);
    line(260,180,270,223);
    line(260,180,350,179);
    line(350,179,475,217);

    //door
    line(430,235,465,260);
    arc(560,295,160,183,100);
    line(465,300,280,290);
    line(280,290,250,280);
    line(250,280,225,250);

    line(225,250,235,250);
    line(235,250,255,275);
    line(255,275,275,288);
    line(225,250,278,232);
    line(235,250,239,245);

    line(270,245,280,250);
    line(280,250,305,275);
    line(305,275,304,285);

    //hand door
    line(290,240,325,243);
    line(325,243,322,248);
    line(322,248,318,250);
    line(318,250,290,246);
    line(290,246,290,240);

    //door
    line(380,296,460,303);
    line(460,303,445,320);
    line(465,260,450,260);
    line(450,260,432,246);
    line(432,246,150,220);
    line(150,220,100,230);

    //detail
    line(222,250,166,260);
    line(175,270,180,271);
    line(180,271,195,290);
    line(195,290,190,310);
    line(190,310,182,315);
    line(185,310,190,290);
    line(190,290,180,277);

    //detail
    line(210,218,225,194);
    line(225,194,259,183);

    //behind
    line(175,319,180,320);
    line(88,319,93,320);
    line(475,320,480,320);
    line(560,320,565,320);

    //front detail
    line(565,280,585,282);
    line(585,282,584,285);
    line(584,285,565,285);

    line(580,275,600,280);
    line(600,280,650,285);

    //light
    line(620,282,605,305);
    line(605,305,625,315);
    line(617,310,628,310);
    line(628,310,627,300);
    line(615,305,625,290);
    line(625,290,625,287);
    line(625,287,623,287);
    line(625,290,628,292);
    line(628,292,626,294);

    //up front
    line(625,265,624,270);
    line(624,270,610,271);
    line(610,271,580,245);
    line(580,245,595,245);
    line(585,255,565,240);
    line(565,240,525,230);
    line(525,230,470,228);
    line(470,228,450,229);

    //asphalt road
    line(0,330,100,330);
    line(166,330,488,330);
    line(552,330,800,330);
    line(0,400,800,400);

    line(800,400,800,290);
    line(800,290,645,290);

    line(0,290,20,290);
    line(0,290,0,330);

    line(50,345,180,345);
    line(180,345,160,355);
    line(160,355,30,355);
    line(30,355,50,345);

    line(240,345,380,345);
    line(380,345,360,355);
    line(360,355,225,355);
    line(225,355,240,345);

    line(440,345,580,345);
    line(580,345,560,355);
    line(560,355,425,355);
    line(425,355,440,345);

    line(640,345,780,345);
    line(780,345,760,355);
    line(760,355,625,355);
    line(625,355,640,345);

    line(638,345-40,780,345-40);
    line(780,345-40,760,355-40);
    line(760,355-40,625,355-400);

    //tire midle style
    circle(114,300,5);
    circle(153,300,5);
    circle(135,280,5);
    circle(135,321,5);

    circle(500,300,5);
    circle(540,300,5);
    circle(522,280,5);
    circle(522,321,5);

    //out color
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(609,260,WHITE);
    //CAR COLOR
    setfillstyle(SOLID_FILL,2);
    floodfill(100,200,WHITE);
    floodfill(45,310,WHITE);
    floodfill(28,298,WHITE);
    floodfill(28,272,WHITE);
    floodfill(628,300,WHITE);

    //window color
    setfillstyle(SOLID_FILL,8);
    floodfill(300,200,WHITE);
    floodfill(250,200,WHITE);
    floodfill(215,200,WHITE);
    floodfill(450,220,WHITE);

    //window line color
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    floodfill(445,250,WHITE);
    floodfill(300,244,WHITE);
    floodfill(45,240,WHITE);
    floodfill(45,240,WHITE);

    ///door color
    setfillstyle(SOLID_FILL,5);
    floodfill(445,290,WHITE);
    floodfill(245,270,WHITE);

    // tier color
    setcolor(14);
    setfillstyle(SOLID_FILL,1);
    floodfill(110,320,15);
    floodfill(150,320,WHITE);
    floodfill(150,280,WHITE);
    floodfill(540,280,WHITE);
    floodfill(540,320,WHITE);
    floodfill(500,320,WHITE);
    floodfill(500,290,WHITE);

   //road color
   setcolor(WHITE);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(100,350,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(300,350,WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(490,350,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(700,350,WHITE);
    floodfill(700,310,WHITE);

  //tier middle color animation
  setfillstyle(1,6);
  floodfill(114,300,WHITE);
  floodfill(153,300,WHITE);
  setfillstyle(1,12);
  floodfill(135,280,WHITE);
  floodfill(135,321,WHITE);

  setfillstyle(1,6);
  floodfill(500,300,WHITE);
  floodfill(540,300,WHITE);
  setfillstyle(1,12);
  floodfill(522,280,WHITE);
  floodfill(522,321,WHITE);

   //TEXT
    setcolor(14);
    settextstyle(3,0,2);
    outtextxy(150,430,"CREATED BY ROHIT TECH STUDY");

  getch();
  closegraph();
  }

/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/**************  LIKE  ________ SHARE ______ SUBSCRIBE *****************/


