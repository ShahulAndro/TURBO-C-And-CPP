#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

void city();
union REGS i,o;
void menu();
int initmouse()
{
	i.x.ax=0;
	int86(0x33,&i,&o);
	return(o.x.ax);
}
void showmouseptr()
{
	i.x.ax=1;
	int86(0x33,&i,&o);
	return;
}
void hidemouseptr()
{
	i.x.ax=2;
	int86(0x33,&i,&o);
	return;
}
void restrictmouse(int x1,int y1,int x2,int y2)
{
	i.x.ax=7;
	i.x.cx=x1;
	i.x.dx=x2;
	int86(0x33,&i,&o);

	i.x.ax=8;
	i.x.cx=y1;
	i.x.dx=y2;
	int86(0x33,&i,&o);
}
void getmousepos(int *button,int *x,int *y)
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	*button=o.x.bx;
	*x=o.x.cx;
	*y=o.x.dx;
	return;
}
void mouseposi(int &xpos,int &ypos,int &click)
       {
	      i.x.ax=3;
	      int86(51,&i,&o);
	      click=o.x.bx;
	      xpos=o.x.cx;
	      ypos=o.x.dx;
	}

void *ptr,*ptr1,*ptr2;
long int size,size1,size2;
int maxx,maxy;
void start();
void instruction();
void help();
void game();

int x,y,cl;
int gd=0,gm,button;
	int X,Y,a=100,shoot=0,speed=300;
	int l1=4,l2=2,l3=3,l4=4,l5=6;
	int x1=0,y1=50,x2=0,y2=10,x3=0,y3=100,x4=0,y4=150,x5=0,y5=200;

void main()
{
	maxx=getmaxx();
	maxy=getmaxy();
	initgraph(&gd,&gm,"d:\\tc\\bgi");
	cleardevice();
	setfillstyle(1,7);
	fillellipse(100,100,30,10);
	setfillstyle(1,GREEN);
	fillellipse(75,108,5,5);
	fillellipse(90,108,5,5);
	fillellipse(105,108,5,5);
	fillellipse(120,108,5,5);
	line(125,95,120,60);
	line(120,93,115,60);
	line(120,60,115,60);
	size=imagesize(70,60,130,115);
	ptr=malloc(size);
	getimage(70,60,130,115,ptr);
	cleardevice();

	setfillstyle(1,GREEN);
	fillellipse(50,50,10,10);
	setfillstyle(1,RED);
	fillellipse(50,50,10,5);
	fillellipse(50,50,5,10);
	pieslice(55,50,0,360,5);
	size1=imagesize(40,40,60,60);
	ptr1=malloc(size1);
	getimage(40,40,60,60,ptr1);
	cleardevice();

	setfillstyle(1,WHITE);
	fillellipse(100,200,50,8);
	setfillstyle(1,RED);
	line(130,195,130,206);
	bar(138,198,142,201);
	line(102,192,70,180);
	line(117,192,85,180);
	line(70,180,85,180);
	bar(120,198,124,201);
	line(102,208,70,218);
	line(117,208,85,218);
	line(70,218,85,218);
	bar(110,198,114,201);
	bar(100,198,104,201);
	bar(90,198,94,201);
	bar(80,198,84,201);
	bar(70,198,74,201);
	line(50,200,40,170);
	line(50,200,60,170);
	line(40,170,60,170);
	size2=imagesize(40,180,150,220);
	ptr2=malloc(size2);
	getimage(40,170,150,220,ptr2);
	putimage(200,300,ptr2,0);
	cleardevice();


	if(initmouse()==0)
	{
	   closegraph();
	   restorecrtmode();
	   printf("\nGraphics drive not loded\n");
	   exit(1);
	}
	restrictmouse(0,0,maxx,maxy);
	initmouse();
	//menu();
	//int i1=0;

	   setfillstyle(1,7);
bar(80,80,520,400);

setfillstyle(1,BLUE);
bar(80,80,520,100);

setfillstyle(1,7);
bar(500,82,518,98);
setcolor(BLACK);
line(500,82,518,98);
line(518,82,500,98);
bar(480,82,498,98);
bar(460,82,478,98);
setfillstyle(1,2);
bar(483,84,496,96);
bar(463,88,476,96);
setfillstyle(1,8);
bar(180,170,250,190);
settextstyle(3,0,1);
setcolor(RED);
outtextxy(188,168,"Start");
bar(180,210,290,230);
outtextxy(188,208,"Instructions");
bar(180,250,240,270);
outtextxy(188,248,"Exit");
bar(350,320,400,340);
outtextxy(358,315,"Help");
	nosound();
	//cleardevice();
	menu();
	printf("Number of shoots=%d",shoot);

	getch();

}

void start()
{
outtextxy(100,100,"welcome to shooting game");
game();


}
void instruction()
{
outtextxy(200,200,"welcome to shooting game");


}
void help()
{
outtextxy(100,300,"welcome to shooting game");


}


