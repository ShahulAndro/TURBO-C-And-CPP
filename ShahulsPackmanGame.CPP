#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>

void box();
void rec();
void score();
void imag();
void pix();
void *ptr,*ptr1,*ptr2,*ptr3,*ptr4;
long int size,size1,size2,size3,size4;

void main()
{
int gd=0,gm,key,x=20,y=25;
int i1,i2,i3,i4;
  clrscr();
  initgraph(&gd,&gm,"d:\\tc\\bgi");

//  outtextxy(x,y,"1");
i1=0;
i2=0;
i3=0;
i4=0;
  box();
   setcolor(BLACK);
   setfillstyle(1,RED);
 pieslice(40,35,5,330,15);
 setfillstyle(1,GREEN);
 fillellipse(38,30,2,1);
 size=imagesize(25,20,55,50);
 ptr=malloc(size);
 getimage(25,20,55,50,ptr);
 cleardevice();
 putimage(40,35,ptr,0);

 cleardevice();
   setcolor(BLACK);
   setfillstyle(1,RED);
 fillellipse(40,35,15,15);
    setfillstyle(1,BLACK);
 pieslice(40,35,260,300,15);
 setfillstyle(1,GREEN);
 fillellipse(38,30,1,2);
 size1=imagesize(25,20,55,50);
 ptr1=malloc(size1);
 getimage(25,20,55,50,ptr1);
 cleardevice();
 putimage(40,35,ptr1,0);

   cleardevice();
    setfillstyle(1,RED);
 fillellipse(40,35,15,15);

    setfillstyle(1,BLACK);
 pieslice(40,35,80,120,15);
 setfillstyle(1,GREEN);
 fillellipse(45,38,1,2);
 size2=imagesize(25,20,55,50);
 ptr2=malloc(size2);
 getimage(25,20,55,50,ptr2);
 cleardevice();
 putimage(40,35,ptr2,0);

 cleardevice();
   setcolor(BLACK);
   setfillstyle(1,RED);
 fillellipse(40,35,15,15);

    setfillstyle(1,BLACK);
 pieslice(40,35,160,210,15);
 setfillstyle(1,GREEN);
 fillellipse(43,30,2,1);
 size3=imagesize(25,20,55,50);
 ptr3=malloc(size3);
 getimage(25,20,55,50,ptr3);
 cleardevice();
 putimage(40,35,ptr3,0);


cleardevice();
box();

putimage(x,y,ptr,0);


 do
  {
    key=getch();
      switch(key)
      {
      case 77: cleardevice();

	       box();
	       i1++;
	       if(x==170 && y==25)
	       {
	       x=x;
	       y=y;
	      }

	       else  if(x==120 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==170 && y==75)
	       {
	       x=x;
	       y=y;
	       }

	       else if(x==120 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==70 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==70 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==70 && y==225)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==70 && y==275)
	       {
	       x=x;
	       y=y;
	       }
	       else if(x==20 && y==225)
	       {
		x=x;
		y=y;
	       }
	       else if(x==120 && y== 325)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==170 && y==275)
	       {
		x=x;
		y=y;
	       }
	       else if( x==170 && y==325)
	       {
		x=x;
		y=y;
	       }
	       else if(x==220 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==220 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==220 && y==275)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==220 && y==325)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==270 && y==25)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==270 && y==75)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==270 && y==175)
	       {
	       x=x;
	       y=y;
	       }
	       else if(x==270 && y==325)
	       {
	       x=x;
	       y=y;
	       }
	       else if(x==320 && y==75)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==320 && y==175)
	       {
		x=x;
		y=y;
	       }
	       else if(x==320 && y==225)
	       {
		 x=x;
		 y=y;
	       }
	       else if(x==320 && y==325)
	       {
		x=x;
		y=y;
	       }
	       else if(x==370 && y==25)
	       {
		x=x;
		y=y;
	       }
	       else if(x==370 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	      else if(x==370 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==370 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==420 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==420 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==420 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==420 && y==25)
	      {
	      x=x;
	      y=y;
	      }

	       else if(x> 465)
	       {
	       x=x;
	       y=y;
	       }
	       else
//	       if(x<465)
	       {
		x=x+25;
		y=y;
	       }


	       putimage(x,y,ptr,0);
 //	       outtextxy(x,y,"1");
	       break;
      case 75:cleardevice();
	      box();
	       if(x==120 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==120 && y==175)
	       {
		 x=x;
		 y=y;
	       }

	      else if (x==120 && y==225)
	       {
		 x=x;
		 y=y;
	       }
	      else if (x==120 && y==275)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==70 && y==225)
	       {
		 x=x;
		 y=y;
	       }
		else if (x==170 && y==325)
	       {
		 x=x;
		 y=y;
	       }
		else if (x==170 && y==175)
	       {
		 x=x;
		 y=y;
	       }
		else if (x==170 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	      else if (x==220 && y==325)
	       {
		 x=x;
		 y=y;
	       }
	      else if (x==220 && y==275)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==220 && y==75)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==220 && y==25)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==270 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==270 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==270 && y==275)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==270 && y==325)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==320 && y==325)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==320 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==320 && y==75)
	       {
		 x=x;
		 y=y;
	       }
		else if (x==320 && y==25)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==370 && y==75)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==370 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==370 && y==225)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==370 && y==325)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==420 && y==325)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==420 && y==275)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==420 && y==175)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==420 && y==25)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==470 && y==25)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==470 && y==75)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==470 && y==125)
	       {
		 x=x;
		 y=y;
	       }
	       else if (x==470 && y==325)
	       {
		 x=x;
		 y=y;
	       }



	      else if(x<25)
	      {
		x=x;
		y=y;
	      }
	      else
	      //if(x>40)
	      {
	      x=x-25;
	      y=y;
	      }

	      putimage(x,y,ptr3,0);
  //	      outtextxy(x,y,"1");
	      break;
      case 80:cleardevice();
	      box();
	      if(x==20 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==45 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==70 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==95 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==70 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==45 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==45 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==20 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==20 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==45 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==70 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==95 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==20 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==45 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==70 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==95 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==120 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==145 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==170 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==195 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==170 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==195 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==220 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==170 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==145 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==195 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==145 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==245 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==245 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==245 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==270 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==295 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==320 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==295 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==270 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==295 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==345 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==345 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==345 && y==25)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==320 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==370 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==395 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==395 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==395 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==420 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==445 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==470 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==445 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==445 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==420 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==145 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else if(y>345)
	      {
	      x=x;
	      y=y;
	      }
	      else
	      //if(y<355)
	      {
	      y=y+50;
	      x=x;
	      }

	      putimage(x,y,ptr1,0);
