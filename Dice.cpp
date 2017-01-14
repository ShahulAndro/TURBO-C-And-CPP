#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>

int dice();
void setdice();

void main()
{
int gd=0,gm,a;
clrscr();
initgraph(&gd,&gm,"d:\\tc\\bgi");
a=dice();
getch();
}

int dice()
{
int x=500,y=200;
char msg[6];
int a;
randomize();

int key;
setdice();



key=getch();
if(key==13)
{
a=rand()%6+1;

setdice();

setcolor(3);
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
outtextxy(480,150,"DBCLICK");
outtextxy(480,160,"ENTER");
setcolor(6);
outtextxy(450,100,"DICE ROLLING");

}