void menu()
{
while(!kbhit())
	{
	showmouseptr();
	   mouseposi(x,y,cl);

	   setfillstyle(0,1);
	   if(cl==1)
	   {

	    if(x>=180 && x<=250 && y>=170 && y<=190)
	    {
		start();
	    }
	     if(x>=180 && x<=290 && y>=210 && y<=230)
	    {
		instruction();
	    }
	     if(x>=350 && x<=400 && y>=320 && y<=340)
	    {
		help();
	    }
	    if(x>=180 && x<=240 && y>=250 && y<=270)
	    {
		exit(0);
	    }
	    if(x>=500 && x<=518 && y>=82 && y<=98)
	    {
	    exit(0);
	    }
	  }
	  settextstyle(0,0,1);
	  setfillstyle(0,1);
	}

getch();
}


void city()
{
	setfillstyle(9,5);
	bar(10,350,50,430);

	setfillstyle(7,9);
	bar(70,380,140,430);

	setfillstyle(1,3);
	bar(150,331,220,430);
	int x1=151,y1=332,x2=156,y2=335,i,j;
	for( i=0;i<=19;i++)
	{
	for( j=0;j<=9;j++)
	{
	   setfillstyle(1,4);
	   bar(x1,y1,x2,y2);

	   x1+=7;
	   x2+=7;
	   if(x1==221)
	   {
	   x1=151;
	   x2=156;
	   }
	}
	y1+=5;
	y2+=5;
	}

	setfillstyle(1,7);
	bar(230,300,280,430);
	x1=231;
	x2=236;
	y1=301;
	y2=304;
	for( i=0;i<=25;i++)
	{
	for( j=0;j<=6;j++)
	{
	   setfillstyle(9,2);
	   bar(x1,y1,x2,y2);

	   x1+=7;
	   x2+=7;
	   if(x1==280)
	   {
	   x1=231;
	   x2=236;
	   }
	}
	y1+=5;
	y2+=5;
	}
	setfillstyle(1,7);
	bar(290,360,368,430);
	x1=291;
	x2=296;
	y1=361;
	y2=364;
	for( i=0;i<=13;i++)
	{
	for( j=0;j<=10;j++)
	{
	   setfillstyle(2,12);
	   bar(x1,y1,x2,y2);

	   x1+=7;
	   x2+=7;
	   if(x1==368)
	   {
	   x1=291;
	   x2=296;
	   }
	}
	y1+=5;
	y2+=5;
	}

	setfillstyle(1,14);
	bar(380,330,422,430);
	x1=381;
	x2=386;
	y1=331;
	y2=334;
	for( i=0;i<=19;i++)
	{
	for( j=0;j<=5;j++)
	{
	   setfillstyle(7,11);
	   bar(x1,y1,x2,y2);

	   x1+=7;
	   x2+=7;
	   if(x1==423)
	   {
	   x1=381;
	   x2=386;
	   }
	}
	y1+=5;
	y2+=5;
	}
	setfillstyle(1,14);
	bar(430,350,513,430);
	x1=431;
	x2=436;
	y1=351;
	y2=354;
	for( i=0;i<=15;i++)
	{
	for( j=0;j<=12;j++)
	{
	   setfillstyle(1,7);
	   bar(x1,y1,x2,y2);

	   x1+=7;
	   x2+=7;
	   if(x1==515)
	   {
	   x1=431;
	   x2=436;
	   }
	}
	y1+=5;
	y2+=5;
	}
	setfillstyle(1,3);
	bar(550,280,627,430);
	x1=551;
	x2=556;
	y1=281;
	y2=284;
	for( i=0;i<=29;i++)
	{
	for( j=0;j<=10;j++)
	{
	   setfillstyle(1,RED);
	   bar(x1,y1,x2,y2);

	   x1+=7;
	   x2+=7;
	   if(x1==628)
	   {
	   x1=551;
	   x2=556;
	   }
	}
	y1+=5;
	y2+=5;
	}
	line(0,430,639,430);
	line(0,477,639,477);
       setfillstyle(1,WHITE);
       x1=0;
       x2=10;
       y1=450;
       y2=453;
       for(i=0;i<=32;i++)
       {
	bar(x1,y1,x2,y2);
	x1+=20;
	x2+=20;
       }
       setfillstyle(0,1);
}
void game()
{
while(!kbhit())
	{
	       //showmouseptr();
	       //getmousepos(&button,&x,&y);
	       mouseposi(x,y,cl);

	       city();
	       putimage(x1,y1,ptr2,0);
	       putimage(x2,y2,ptr2,0);
	       putimage(x3,y3,ptr2,0);
	       putimage(x4,y4,ptr2,0);
	       putimage(x5,y5,ptr2,0);
	       putimage(x,430,ptr,0);
	       hidemouseptr();
	       setcolor(RED);
	       circle(x,y,10);
	       line(x,y-10,x,y+10);
	       line(x-10,y,x+10,y);
	       sound(a);
	       a+=5;
	       x1+=l1;
	       x2+=l2;
	       x3+=l3;
	       x4+=l4;
	       x5+=l5;
	       if(x2==624 )
	       x2=0;
	       if(x1==624)
	       x1=0;
	       if(x3==630 )
	       x3=0;
	       if(x4==624)
	       x4=0;
	       if(x5==630)
	       x5=0;
	       if(a==2500)
	       a=200;

	   if(cl==1)
	   {
		hidemouseptr();
		X=x;
		Y=y;

		/*putimage(x,y,ptr1,0);
		sound(a*2);
		delay(50);
		nosound();
		sound(a*3);
		delay(40);
		nosound();  */

	      if(X>=x1 && X<=x1+110 && Y>=65 && Y<=95)
	      {

		 x1=0;
		 y1=50;
		 shoot++;

	      }
	      if(X>=x2 && X<=x2+110 && Y>=15 && Y<=45)
	      {

		x2=0;

		shoot++;
	      }
	      if(X>=x3 && X<=x3+110 && Y>=115 && Y<=145)
	      {

		x3=0;

		shoot++;
	      }
	      if(X>=x4 && X<=x4+110 && Y>=165 && Y<=195)
	      {

		x4=0;

		shoot++;
	      }
	      if(X>=x5 && X<=x5+110 && Y>=215 && Y<=245)
	      {

		x5=0;

		shoot++;
	      }

	  if(shoot==5)
	  {

	  cleardevice();
	  settextstyle(0,0,3);
	  outtextxy(200,200,"LEVEL 2");
	  settextstyle(0,0,0);

	  l1=3;
	  l2=6;
	  l3=6;
	  l4=8;
	  l5=5;
	  x1=0;
	  x2=0;
	  x3=0;
	  x4=0;
	  x5=0;
	  speed-=50;
	  nosound();
	  getch();
	  }
	  if(shoot==10)
	  {
	  cleardevice();
	  l1=6;
	  l2=8;
	  l3=7;
	  l4=8;
	  l5=9;

	  x1=0;
	  x2=0;
	  x3=0;
	  x4=0;
	  x5=0;
	  settextstyle(0,0,3);
	  outtextxy(200,200,"LEVEL3");
	  settextstyle(0,0,0);
	  speed-=50;
	  nosound();
	  getch();
	  }
	  if(shoot==15)
	  {
	  cleardevice();
	  l1=8;
	  l2=12;
	  l3=10;
	  l4=12;
	  l5=10;

	  x1=0;
	  x2=0;
	  x3=0;
	  x4=0;
	  x5=0;

	  settextstyle(0,0,3);
	  outtextxy(200,200,"LEVEL4");
	  settextstyle(0,0,0);
	  speed-=50;
	  nosound();
	  getch();
	  }
	  if(shoot==20)
	  {
	  cleardevice();

	  l1=12;
	  l2=16;
	  l3=14;
	  l4=12;
	  l5=10;

	  x1=0;
	  x2=0;
	  x3=0;
	  x4=0;
	  x5=0;
	  settextstyle(0,0,3);
	  outtextxy(200,200,"LEVEL5");
	  settextstyle(0,0,0);
	  speed-=50;
	  nosound();
	  getch();
	  }
	  if(shoot==25)
	  {
	  cleardevice();
	  l1=16;
	  l2=12;
	  l3=18;
	  l4=16;
	  l5=15;

	  x1=0;
	  x2=0;
	  x3=0;
	  x4=0;
	  x5=0;

	  settextstyle(0,0,3);
	  outtextxy(200,200,"LEVEL6");
	  settextstyle(0,0,0);
	  speed-=50;
	  nosound();
	  getch();
	  }
	  if(shoot==30)
	  {
	  cleardevice();
	  l1=24;
	  l2=16;
	  l3=18;
	  l4=24;
	  l5=18;

	  x1=0;
	  x2=0;
	  x3=0;
	  x4=0;
	  x5=0;

	  settextstyle(0,0,3);
	  outtextxy(200,200,"LEVEL7");
	  settextstyle(0,0,0);
	  speed-=50;
	  nosound();
	  getch();

	  }
	  if(shoot>=40)
	  {
	  cleardevice();
	  settextstyle(0,0,5);
	  outtextxy(100,200,"GAME COMPLETE");

	  settextstyle(0,0,0);
	  nosound();
	  printf("Number of shoots=%d",shoot);
	  getch();
	  exit(0);
	  }
	  nosound();
       }

	  delay(10);



	 cleardevice();
       }

	nosound();
	cleardevice();
	getch();
	printf("Number of shoots=%d",shoot);

	getch();
}