//	      outtextxy(x,y,"1");
	      break;
      case 72:cleardevice();
	      box();
	      if(x==20 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==45 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==70 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==95 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==120 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==145 && y==75)
	      {
	      x=x;
	      y=y;
	      }

	      else if(x==20 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==45 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==70 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==95 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==70 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==45 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==20 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==45 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else if(x==20 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==45 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==70 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==95 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==95 && y==325)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==145 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==145 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==170 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==145 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==170 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==195 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==220 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==245 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==170 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==195 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==195 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==195 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==245 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==270 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==295 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==320 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==345 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==295 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==295 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==295 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==270 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==245 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==320 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==345 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==370 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==395 && y==125)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==395 && y==75)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==345 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==395 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==470 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==445 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==420 && y==275)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==445 && y==375)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==395 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==420 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==445 && y==225)
	      {
	      x=x;
	      y=y;
	      }
	      else  if(x==445 && y==175)
	      {
	      x=x;
	      y=y;
	      }
	     else if(y==25)
	      {
	      x=x;
	      y=y;
	      }
	      //if(y>35)
	      else
	      {
	      y=y-50;
	      x=x;
	      }

	      putimage(x,y,ptr2,0);
	      break;
     }
     delay(100);

     if(key==77 || key==72 || key==75 || key==80)
     {

     if(i1>=1)
     {
     setfillstyle(0,BLACK);
     bar(20,25,40,55);
     }
     if(i1>=2)
     {
     setfillstyle(0,BLACK);
     bar(20,25,70,55);
     }
     if(i1>=3)
     {
     setfillstyle(0,BLACK);
     bar(20,25,95,55);
     }
     if(i1>=4)
     {
     setfillstyle(0,BLACK);
     bar(20,25,120,55);
     }
     if(i1>=5)
     {
     setfillstyle(0,BLACK);
     bar(20,25,135,55);
     }
     if(i1>=6)
     {
     setfillstyle(0,BLACK);
     bar(20,25,160,55);
     }
     if(i1>=7)
     {
     setfillstyle(0,BLACK);
     bar(20,25,185,55);
     }
     }
     if(i1>=8)
     {
     setfillstyle(0,BLACK);
     bar(20,25,210,55);
     }

  }while(key!=27);
