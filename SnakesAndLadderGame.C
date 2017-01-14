#include<graphics.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
char msg[100];
int x=0,y=430;
static int sco=0;
void *ptr,*ptr1,*ptr2,*coin,*coin1,*coin2;
long int size,size1,size2,coin_size,coin_size1,coin_size2;
void game();

void game1();
void level();
void instruction();
void display1();
void display2();
void flowers();
void box();
void box1();
void box2();
void number();
int dice();
void setdice();
void shasna();
void shalad();
void soun();
void soun1();
void shaflg();
void cir();
void snake1();
void snake2();
void snake3();
void snake4();
void snake5();
void snake6();
void snake7();
void snake8();
void snake9();
void snake10();
void snake11();
void snake12();
void snake13();

void line1();
void line2();
void line3();
void line4();
void line5();
void line6();
void line7();
void display();
void game_page();
void result(int );
void normal(int x,int y,char *str);
void reverse(int x,int y,char *str);
void normal1(int x,int y,char *str);
void reverse1(int x,int y,char *str);
void un_install();
void score();
void main()
{
  int i=0,key,x1=250,y1=200,j,k;
  char msga[100];
   char m2[100];
  char a[][50]={"Start","Instruction","Exit"};
  int   gd=0,gm;
  clrscr();
  initgraph(&gd,&gm,"d:\\tc\\bgi");
  shaflg();
  cleardevice();
  display();
  cleardevice();
  display2();
  getch();
  cleardevice();
  shasna();
  shalad();
  cleardevice();
  settextstyle(1,0,2);
  for(i=0;i<=2;i++)
  {
     normal(x1,y1,a[i]);
     y1=y1+20;
  }
  _setcursortype(_NOCURSOR);
  y1=200;
  i=0;
  do
  {
     key=getch();
     switch(key)
     {
	 case 72: normal(x1,y1,a[i]);
	 i--;
	 if(i==-1)
	 i=2;
	 if(y1==200)
	 y1=260;
	 y1-=20;
	 reverse(x1,y1,a[i]);
	 break;
	 case 80: normal(x1,y1,a[i]);
	 i++;
	 if(i==3)
	 i=0;
	 if(y1==240)
	 y1=200;
	 else
	 y1+=20;
	 reverse(x1,y1,a[i]);
	 break;
	 case 13: if(i==0)
	 {
	    cleardevice();
	    game_page();


	    for( j=200;j<=300;j=j+2)
	    {
	      cleardevice();
	      for(k=170;k<=470;k=k+29)
	      {
		setcolor(RED);
		settextstyle(2,0,6);
		sprintf(m2,"Game Loading..... : %d %",j-200);
		outtextxy(200,100,m2);
		setfillstyle(7,j*k/2);
		bar(k,j,k,j);
		setcolor(8);
		settextstyle(10,0,4);
		outtextxy(15,220,"SNAKES AND LADDERS");
		settextstyle(1,0,3);
		setcolor(13);
		outtextxy(300,290,"Know Your LUCK.....!");
		setcolor(random(15)+1);
		settextstyle(2,0,4);
		outtextxy(75,j,"SHAHUL AND ZAIN");
		outtextxy(random(550),320,"ßßßßßßßßßßßßß");
		delay(1);
	      }
	    }
	    cleardevice();
	    setcolor(12);
	    settextstyle(1,0,4);
	    outtextxy(100,150,"Press any key to continue....");
	    settextstyle(1,0,6);
	    outtextxy(200,300,"Best of Luck");
	    settextstyle(1,0,1);
	    getch();
	    cleardevice();
	    level();

	 }
	 if(i==1)
	 {
	     cleardevice();
	     instruction();
	     getch();
	     cleardevice();


	 }
	 if(i==2)
	 {
	     cleardevice();
	     display1();
	     getch();
	     cleardevice();
	     flowers();
	     getch();
	     cleardevice();
	     setbkcolor(BLACK);
	     for(j=100;j<=250;j++)
	     {
		setcolor(9);
		settextstyle(10,0,4);
		outtextxy(180,220,"THANK YOU");
		setcolor(random(15)+1);
		settextstyle(2,0,4);
		outtextxy(random(550),320,"ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
		outtextxy(random(550),200,"ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
		delay(1);
		cleardevice();
	     }
	     exit(0);
	 }
	 break;
     }
  }while(key!=27);
  getch();
}
void normal(int x,int y,char *str)
{
  char ms[100];
  sprintf(ms,"%s",str);
  setcolor(RED);
  outtextxy(x,y,ms);
}
void reverse(int x,int y, char *str)
{
  char msgr[100];
  setcolor(GREEN);

  sprintf(msgr,"%s",str);
  outtextxy(x,y,msgr);

  setbkcolor(BLACK);
}
void instruction()
{
int x1=250,y1,i;
char a[][50]={"Start","Instruction","Exit"};
  cleardevice();
  settextstyle(1,0,7);
  setcolor(YELLOW);
  outtextxy(80,30,"INSTRUCTIONS");
  settextstyle(1,0,4);
  setcolor(WHITE);
  outtextxy(10,100,"This game depends on your luck");
  setcolor(RED);
  line(10,135,530,135);
  settextstyle(1,0,3);
  setcolor(WHITE);
  outtextxy(10,140,"1. A die will be rolled automatically");
  outtextxy(10,170,"     by the computer.");
  outtextxy(10,200,"2.You just have to press the button");
  outtextxy(10,230,"   (Enter) to roll the DIE.");
  outtextxy(10,260,"3.If the snake byte  you, You will");
  outtextxy(10,290,"    reach the tail of that snake.");
  outtextxy(10,320,"4.If the die reaches the ladder then");
  outtextxy(10,350,"    you reach to the top that ladder.");
  outtextxy(10,380,"5.Any time you want to quit the game press (Esc).");
  outtextxy(10,410,"6.Exactly U reach GOAL, U roll die");
  outtextxy(200,430,"Press any key to go to MENU");
  settextstyle(1,0,1);
    y1=200;
    getch();
    cleardevice();
	      for(i=0;i<=2;i++)
	      {
		normal(x1,y1,a[i]);
		y1=y1+20;
	      }

}
void display()
{
  settextstyle(1,0,6);
  setbkcolor(BLACK);
  setcolor(9);
  outtextxy(170,100,"Luck Game");
  outtextxy(300,200,"with");
  outtextxy(160,300,"Snakes & Ladders");
  settextstyle(1,0,3);
  outtextxy(200,420,"Press any key to continue");
  getch();
}
void  game()
{
  int c=0,ran,b,i,escp;
  cleardevice();
  setcolor(YELLOW);
  for(i=0;i<7;i++)
    circle(10,460,i);
  coin_size=imagesize(4,454,16,466);
  coin=malloc(coin_size);
  getimage(4,454,16,466,coin);
  putimage(x,y-5,coin,0);
  outtextxy(20,450,"-> coin");
  putimage(x,y-5,coin,0);
  settextstyle(1,0,0);
  box();
  while(x!=400 || y!=30)
  {
    sco++;
    outtextxy(10,420,"START");
    outtextxy(400,20,"GOAL");
    escp=getch();
    if(escp==27)
    {
      cleardevice();
      display1();
      getch();
      cleardevice();
      flowers();
      getch();
      cleardevice();
      un_install();
      exit(0);
    }
    if(y<30)
    {
      cleardevice();
      display1();
      getch();
      cleardevice();
      flowers();
      getch();
      exit(0);
    }
    ran=dice();
    c=((y-10)/40)%2;
    if(x==100 && y==30)
    {
      if(ran==6)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==150 && y==30)
    {
      if(ran==5)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==200 && y==30)
    {
      if(ran==4)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==250 && y==30)
    {
      if(ran==3)
      {
	cleardevice();

	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==350 && y==30)
    {
      if(ran==1)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(c==0)
    {
      int temp;
      if(y!=30)
      x=x+ran*50;
      else
      {
	 temp=x+ran*50;
	 if(temp<=400)
	    x=temp;
      }
      cleardevice();
      box();
      if(x<=400)
      {
	putimage(x,y-5,coin,0);
      }
      else
      {
	y=y-40;
	b=(x-450)/50;
	x=400-b*50;
	putimage(x,y-5,coin,0);
      }
    }
    else
    {
      cleardevice();
      box();
      x=x-ran*50;
      if(x>=0)
      {
	putimage(x,y-5,coin,0);
      }
      else
      {
	y=y-40;
	b=abs(x/50);
	x=(b*50)-50;
	putimage(x,y-5,coin,0);
      }
    }
    if(x==0 && y==390)
    {
      setcolor(1);
      soun();
      x=50;
      y=430;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==200 && y==350)
    {
      setcolor(2);
      soun();
      x=250;
      y=390;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==50 && y==270)
    {
      setcolor(3);
      soun();
      x=100;
      y=310;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==200 && y==230)
    {
      setcolor(4);
      soun();
      x=150;
      y=270;
      putimage(x,y-5,coin,0);
      sco+=10;
    }

    if(x==100 && y==150)
    {
      setcolor(6);
      soun();
      x=100;
      y=230;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==0 && y==30)
    {
      setcolor(7);
      soun();
      x=50;
      y=190;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==150 && y==70)
    {
      setcolor(8);
      soun();
      x=200;
      y=110;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==400 && y==110)
    {
      setcolor(9);
      soun();
      x=400;
      y=430;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==300 && y==30)
    {
      setcolor(10);
      soun();
      x=350;
      y=350;
      putimage(x,y-5,coin,0);
      sco+=10;
    }
    if(x==200 && y==270)
    {
      setcolor(5);
      soun1();
      x=100;
      y=190;
      putimage(x,y-5,coin,0);
      sco-=5;
    }
    if(x==200 && y==430)
    {
      setcolor(1);
      soun1();
      x=150;
      y=390;
      putimage(x,y-5,coin,0);
      sco-=5;
    }
    if(x==100 && y==350)
    {
      setcolor(3);
      soun1();
      x=150;
      y=310;
      putimage(x,y-5,coin,0);
      sco-=5;
    }
    if(x==0 && y==310)
    {
      setcolor(4);
      soun1();
      x=0;
      y=230;
      putimage(x,y-5,coin,0);
      sco-=5;
    }

    if(x==300 && y==190)
    {
      setcolor(6);
      soun1();
      x=250;
      y=70;
      putimage(x,y-5,coin,0);
      sco-=5;
    }
    if(x==50 && y==150)
    {
      setcolor(7);
      soun1();
      x=100;
      y=110;
      putimage(x,y-5,coin,0);
      sco-=5;
    }
    if(x==400 && y==30)
    {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
    }
  }
  getch();
}
void box()
{
  int i,j;
  settextstyle(1,0,4);
  outtextxy(180,443,"Mediam");
  settextstyle(1,0,2);
  outtextxy(330,450,"press Enter");
  settextstyle(0,0,0);
  setfillstyle(1,10);
  bar(450,0,460,440);
  bar(450,430,640,440);
  bar(450,0,640,10);
  bar(630,0,640,440);
  setfillstyle(1,13);
  bar(0,400,50,440);
  setbkcolor(BLACK);
  number();
  setcolor(RED);
  snake1();
  snake2();
  snake3();
  snake5();
  snake6();
  snake7();
  snake8();
  snake9();
  snake10();
  setcolor(GREEN);
  setlinestyle(SOLID_LINE,1,2);
  line1();
  line2();
  line3();
  line4();
  line5();
  line6();
  setcolor(WHITE);
  setlinestyle(SOLID_LINE,1,2);
  for(i=0;i<=450;i+=50)
  {
	line(i,0,i,440);
  }
  for(j=0;j<=440;j+=40)
  {
	line(0,j,450,j);
  }

}
void  game1()
{
  int c=0,ran,b,i,escp;
  cleardevice();
  setcolor(YELLOW);
  for(i=0;i<7;i++)
    circle(10,460,i);
  coin_size1=imagesize(4,454,16,466);
  coin1=malloc(coin_size1);
  getimage(4,454,16,466,coin1);
  putimage(x,y-5,coin1,0);
  outtextxy(20,450,"-> coin");
  settextstyle(1,0,0);
  putimage(x,y-5,coin1,0);
  box1();
  while(x!=400 || y!=30)
  {
    sco++;
    outtextxy(10,420,"START");
    outtextxy(400,20,"GOAL");
     escp=getch();
    if(escp==27)
    {
      cleardevice();
      display1();
      getch();
      cleardevice();
      flowers();
      getch();
      cleardevice();
      un_install();
      exit(0);
    }
    if(y<30)
    {
      cleardevice();
      display1();
      getch();
      cleardevice();
      flowers();
      getch();
      exit(0);
    }
    ran=dice();
    c=((y-10)/40)%2;
    if(x==100 && y==30)
    {
      if(ran==6)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();

	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==150 && y==30)
    {
      if(ran==5)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==200 && y==30)
    {
      if(ran==4)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==250 && y==30)
    {
      if(ran==3)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==350 && y==30)
    {
      if(ran==1)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(c==0)
    {
      int temp;
      if(y!=30)
      x=x+ran*50;
      else
      {
	 temp=x+ran*50;
	 if(temp<=400)
	    x=temp;
      }
      cleardevice();
      box1();
      if(x<=400)
      {
	putimage(x,y-5,coin1,0);
      }
      else
      {
	y=y-40;
	b=(x-450)/50;
	x=400-b*50;
	putimage(x,y-5,coin1,0);
      }
    }
    else
    {
      cleardevice();
      box1();
      x=x-ran*50;
      if(x>=0)
      {
      putimage(x,y-5,coin1,0);
      }
      else
      {
	y=y-40;
	b=abs(x/50);
	x=(b*50)-50;
	putimage(x,y-5,coin1,0);

      }
    }

    if(x==200 && y==350)
    {
      setcolor(2);
      soun();
      x=250;
      y=390;
      putimage(x,y-5,coin1,0);
      sco+=10;
    }
    if(x==50 && y==270)
    {
      setcolor(3);
      soun();
      x=100;
      y=310;
      putimage(x,y-5,coin1,0);
      sco+=10;
    }

    if(x==100 && y==150)
    {
      setcolor(6);
      soun();
      x=100;
      y=230;
      putimage(x,y-5,coin1,0);
      sco+=10;
    }
    if(x==0 && y==30)
    {
      setcolor(7);
      soun();
      x=50;
      y=190;
      putimage(x,y-5,coin1,0);
      sco+=10;
    }

    if(x==400 && y==110)
    {
      setcolor(9);
      soun();
      x=400;
      y=430;
      putimage(x,y-5,coin1,0);
      sco+=10;
    }
    if(x==200 && y==430)
    {
      setcolor(1);
      soun1();
      x=150;
      y=390;
      putimage(x,y-5,coin1,0);
      sco-=5;
    }
    if(x==100 && y==350)
    {
      setcolor(3);
      soun1();
      x=150;
      y=310;
      putimage(x,y-5,coin1,0);
      sco-=5;
    }
    if(x==0 && y==310)
    {
      setcolor(4);
      soun1();
      x=0;
      y=230;
      putimage(x,y-5,coin1,0);
      sco-=5;
    }
    if(x==200 && y==270)
    {
      setcolor(5);
      soun1();
      x=100;
      y=190;
      putimage(x,y-5,coin1,0);
	sco-=5;
    }
    if(x==300 && y==190)
    {
      setcolor(6);
      soun1();
      x=250;
      y=70;
      putimage(x,y-5,coin1,0);
      sco-=5;
    }
    if(x==50 && y==150)
    {
      setcolor(7);
      soun1();
      x=100;
      y=110;
      putimage(x,y-5,coin1,0);
      sco-=5;
    }
    if(x==400 && y==30)
    {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
    }
  }
  getch();
}

void box1()
{
  int i,j;
  settextstyle(1,0,4);
  outtextxy(200,443,"Easy");
  settextstyle(1,0,2);
  outtextxy(320,450,"press Enter");
  settextstyle(0,0,0);
  setfillstyle(1,9);
  bar(450,0,460,440);
  bar(450,430,640,440);
  bar(450,0,640,10);
  bar(630,0,640,440);
  setfillstyle(1,12);
  bar(0,400,50,440);

  setbkcolor(BLACK);
  number();
  setcolor(RED);
  snake2();
  snake3();
  snake5();
  snake6();
  snake7();
  line1();
  line2();
  line3();
  line4();
  line5();
  line6();
  for(i=0;i<=450;i+=50)
  {
	line(i,0,i,440);
  }
  for(j=0;j<=440;j+=40)
  {
	line(0,j,450,j);
  }
}

void  game2()
{
  int c=0,ran,b,i,escp;
  cleardevice();
  setcolor(YELLOW);
  for(i=0;i<7;i++)
    circle(10,460,i);
  coin_size2=imagesize(4,454,16,466);
  coin2=malloc(coin_size2);
  getimage(4,454,16,466,coin2);
  putimage(x,y-5,coin2,0);
  outtextxy(20,450,"-> coin");
  settextstyle(1,0,0);
  putimage(x,y-5,coin2,0);
  box2();
  while(x!=400 || y!=30)
  {
    sco++;
    outtextxy(10,420,"START");
    outtextxy(400,20,"GOAL");
    escp=getch();
    if(escp==27)
    {
      cleardevice();
      display1();
      getch();
      cleardevice();
      flowers();
      getch();
      cleardevice();
      un_install();
      exit(0);
    }
    if(y<30)
    {
      cleardevice();
      display1();
      getch();
      cleardevice();
      flowers();
      getch();
      exit(0);
    }
    ran=dice();
    c=((y-10)/40)%2;
    if(x==100 && y==30)
    {
      if(ran==6)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==150 && y==30)
    {
      if(ran==5)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==200 && y==30)
    {
      if(ran==4)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==250 && y==30)
    {
      if(ran==3)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(x==350 && y==30)
    {
      if(ran==1)
      {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
      }
    }
    if(c==0)
    {
      int temp;
      if(y!=30)
      x=x+ran*50;
      else
      {
	 temp=x+ran*50;
	 if(temp<=400)
	    x=temp;
      }
      cleardevice();
      box2();
      if(x<=400)
      {
	putimage(x,y-5,coin2,0);
      }
      else
      {
	y=y-40;
	b=(x-450)/50;
	x=400-b*50;
	putimage(x,y-5,coin2,0);
      }
    }
    else
    {
      cleardevice();
      box2();
      x=x-ran*50;
      if(x>=0)
      {
      putimage(x,y-5,coin2,0);
      }
      else
      {
	y=y-40;
	b=abs(x/50);
	x=(b*50)-50;
	putimage(x,y-5,coin2,0);
      }
    }
    if(x==0 && y==390)
    {
      setcolor(1);
      soun();
      x=50;
      y=430;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==200 && y==350)
    {
      setcolor(2);
      soun();
      x=250;
      y=390;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==50 && y==270)
    {
      setcolor(3);
      soun();
      x=100;
      y=310;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==200 && y==230)
    {
      setcolor(4);
      soun();
      x=150;
      y=270;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==250 && y==190)
    {
      setcolor(5);
      soun();
      x=300;
      y=230;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==100 && y==150)
    {
      setcolor(6);
      soun();
      x=100;
      y=230;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==0 && y==30)
    {
      setcolor(7);
      soun();
      x=50;
      y=190;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==150 && y==70)
    {
      setcolor(8);
      soun();
      x=200;
      y=110;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==400 && y==110)
    {
      setcolor(9);
      soun();
      x=400;
      y=430;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==300 && y==30)
    {
      setcolor(10);
      soun();
      x=350;
      y=350;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }
    if(x==300 && y==310)
    {
      setcolor(GREEN);
      soun();
      x=350;
      y=390;
      putimage(x,y-5,coin2,0);
      sco+=10;

    }
    if(x==50 && y==110)
    {
      setcolor(GREEN);
      soun();
      x=0;
      y=190;
      putimage(x,y-5,coin2,0);
      sco+=10;

    }
    if(x==200 && y==30)
    {
      setcolor(GREEN);
      soun();
      x=150;
      y=190;
      putimage(x,y-5,coin2,0);
      sco+=10;
    }

    if(x==200 && y==430)
    {
      setcolor(1);
      soun1();
      x=150;
      y=390;
      putimage(x,y-5,coin2,0);
      sco-=5;
    }
    if(x==100 && y==350)
    {
      setcolor(3);
      soun1();
      x=150;
      y=310;
      putimage(x,y-5,coin2,0);
       sco-=5;
    }
    if(x==0 && y==310)
    {
      setcolor(4);
      soun1();
      x=0;
      y=230;
      putimage(x,y-5,coin2,0);
       sco-=5;
    }
    if(x==300 && y==190)
    {
      setcolor(6);
      soun1();
      x=250;
      y=70;
      putimage(x,y-5,coin2,0);
       sco-=5;
    }
    if(x==50 && y==150)
    {
      setcolor(7);
      soun1();
      x=100;
      y=110;
      putimage(x,y-5,coin2,0);
       sco-=5;
    }
    if(x==400 && y==30)
    {
	cleardevice();
	settextstyle(1,0,4);
	outtextxy(230,200,"YOU WON");
	settextstyle(1,0,3);
	outtextxy(180,300,"Press any key to know");
	outtextxy(200,350,"YOUR LUCK PERCENTAGE");
	getch();
	settextstyle(0,0,0);
	score();
	getch();
	cleardevice();
	display1();
	getch();
	cleardevice();
	flowers();
	getch();
	un_install();
	exit(0);
    }
  }
  getch();
}

void box2()
{
  int i,j;
  settextstyle(1,0,4);
  outtextxy(200,443,"Hard ");
  settextstyle(1,0,2);
  outtextxy(320,450,"press Enter");
  settextstyle(0,0,0);
  setbkcolor(BLACK);
  setfillstyle(1,11);
  bar(450,0,460,440);
  bar(450,430,640,440);
  bar(450,0,640,10);
  bar(630,0,640,440);
  setfillstyle(1,5);
  bar(0,400,50,440);
  number();
  snake1();
  snake2();
  snake3();
  snake4();
  snake5();
  snake6();
  snake7();
  snake8();
  snake9();
  snake10();
  snake11();
  snake12();
  snake13();

  setlinestyle(SOLID_LINE,0,2);
  setcolor(BLUE);
  line1();
  line2();
  line4();
  line5();
  line6();
  setcolor(BLUE);
  for(i=0;i<=450;i+=50)
  {
	line(i,0,i,440);
  }
  for(j=0;j<=440;j+=40)
  {
	line(0,j,450,j);
  }
}

void number()
{
  char msg[100];
  int x=0,y=400,i,j;
  int a=0;

  for(i=0;i<=10;i++)
  {
    if(x<=0)
    {
      for( x=0;x<450;x+=50)
      {
	sprintf(msg,"%d",a);
	outtextxy(x,y,msg);
	a++;
      }
      y-=40;
    }
    if(x>=450)
    {
      for(x=400;x>=0;x-=50)
      {
	sprintf(msg,"%d",a);
	outtextxy(x,y,msg);
	a++;
      }
      y-=40;
    }
  }
}
void snake1()
{
  setcolor(RED);
  ellipse(25,380,0,360,8,15);
  circle(30,375,1);
  circle(20,375,1);
  line(22,390,22,420);
  line(29,390,29,410);
  line(29,410,75,405);
  line(22,420,75,405);

}
void snake2()
{
  ellipse(225,340,0,360,8,15);
  circle(230,335,1);
  circle(220,335,1);
  line(223,350,223,380);
  line(230,350,230,370);
  line(223,380,285,365);
  line(230,370,285,365);

}
void snake3()
{
  ellipse(75,260,0,360,8,15);
  circle(80,255,1);
  circle(70,255,1);
  line(72,270,50,300);
  line(50,300,75,340);
  line(75,340,125,300);
  line(79,270,70,300);
  line(70,300,75,330);
  line(75,330,125,300);

}
void snake4()
{
  ellipse(275,180,0,360,8,15);
  circle(280,175,1);
  circle(270,175,1);
  line(272,190,250,220);
  line(250,220,275,260);
  line(275,260,325,220);
  line(279,190,270,220);
  line(270,220,285,240);
  line(285,240,325,220);

}
void snake5()
{
  ellipse(125,140,0,360,8,15);
  circle(130,135,1);
  circle(120,135,1);
  line(122,150,100,180);
  line(100,180,120,230);
  line(129,150,115,180);
  line(115,180,120,230);

}
void snake6()
{
  ellipse(425,100,0,360,8,15);
  circle(430,95,1);
  circle(420,95,1);
  line(422,110,400,140);
  line(400,140,425,180);
  line(425,180,400,220);
  line(429,110,415,140);
  line(415,140,440,180);
  line(440,180,425,220);
  line(400,220,425,260);
  line(425,220,450,260);
  line(425,260,400,300);
  line(450,260,425,300);
  line(400,300,425,340);
  line(425,300,450,340);
  line(450,340,400,440);
  line(425,340,400,440);

}
void snake7()
{
  ellipse(25,20,0,360,8,15);
  circle(30,15,1);
  circle(20,15,1);
  line(22,30,0,60);
  line(0,60,25,100);
  line(25,100,0,140);
  line(0,140,50,200);
  line(29,30,25,60);
  line(25,60,50,100);
  line(50,100,25,140);
  line(25,140,50,180);
  line(50,200,90,170);
  line(50,180,90,170);

  }
void snake8()
{
  ellipse(175,60,0,360,8,15);
  circle(180,55,1);
  circle(170,55,1);
  line(172,70,150,100);
  line(150,100,200,120);
  line(200,120,240,90);
  line(179,70,165,100);
  line(165,100,200,110);
  line(200,110,240,90);

}
void snake9()
{
  ellipse(325,20,0,360,8,15);
  circle(330,15,1);
  circle(320,15,1);
  line(322,30,300,60);
  line(300,60,325,100);
  line(325,100,300,140);
  line(300,140,350,180);
  line(350,180,360,220);
  line(360,220,325,260);
  line(325,260,375,340);
  line(329,30,320,60);
  line(320,60,350,100);
  line(350,100,325,140);
  line(325,140,400,200);
  line(400,200,350,260);
  line(350,260,375,340);

}
void snake10()
{
  ellipse(225,220,0,360,8,15);
  circle(230,215,1);
  circle(220,215,1);
  line(222,230,200,260);
  line(200,260,160,250);
  line(229,230,200,280);
  line(200,280,160,250);
}
void snake11()
{
  ellipse(325,300,0,360,8,15);
  circle(330,292,1);
  circle(320,292,1);
  line(322,310,310,340);
  line(329,310,322,340);
  line(310,340,325,380);
  line(322,340,330,365);
  line(325,380,375,380);
  line(330,365,375,380);
}
void snake12()
{
  ellipse(75,100,0,360,8,15);
  circle(80,92,1);
  circle(70,92,1);
  line(72,110,65,140);
  line(79,110,79,140);
  line(65,140,25,160);
  line(79,140,50,160);
  line(25,160,10,190);
  line(50,160,10,190);
}

void snake13()
{
  ellipse(225,20,0,360,8,15);
  circle(230,12,1);
  circle(220,12,1);
  line(218,28,230,60);
  line(229,30,250,60);
  line(230,60,200,80);
  line(250,60,225,80);
  line(200,80,225,100);
  line(225,80,250,100);
  line(225,100,200,120);
  line(250,100,225,120);
  line(200,120,225,140);
  line(225,120,250,140);
  line(225,140,200,160);
  line(250,140,225,160);
  line(200,160,175,180);
  line(225,160,175,180);
}

int dice()
{
  int x=520,y=200;
  char msg[6];
  int a;
  int key;
  randomize();

  setdice();
  key=getch();
  if(key==13)
  {
	a=rand()%6+1;
	setdice();
	setcolor(3);
	bar3d(490, 250,540,210,20,1);
	sprintf(msg,"%d",a);
	outtextxy(x,y,msg);
	getch();
	cleardevice();
	setdice();
  }
  return a;
}
void setdice()
{
	setfillstyle(1,1);
	bar(480,140,540,170);
	setcolor(10);
	outtextxy(480,150,"Press");
	outtextxy(480,160,"Enter");
	setcolor(6);
	outtextxy(480,100,"DICE ROLLING");
}
void line1()
{
	setlinestyle(SOLID_LINE,1,2);
	setcolor(GREEN);
	line(175,360,250,420);
	line(150,380,225,440);
	line(185,410,204,385);
	line(210,430,230,405);
	line(165,390,185,367);

}
void line2()
{
	line(100,340,175,280);
	line(125,360,200,300);
	line(115,330,135,355);
	line(135,310,155,335);
	line(160,290,180,315);

}
void line3()
{
	line(100,180,225,280);
	line(125,160,250,260);
	line(115,190,135,165);
	line(140,215,165,187);
	line(175,240,195,215);
	line(210,270,230,245);

}
void line4()
{
	line(10,220,10,300);
	line(40,220,40,300);
	line(10,260,40,260);

}
void line5()
{
	line(50,140,125,80);
	line(75,160,150,100);
	line(75,115,97,142);
	line(100,100,115,120);

}
void line6()
{
	line(275,60,350,180);
	line(250,80,325,200);
	line(263,105,290,87);
	line(290,140,318,123);
	line(315,185,340,170);
}
void soun1()
{
	int a[20]={1000,900,1200,700,800,1000,800,600,900,1200,800,900,700,1000,600,900,700,1000,800,600};
	int d2[20]={10,300,30,500,20,300,50,500,30,300,20,400,40,200,25,500,10,400,30,500};
	int d1[20]={10,20,25,10,15,30,20,30,15,20,30,25,15,30,10,20,15,25,30,50};
	int i,j;
	for(j=0;j<2;j++)
		for(i=0;i<10;i++)
		{
			sound(a[i]);
			delay(d1[i]);
			nosound();
			delay(d2[i]);
			outtextxy(480,260,"Congrates....>>>> ");
			outtextxy(480,270,"LADDER!! GOOD LUCK!");
			putimage(500,300,ptr1,0);
		}
		nosound();
}
void soun()
{
	int a[17]={1000,900,1200,900,1000,800,900,700,600,1000,900,700,800,1000,900,1000};
	int d1[17]={50,100,200,200,50,100,200,150,100,150,120,100,90,80,70,50};
	int d2[17]={10,20,15,20,10,15,10,20,10,25,15,10,15,20,25,10,20};
	int i,j;
	for(j=0;j<=1;j++)
		for(i=0;i<=11;i++)
		{
			sound(a[i]);
			delay(d1[i]);
			nosound();
			delay(d2[i]);
			outtextxy(480,260,"You have bitten by ");
			outtextxy(480,270,"SNAKE!! BAD LUCK!");
			putimage(500,300,ptr,0);
		}
		nosound();
}
void shasna()
{
  setcolor(5);
  setfillstyle(1,RED);
  fillellipse(100,100,5,10);
  line(95,105,100,140);
  line(100,140,70,160);
  line(105,105,110,150);
  line(70,160,110,150);
  line(95,95,90,85);
  line(105,95,110,85);
  size=imagesize(70,70,110,160);
  ptr=malloc(size);
  getimage(70,70,110,160,ptr);
  cleardevice();
}
void shalad()
{
   int gd=0,gm;
   initgraph(&gd,&gm,"d:\\tc\\bgi");
   setcolor(5);
   setlinestyle(1,SOLID_LINE,1);
   line(90,90,90,170);
   line(90,100,110,100);
   line(90,110,110,110);
   line(90,120,110,120);
   line(90,130,110,130);
   line(90,140,110,140);
   line(90,150,110,150);
   line(90,160,110,160);
   line(110,90,110,170);
   size1=imagesize(90,90,160,170);
   ptr1=malloc(size1);
   getimage(90,90,160,170,ptr1);
   cleardevice();
}
void flowers()
{
    setbkcolor(8);
    setcolor(YELLOW);
    setfillstyle(1,WHITE);
    fillellipse(100,100,20,20);
    setfillstyle(1,RED);
    pieslice(100,80,60,100,25);
    pieslice(90,85,95,140,25);
    pieslice(85,90,140,190,25);
    pieslice(80,100,200,250,25);
    pieslice(85,115,230,270,25);
    pieslice(100,120,250,300,25);
    pieslice(112,115,300,350,25);
    pieslice(120,100,320,360,25);
    pieslice(120,90,0,40,25);
    pieslice(110,80,30,70,25);
    size2=imagesize(50,50,150,150);
    ptr2=malloc(size2);
    getimage(50,50,150,150,ptr2);
    putimage(450,50,ptr2,0);
    putimage(50,390,ptr2,0);
    putimage(450,390,ptr2,0);
    settextstyle(1,0,3);
    outtextxy(230,250,"THANK YOU ");
    outtextxy(200,420,"Press any key to Exit");
}
void display1()
{
  setbkcolor(8);
  setcolor(10);
  settextstyle(1,0,4);
  outtextxy(100,50,"This programme is created");
  outtextxy( 270,130,"by");
  settextstyle(1,0,6);
  setcolor(11);
  outtextxy(120,200,"SHAHUL & ZAIN");
  settextstyle(1,0,3);
  setcolor(12);
  outtextxy(200,290,"studing MCA in");
  settextstyle(1,0,4);
  outtextxy(200,330,"ANR COLLEGE");
  settextstyle(1,0,2);
  setcolor(1);
  outtextxy(50,360,"Contact us:");
  outtextxy(120,380,"shahul .446@gmail.com");
  outtextxy(120,400,"zainmdm@gmail.com");
  outtextxy(200,420,"Press any key to Exit");
}
void display2()
{
  setbkcolor(8);
  settextstyle(1,0,3);
  setcolor(10);
  outtextxy(90,100,"Using \"Up\" and \"Down\" Arrows to");
  outtextxy(90,130,"   Enter into the Game");
  outtextxy(90,160,"> Whenever You Press The Up  and  Down");
  outtextxy(90,190,"   Arrows  then the Text will be Chage into");
  outtextxy(90,220,"   Green and Red colors.");
  outtextxy(90,250,"> If you will want to Enter into the ");
  outtextxy(90,280,"   Game or Contents then You PRESS Enter");
  outtextxy(90,310,"   Highlited GREEN color will be used ");
  outtextxy(90,340,"   to select the options.");
  outtextxy(200,420,"Press any key to continue..");
}
void shaflg()
{
    setbkcolor(BLACK);
    setfillstyle(1,RED);
    bar(10,10,620,150);
    setfillstyle(1,WHITE);
    bar(10,150,620,300);
    setcolor(BLUE);
    cir();
    setfillstyle(1,GREEN);
    bar(10,300,620,450);
    setcolor(BLUE);
    circle(300,225,75);
    setcolor(BLACK);
    settextstyle(1,0,8);
    outtextxy(10,50,"     INDIA");
    settextstyle(1,0,3);
    outtextxy(200,420,"Press any key to continue.....");
  getch();
}
void cir()
{
   int x=300,y=225,sa=0,ea=15,r=75,i;
   for(i=0;i<=23;i++)
   {
     setcolor(BLUE);
     pieslice(x,y,sa,ea,r);
     sa+=15;
     ea+=15;
   }
}
void un_install()
{
  char m3[100];
  int i2,j;
  for(i2=200;i2<=300;i2=i2+1)
  {
    cleardevice();
    for( j=170;j<=470;j=j+51)
    {
      setbkcolor(BLACK);
      setcolor(YELLOW);
      settextstyle(2,0,6);
      sprintf(m3," CLOSING - APPLICATION..... : %d ",(100-(i2-200)));
      outtextxy(200,100,m3);
      setfillstyle(7,i2*j/2);
      bar(j,i2,j,i2);
      setcolor(8);
      settextstyle(10,0,4);
      outtextxy(15,220,"SNAKES AND LADDERS");
      setcolor(random(15)+1);
      settextstyle(1,0,3);
      setcolor(13);
      outtextxy(300,290,"Know your LUCK.....!");
      setcolor(random(15)+1);
      settextstyle(2,0,6);
      outtextxy(75,i2,"SHAHUL AND ZAIN");
      outtextxy(random(550),320,"ßßßßßßßßßßßßß");
      delay(1);
    }
  }
}
void score()
{
  float tem;
  int s;
  cleardevice();
  settextstyle(7,0,4);
  setcolor(GREEN+BLINK);
  outtextxy(10,30,"YOUR CURRENT LUCK PERCENTAGE");
  setcolor(9);
  line(10,75,600,75);
  line(10,78,600,78);
  setcolor(RED);
  setfillstyle(XHATCH_FILL,3);
  bar3d(250,130,350,220,20,5);
  tem=3000-sco*10;
  s=(tem/3000.0)*100;
  if(s<0)
  s=0;
  setcolor(10);
  settextstyle(7,0,5);
  sprintf(msg,"%d %",s);
  outtextxy(250,150,msg);
  line(10,260,600,260);
  settextstyle(7,0,3);
  outtextxy(250,230,"Astroleger..!!");
  result(s);
  getch();
}
void result(int scor)
{
  settextstyle(3,0,3);
  if(scor>=0 && scor<=5)
  {
    outtextxy(20,270,">> To gain your rewards, move forward in");
    outtextxy(20,300,"  a businesslike manner and with ");
    outtextxy(20,330,"  sustained effort.");
    outtextxy(20,360,">> This is your year for personal");
    outtextxy(20,390,"  reflection and perfection,");
    outtextxy(20,420,"  a year of introspection.");
  }
  else if(scor>5 && scor<=10)
  {
    outtextxy(20,270,">> This is a time of action. Place your");
    outtextxy(20,300,"  abilities on the market with a sense");
    outtextxy(20,330,"  of self-confidence and authority.");
    outtextxy(20,360,">> You feel like analyzing everything you");
    outtextxy(20,390,"  have been and are doing.");
  }
  else if(scor>10 && scor<=15)
  {
    outtextxy(20,270,">> This time you realize completion and");
    outtextxy(20,300,"  fulfillment of some of your dreams.");
    outtextxy(20,330,">> Be tolerant, compassionate, and ");
    outtextxy(20,360,"  forgiving, and this can be one");
    outtextxy(20,390,"  of the most wonderful");
    outtextxy(20,420,"  time of your life.");
  }
  else if(scor>15 && scor<=20)
  {
    outtextxy(20,270,">> During this time you can let go of the");
    outtextxy(20,300,"  old and undesirable to make way");
    outtextxy(20,330,"  for the new and worthwhile.");
    outtextxy(20,360,">> Things that have been lagging behind ");
    outtextxy(20,390,"  want to be finished up this time.");
    outtextxy(20,420,"  Some things seem to finish themselves.");
  }
  else if(scor>20 && scor<=25)
  {
    outtextxy(20,270,">> You enjoy good clothes of good material,");
    outtextxy(20,300,"  and like to be comfortably dressed.");
    outtextxy(20,330,">> Take time out to rest, study, read,");
    outtextxy(20,360,"  and travel, and to look at ");
    outtextxy(20,390,"  life from a different angle.");
  }
  else if(scor>25 && scor<=30)
  {
    outtextxy(20,270,">> When threatened emotionally, you can be");
    outtextxy(20,300,"  seen as defending yourself to");
    outtextxy(20,330,"  near irrationality.");
    outtextxy(20,360,">> You find yourself cultivating music, ");
    outtextxy(20,390,"  writing, and other arts, and expressing");
    outtextxy(20,420,"  love to the many and toleration of all.");
  }
  else if(scor>30 && scor<=35)
  {
    outtextxy(20,270,">> It is observed that you are capable of");
    outtextxy(20,300,"  deep affection and sacrifice.");
    outtextxy(20,330,">> Keeping your mind open for broader ");
    outtextxy(20,360,"  interests and larger activities");
    outtextxy(20,390,"  seem more natural to you this year.");
  }
  else if(scor>35 && scor<=40)
  {
    outtextxy(20,270,">> Your thoughts are often on others and");
    outtextxy(20,300,"  their needs, especially those close");
    outtextxy(20,330,"  to you, and this is observed");
    outtextxy(20,360,"  through your projected personality.");
    outtextxy(20,390,">> You feel ambition stirring, a desire");
    outtextxy(20,420,"  to better your financial condition.");
  }
  else if(scor>40 && scor<=45)
  {
    outtextxy(20,270,">> To enhance your life experience,");
    outtextxy(20,300,"  cultivate a wider viewpoint and");
    outtextxy(20,330,"  discard things as they become outworn.");
    outtextxy(20,360,">> You can express yourself well in");
    outtextxy(20,390,"  artistic endeavors of your choice ");
    outtextxy(20,420,"  using colors, words and form.");
  }
  else if(scor>45 && scor<=50)
  {
    outtextxy(20,270,">> When meeting new people, you tend to be");
    outtextxy(20,300,"  either suspicious or gullible, sometimes");
    outtextxy(20,330,"  switching between the two in succession.");
    outtextxy(20,360,">> You are following a path of creativity");
    outtextxy(20,390,"  and self-expression through art, beauty,");
    outtextxy(20,420,"  friendliness, happiness, and harmony.");
  }
  else if(scor>50 && scor<=55)
  {
    outtextxy(20,270,">> You are seen as one who is responsible,");
    outtextxy(20,300,"  in service to others, and trying");
    outtextxy(20,330,"  to establish emotional harmony.");
    outtextxy(20,360,">> You have a practical point of view and");
    outtextxy(20,390,"  constantly work to put more order");
    outtextxy(20,420,"  into your environment.");
  }
  else if(scor>55 && scor<=60)
  {
    outtextxy(20,270,">> You spend a good deal of time alone,");
    outtextxy(20,300,"  getting acquainted with yourself");
    outtextxy(20,330,"  and your new inner power.");
    outtextxy(20,360,">> This year you gain a better");
    outtextxy(20,390,"  understanding of your emotions");
    outtextxy(20,420,"  and your spiritual nature.");
  }
  else if(scor>60 && scor<=65)
  {
    outtextxy(20,270,">> You are known for your reliability and");
    outtextxy(20,300,"  pride of workmanship.");
    outtextxy(20,330,">> In ventures or new directions, you like");
    outtextxy(20,360,"  to look ahead, plan carefully,");
    outtextxy(20,390,"  then apply yourself with ");
    outtextxy(20,420,"  concentration and good management.");
  }

  else if(scor>65 && scor<=70)
  {
    outtextxy(20,270,">> You want to serve and to be a rock of");
    outtextxy(20,300,"  dependability and you appreciate the");
    outtextxy(20,330,"  value of a job well done.");
    outtextxy(20,360,">> A natural administrator,");
    outtextxy(20,390,"  you are methodical and thorough. ");
  }
  else if(scor>70 && scor<=75)
  {
    outtextxy(20,270,">> You are happiest when you can plan and");
    outtextxy(20,300,"  create a permanent foundation upon which");
    outtextxy(20,330,"  to build your life and your future.");
    outtextxy(20,360,">> You desire respectability, solidity,");
    outtextxy(20,390,"  love, and family pride and traditions ");
    outtextxy(20,420,"  and you loath insincerity");
  }
  else if(scor>75 && scor<=80)
  {
    outtextxy(20,270,">> You have a practical point of view and");
    outtextxy(20,300,"  constantly work to put more order");
    outtextxy(20,330,"  into your environment.");
    outtextxy(20,360,">> There are flowers in your garden,");
    outtextxy(20,390,"  and music and artistic works");
    outtextxy(20,420,"  are around you.");
  }
  else if(scor>80 && scor<=85)
  {
    outtextxy(20,270,">> Your family adores you; not only for");
    outtextxy(20,300,"  the beautiful, artistic home you ");
    outtextxy(20,330,"  create for them, but also for the ");
    outtextxy(20,360,"  responsibility you assume for ");
    outtextxy(20,390,"  keeping perfect order.");
    outtextxy(20,420,"  Quality is your standard.");
  }
  else if(scor>85 && scor<=90)
  {
    outtextxy(20,270,">> Once you have a goal in mind, you are");
    outtextxy(20,300,"  persistent in its accomplishment.");
    outtextxy(20,330,">> You are known for your hospitality. ");
    outtextxy(20,360,">> Your thoughts and pleasure is yourself");
    outtextxy(20,390,"  as the comforter to all, and");
    outtextxy(20,420,"  the adjuster of inequities.");
  }
  else if(scor>90 && scor<=95)
  {
    outtextxy(20,270,">> Your destiny is leadership.");
    outtextxy(20,300,">> You come to this position through your");
    outtextxy(20,330,"  own actions,not by aggressive or dominant");
    outtextxy(20,360,"  behavior, but by relying on your");
    outtextxy(20,390,"  own inner strength, self-reliance,");
    outtextxy(20,420,"  and determination. ");
  }

  else
  {
    outtextxy(20,270,">> Your originality and your initiative");
    outtextxy(20,300,"  can put you in a place of authority");
    outtextxy(20,330,"  or leadership during your lifetime.");
    outtextxy(20,360,">> You have a healthy respect for");
    outtextxy(20,390,"  individuality.");
    outtextxy(20,420,">> You are happiest in the role of pioneer");
  }




}

void level()
{
    int x1=250,x2,y1=200,y2,key,i;
    char b[][50]={"Easy Level","Mediam Level","Hard Level"};
    cleardevice();
    settextstyle(1,0,2);
    for(i=0;i<=2;i++)
    {
       normal1(x1,y1,b[i]);
       y1=y1+20;
    }
     _setcursortype(_NOCURSOR);
    y1=200;
    i=0;
    do
    {
      key=getch();
	switch(key)
	{
	     case 72: normal1(x1,y1,b[i]);
		      i--;
		      if(i==-1)
		      i=2;
		      if(y1==200)
		      y1=260;
		      y1-=20;
		      reverse1(x1,y1,b[i]);
		      break;
	     case 80: normal1(x1,y1,b[i]);
		      i++;
		      if(i==3)
		      i=0;
		      if(y1==240)
		       y1=200;
		      else
		       y1+=20;
		      reverse1(x1,y1,b[i]);
		      break;
	     case 13: if(i==0)
		      {
			cleardevice();
			sco=0;
			 game1();

		      }
		     if(i==1)
		     {
			cleardevice();
			sco=0;
			game();
			getch();
			cleardevice();
		     }
		     if(i==2)
		     {
		     cleardevice();
		     sco=0;
		     setbkcolor(BLACK);
			game2();
		     }
	 break;
     }
  }while(key!=27);
  getch();

}
void normal1(int x,int y,char *str)
{
  char ms[100];
  setcolor(RED);
  sprintf(ms,"%s",str);
  outtextxy(x,y,ms);
}
void reverse1(int x,int y, char *str)
{
  char msgr[100];
  setcolor(GREEN);
  sprintf(msgr,"%s",str);
  outtextxy(x,y,msgr);
  setbkcolor(BLACK);
}
void game_page()
{
   char m2[10];
   int j=0,i;
   setbkcolor(BLACK);
   setfillstyle(1,13);
   fillellipse(50,50,20,30);
   setfillstyle(1,RED);
   fillellipse(40,40,2,3);
   fillellipse(60,40,2,3);
   setfillstyle(1,13);


   setcolor(RED);
   arc(24,47,-30,30,20);
   arc(76,48,150,210,20);
   ellipse(50,58,180,360,8,5);
   line(35,73,35,100);
   line(65,73,65,100);
   line(65,100,85,130);
   line(35,100,55,130);
   line(85,130,65,150);
   line(55,130,25,150);
   line(65,150,95,170);
   line(25,150,55,170);
   line(95,170,65,200);
   line(55,170,25,200);
   line(65,200,95,240);
   line(25,200,55,240);
   line(95,240,65,280);
   line(55,240,15,280);
   line(65,280,85,330);
   line(15,280,55,330);
   line(85,330,55,380);
   line(55,330,25,380);
   line(55,380,55,450);
   line(25,380,55,450);

   setlinestyle(1,2,3);
   line(36,30,25,15);
   line(64,30,75,15);
   setlinestyle(1,2,3);
   setcolor(10);
   line(580,10,580,460);
   line(630,10,630,460);

   i=40;
  while(i<450)
   {
      line(580,i,630,i);
      i+=40;
   }


   for(i=0;i<=50;i++)
      {
       settextstyle(10,0,3);
       setcolor(4);
       outtextxy(110,180,"SNAKES");
       setcolor(5);
       outtextxy(250,180," AND");
       setcolor(10);
       outtextxy(350,180," LADDERS");
       settextstyle(3,0,3);
       setcolor(6);
       outtextxy(190,280,".....Know your luck throw this");
       settextstyle(12,0,3);
       setcolor(3);
       outtextxy(150,420,"Press any key to Loading the Game");
       j++;
       if(j==16)
       j=0;

      }
      getch();
      setlinestyle(1,0,1);
      cleardevice();
}
