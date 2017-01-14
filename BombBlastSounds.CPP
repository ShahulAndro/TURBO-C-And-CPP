#include<dos.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<graphics.h>
void Sound();
//void Loose();
void main()
{
clrscr();
//Loose ();
while(!kbhit())
{

Sound();
}
getch();
}

/*void Loose()
{
 //settextstyle(7,0,8);
// outtextxy(100,getmaxy()/3,"Game Over!");
  sound(700); delay(1100);
  sound(150); delay(240);
  sound(80);  delay(210);
  sound(600); delay(250);
 nosound();
 sleep(3);
exit ();
}       */
void Sound()
{
 for(int i=200;i>=1;i-=5)
 {
  for(int k=1;k<50;k++) sound(i*20);
  delay(3);
 }
 for(;i<=60;i+=5)
 {
  sound(i*10);
  delay(5);
 }
 nosound();
}