getch();
}
void box()
{
  //imag();
  pix();
  setfillstyle(1,GREEN);
  bar(10,10,210,15);//1
  bar(10,10,15,165);//2
  bar(10,60,160,65); //3
  bar(10,110,115,115);//4
  bar(110,110,115,210); //5
  bar(10,210,15,415);//6
  bar(10,410,210,415);//7
  bar(160,310,165,350);//8
  bar(110,210,115,310);//9
  bar(10,360,110,365);//10
  bar(10,260,60,265);//11
  bar(60,210,65,265);//12
  bar(160,260,210,265);//13
  bar(210,260,215,350);//14
  bar(160,110,165,210);//15
  bar(160,210,265,215);//16
  bar(260,210,265,110);//17
  bar(160,160,210,165);//18
  bar(210,10,215,110);//19
  bar(260,10,510,15);//20
  bar(510,10,515,160);//21
  bar(460,10,465,160);//22
  bar(410,10,415,60);//23
  bar(360,60,365,110);//24
  bar(310,10,315,110);//25
  bar(310,110,410,115);//26
  bar(260,60,310,65);//27
  bar(260,160,265,210);//28
  bar(310,160,315,210);
  bar(360,160,365,265);//29
  bar(410,160,415,210);//30
  bar(510,210,515,410);//31
  bar(260,410,510,415);//32
  bar(260,260,360,265);//33
  bar(410,210,460,215);//34
  bar(410,260,510,265);//35
  bar(460,310,465,350);//36
  bar(410,260,415,350);//37
  bar(360,310,365,350);//38
  bar(310,310,315,350);//39
  bar(260,260,265,350);//40
  bar(60,160,110,165);
  rec();
  score();
}
void rec()
{
  setfillstyle(1,5);
  bar(0,0,540,5);
  bar(540,0,545,430);
  bar(0,430,545,435);
  bar(0,0,5,430);
  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(120,435,"PACK MAN GAME");
}

void score()
{
  settextstyle(1,0,3);
  setcolor(YELLOW);
  outtextxy(560,100,"SCORE");
  setcolor(RED);
  rectangle(550,140,630,170);
  setcolor(BLUE);
 outtextxy(560,200,"TIME");
 setcolor(6);
 rectangle(550,230,630,260);
}

void imag()
{
 setfillstyle(1,RED);
 pieslice(40,35,5,330,10);
 setfillstyle(1,GREEN);
 fillellipse(38,30,2,1);
 size=imagesize(30,25,50,45);
 ptr=malloc(size);
 getimage(30,25,50,45,ptr);
 cleardevice();
 putimage(40,35,ptr,0);
}


void pix()
{

 int i,j,x1,x2,y1,y2;
   x1=20;
 y1=25;
// x2=20;
// y2=25;
setfillstyle(1,5);
 fillellipse(x1,y1,3,3);
 size4=imagesize(17,22,23,27);
 ptr4=malloc(size4);
 getimage(17,22,23,27,ptr4);
 cleardevice();

 for(i=40;i<=390;i+=50)
 {
 for(j=20;j<=500;j+=25)
 {

   putimage(j,i,ptr4,0);
 }
 }

}
