#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>

void man();
void car();
void welcome();
void ldroad();
void road();
void road1();
void road2();
void road3();
void longdrive();
void tree(int);
void home();
void catlog();
void hut();
void buy();
static int z=1,e=0,i=30;
void main()

{
   clrscr();

x:
car();
man();



}

void welcome()
{
int a=DETECT,b,x,y;
initgraph(&a,&b, "");
	y=410;
	while(y>-20)
	{

	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(0,y,"  ");
	       delay(5);  setcolor(2);
		outtextxy(0,y,"บ");
	       delay(4);
	      y--;


	}
		y=-30;
	while(y<620)
	{
	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(y,0,"  ");
	       delay(5);  setcolor(2);
		outtextxy(y,0,"ออ");
	       delay(5);
	      y++;


	}
		y=-20;
	while(y<400)
	{

	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(600,y,"  ");
	       delay(5);  setcolor(2);
		outtextxy(600,y,"บ");
	       delay(5);
	      y++;


	}
	y=620;
	while(y>0)
	{

	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(y,400,"");
	       delay(5);
	       setcolor(2);
	       outtextxy(y,400,"ออ");
	       delay(5);
	       y--;


	}
	 settextstyle(3,0,6);
	       setcolor(3);
	       outtextxy(50,100,"program B y");
	delay(600);
	 settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(50,200,"S");       	delay(600);
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(120,200,"H");          	delay(600);
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(190,200,"A");          	delay(600);
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(260,200,"H");          	delay(600);
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(330,200,"K");          	delay(600);
	       settextstyle(3,0,12);
	       setcolor(7);
	       outtextxy(330,200,"K");          	delay(600);
settextstyle(3,0,12);
	       setcolor(BLACK);
	       outtextxy(330,200,"K");   delay(600);
	       settextstyle(0,0,12);
	       setcolor(3);
	       outtextxy(330,240,"C"); 	delay(600);
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(420,200,"A");                 	delay(600);
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(490,200,"R");                 	delay(600);
	       cleardevice();
	       y=410;
while(y>-20)
	{

	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(0,y,"  ");
		setcolor(2);
		outtextxy(0,y,"บ");

	      y--;


	}
		y=-30;
	while(y<620)
	{
	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(y,0,"  ");
		setcolor(2);
		outtextxy(y,0,"ออ");
		    y++;


	}
		y=-20;
	while(y<400)
	{

	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(600,y,"  ");
	   setcolor(2);
	      outtextxy(600,y,"บ");

	      y++;


	}
	y=620;
	while(y>0)
	{

	       settextstyle(1,0,6);
	       setcolor(8);
	       outtextxy(y,400,"");

	       setcolor(2);
	       outtextxy(y,400,"ออ");

	       y--;


	}
	 settextstyle(3,0,6);
	       setcolor(3);
	       outtextxy(50,100,"        B y");

settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(190,200,"A");
	       settextstyle(0,0,12);
	       setcolor(3);
	       outtextxy(330,240,"C");
settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(420,200,"A");
	       settextstyle(3,0,12);
	       setcolor(3);
	       outtextxy(490,200,"R");
	       delay(600);
		 settextstyle(3,0,6);
	       setcolor(3);
	       outtextxy(50,100,"         u ");


getch();
closegraph();
}


//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
      void car()
      {
       textcolor(YELLOW);


	gotoxy(1,2);
	cprintf("  _______         |      ____________    |        ______    |         _______");
	gotoxy(1,3);
	cprintf(" /______/\"=,      |  ____//__][__\\___\\   |   ____//__][_\\   | ______//__][_\\__");
	gotoxy(1,4);

	cprintf("[     | \"=, \"=,,  | (o _ |  -|   _   o|  |  [o _ |  -| _ \\  |/o _   |  -| _   \\ ");
	gotoxy(1,5);
	cprintf("[-----+----\"=,* ) | `(_)-------(_)---'   |  `(_)-----(_)-'  |`-(_)-------(_)---'");
	gotoxy(1,6);
	cprintf(" (_---_____---_)/ |                      |                  |  ");
	gotoxy(1,7);
	cprintf("  (O)     (O)     |                      |                  |   ");
	gotoxy(1,8);
	cprintf("_________________ | _____________________|__________________|__________________ ");
	gotoxy(1,9);
	cprintf("take a test drive |    take a test drive | take a test drive| take a test drive ");
	gotoxy(1,10);
	cprintf("------------------| ---------------------|------------------|------------------");
	gotoxy(1,11);
	printf("|L| ");
	gotoxy(1,12);
	printf("|O| ");
	gotoxy(1,13);
	printf("|N| ");
	gotoxy(1,14);
	printf("|G| ");
	gotoxy(1,15);
	printf("| | ");
	gotoxy(1,16);
	printf("|D| ");
	gotoxy(1,17);
	printf("|R| ");
	gotoxy(1,18);
	printf("|I| ");
	gotoxy(1,19);
	printf("|V| ");
	gotoxy(1,20);
	printf("|E| ");



	gotoxy(1,22);
	printf("|---------|                                                      |^^^^^^^^^^^| ");
	gotoxy(1,23);
	printf("| catlog  |                                                      |  GO HOME  |");
	gotoxy(1,24);
	printf("|---------|                                                      |___________| ");
       }

//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
void man()
{
int x=29,y=20,down;
char i;

while (1)
{
i=getch();
s:

if(x>=60&&y>=22||x>=60&&y>=23||x>=60&&y>=24||x>=60&&y>=25)
{
home();
}

if(x==12&&y>=21&&x==12&&y<=26||x==12&&y==24)
{  clrscr();
catlog();
}
if(x==4&&y>=11&&y<=20)
{      clrscr();
longdrive();
}
if(x>=61&&z==1&&x<=79&&y==10)
{
road3();
clrscr();
car();
man();


  }
if(z==1&&x>=44&&x<=60&&y==10)
{
road2();
clrscr();
car();
man();


}
if(z==1&&x>=21&&x<=41&&y==10)
{
road1();
clrscr();
car();
man();


}
if(x>=1&&x<=18&&y==10)
{
road();
clrscr();
car();
man();


}
if(z>1&&x>=61&&x<=79&&y==14)
{
road3();
clrscr();
buy();


}
if(z>1&&x>=44&&x<=60&&y==14)
{
road2();
clrscr();
buy();
}
if(z>1&&x>=21&&x<=41&&y==14)
{
road1();
clrscr();
buy();
}
if(z>1&&x>=1&&x<=18&&y==14)
{
road();
clrscr();
buy();


}
if(x>=70)
{
x--;
}
if(x<=1)
{      x++;
}
if(y<=1)
{
y++;
}
if(y>=29)
{
y--;
}

if(i==72&&i==75)
{
gotoxy(x,y-1);
printf("      ");
gotoxy(x,y);
printf("   \2 ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   X ");
delay(116);
gotoxy(x,y);
printf("   \2 ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   K  ");
 gotoxy(x,y+3);
printf("      ");
x--;
y--;
}
if(i==77&&i==80)
{
gotoxy(x,y-1);
printf("      ");
gotoxy(x,y);
printf("   \2    ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   X ");
delay(116);
gotoxy(x,y);
printf("   \2     ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   K  ");
 gotoxy(x,y+3);
printf("      ");
x++;
y++;
}
if(i==75&&i==80)
{
gotoxy(x,y-1);
printf("      ");
gotoxy(x,y);
printf("   \2   ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   X     ");
delay(116);
gotoxy(x,y);
printf("   \2     ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   K  ");
 gotoxy(x,y-1);
printf("      ");
x--;
y++;
}
if(i==72&&i==77)
{
gotoxy(x,y);
printf("   \2  ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   K ");
delay(116);
gotoxy(x,y);
printf("   \2  ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   X ");
gotoxy(x,y+3);
printf("                ");

y--;
x++;
}
if(i==72)
{
gotoxy(x,y);
printf("   \2  ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   K ");
delay(116);
gotoxy(x,y);
printf("   \2  ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   X ");
gotoxy(x,y+3);
printf("                ");

y--;
}

if(i==80)
{
gotoxy(x,y-1);
printf("                ");
gotoxy(x,y);
printf("   \2  ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   K ");
delay(116);
gotoxy(x,y);
printf("   \2  ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   K ");
gotoxy(x,y-1);
printf("                 ");
y++;
}
if(i==75)
{
gotoxy(x,y-1);
printf("      ");
gotoxy(x,y);
printf("   \2     ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   X ");
delay(116);
gotoxy(x,y);
printf("   \2      ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   K ");
gotoxy(x,y-1);
printf("      ");
gotoxy(x,y+3);
printf("       ");
x--;
}
if(i==77)
{
gotoxy(x,y-1);
printf("      ");
gotoxy(x,y);
printf("   \2 ");
gotoxy(x,y+1);
printf("  /|\\ ");
gotoxy(x,y+2);
printf("   X ");
delay(116);
gotoxy(x,y);
printf("   \2 ");
gotoxy(x,y+1);
printf("  <|> ");
gotoxy(x,y+2);
printf("   K  ");
 gotoxy(x,y+3);
printf("      ");
x++;
}
}
}

//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[


 void road()
 {
 int a;
	gotoxy(1,22);
	printf("________________________________________________________________________________");
		gotoxy(1,21);
	printf("================================================================================");
	gotoxy(1,24);
	printf("===============================================================================");
	   for(a=3;a<66;a++)
		{
	gotoxy(a,18);
	printf("   _______                  ");
	gotoxy(a,19);
	printf("  /______/\"=,                                                                      ");
	gotoxy(a,20);
	printf(" [    | o\"=, \"=,, ");
	gotoxy(a,21);
	printf("=[-----+---\"=,* )=");
	gotoxy(a,22);
	printf("_(_---_____---_)/_");
	gotoxy(a,23);
	printf("  (O)     (O) ");
	delay(50);
	}
	for(a=66;a> 3;a--)
	{
	gotoxy(a,18);
	printf("   _______  ");
	gotoxy(a,19);
	printf("  /______/\"=,                                                                      ");
	gotoxy(a,20);
	printf(" [    | o\"=, \"=,, ");
	gotoxy(a,21);
	printf("=[-----+---\"=,* )=");
	gotoxy(a,22);
	printf("_(_---_____---_)/_");
	gotoxy(a,23);
	printf("  (O)     (O) ");
	delay(50);
	}

		}
		void road1()
 {
 int a;
	gotoxy(1,22);
	printf("________________________________________________________________________________");
		gotoxy(1,21);
	printf("================================================================================");
	gotoxy(1,24);
	printf("===============================================================================");
		for(a=60;a>0;a--)
		{
		gotoxy(a,19);
		printf("       ____________    " );
		gotoxy(a,20);
		printf("  ____//__][__\\___\\  " );
		gotoxy(a,21);
		printf("=(o _ |  -|   _   o|=" );
		gotoxy(a,22);
		printf("_`(_)-------(_)---'_");
		delay(50);
		}
		sound(400);
		delay(1000);
		nosound();
			for(a=2;a<60;a++)
		{
		gotoxy(a,19);
		printf("       ____________ " );
		gotoxy(a,20);
		printf("  ____//__][__\\___\\  " );
		gotoxy(a,21);
		printf("=(o _ |  -|   _   o|=" );
		gotoxy(a,22);
		printf("_`(_)-------(_)---'_");
		delay(50);
		}
		}
  void road2()
 {
 int a;
	gotoxy(1,22);
	printf("________________________________________________________________________________");
		gotoxy(1,21);
	printf("================================================================================");
	gotoxy(1,24);
	printf("===============================================================================");
		for(a=60;a>0;a--)
		{
		gotoxy(a,19);
		printf("        ______    " );
		gotoxy(a,20);
		printf("   ____//__][_\\   " );
		gotoxy(a,21);
		printf("==[o _ |  -| _ \\=" );
		gotoxy(a,22);
		printf("__`(_)-----(_)-'_");
		delay(50);
		}
		sound(400);
		delay(1000);
		nosound();
			for(a=2;a<60;a++)
		{
		gotoxy(a,19);
		printf("        ______   " );
		gotoxy(a,20);
		printf("   ____//__][_\\   " );
		gotoxy(a,21);
		printf("==[o _ |  -| _ \\=" );
		gotoxy(a,22);
		printf("__`(_)-----(_)-'_");
		delay(50);
		}
		}

  void road3()
 {
 int a;
	gotoxy(1,22);
	printf("________________________________________________________________________________");
		gotoxy(1,21);
	printf("================================================================================");
	gotoxy(1,24);
	printf("===============================================================================");
		for(a=60;a>0;a--)
		{
		gotoxy(a,19);
		printf("        _______ ");
		gotoxy(a,20);
		printf(" ______//__][_\\__ " );
		gotoxy(a,21);
		printf("=/o _   |  -| _   \\=" );
		gotoxy(a,22);
		printf("_`-(_)-------(_)---'_");
		delay(50);
		}
		sound(400);
		delay(1000);
		nosound();
			for(a=2;a<60;a++)
		{
		gotoxy(a,19);
		printf("        _______ " );
		gotoxy(a,20);
		printf(" ______//__][_\\__ " );
		gotoxy(a,21);
		printf("=/o _   |  -| _   \\=" );
		gotoxy(a,22);
		printf("_`-(_)-------(_)---'_");
		delay(50);
		}
		}
void home()
{
       int a,b;
       clrscr();
       for(a=4,b=18;a<=30;a+=3,b--)
       {        hut();
		gotoxy(a,b);
		printf("\f");

		delay(1116);
		gotoxy(a,b);
		printf("    ");



	} welcome();
	exit(2);
}
void catlog()
{
	gotoxy(1,2);
	cprintf("  _______         |      ____________    |        ______    |         _______");
	gotoxy(1,3);
	cprintf(" /______/\"=,      |  ____//__][__\\___\\   |   ____//__][_\\   | ______//__][_\\__");
	gotoxy(1,4);
	cprintf("[     | \"=, \"=,,  | (o _ |  -|   _   o|  |  [o _ |  -| _ \\  |/o _   |  -| _   \\ ");
	gotoxy(1,5);
	cprintf("[-----+----\"=,* ) | `(_)-------(_)---'   |  `(_)-----(_)-'  |`-(_)-------(_)---'");
	gotoxy(1,6);
	cprintf(" (_---_____---_)  |                      |                  |                     ");
	gotoxy(1,7);

	cprintf("NAME:MARUTHI ZEN  |NAME:TOYOTA COROLLA   |NAME:MERCEDES BENZ|NAME:HYUNDAI ELENTRA  		     ");
	gotoxy(1,8);
	cprintf("MAXSPEED:160kms/hr|MAXSPEED:200kms/hr    |MAXSPEED:200kms/hr|MAXSPEED:200kms/hr  ");
	gotoxy(1,9);
	cprintf("MILAGE:18kms/litre|MILAGE:15kms/litre    |MILAGE:15kms/litre|MILAGE:15kms/litre  ");
	gotoxy(1,10);
	cprintf("COLORS:w,b,r,y    |COLORS:white,black    |COLORS:RED        |COLORS:w,b,r         		     ");
	gotoxy(1,11);
	cprintf("ACCOMODATION:5    |ACCOMODATION:12       | ACCOMODATION:6  |ACCOMODATION:8    		     ");
	gotoxy(1,12);
	cprintf("ONROADPRICE:6LAKHS| ONROADPRICE:6LAKHS	  |ONROADPRICE:6LAKHS|ONROADPRICE:6LAKHS		   ");
	gotoxy(1,13);
	cprintf("                  |                      |                  |                     ");
	gotoxy(1,14);
	cprintf("                  |                      |                  |                     ");
	gotoxy(1,15);
	cprintf("      BUY         |         BUY          |         BUY      |          BUY        ");
       z++;
}
void hut()
{
gotoxy(30,5 );printf("          __     ");
gotoxy(30,6 );printf("         //\\\\   ");
gotoxy(30,7 );printf("       //    \\\\  ");
gotoxy(30,8 );printf("      ||-----||~~~~~~~~~||");
gotoxy(30,9 );printf("      ||  _ ||          ||");
gotoxy(30,10);printf("      || | |||          ||");

}

void building()
{
clrscr();
gotoxy(45,7);printf("                        S~~    ");
gotoxy(45,8);printf("                        |      ");
gotoxy(45,9);printf("                        /\\     ");
gotoxy(45,10);printf("              S~~       || S~~         ");
gotoxy(45,11);printf("          S~~ |     S~ shah|           ");
gotoxy(45,12);printf("          |  /\"\\   |  | |/\\S~~       ");
gotoxy(45,13);printf("         /\"\\ kar  /\"\ |'|kar|         ");
gotoxy(45,14);printf("        shah/\\| /   \\|'/\\|/\"\\        ");
gotoxy(45,15);printf("        |   /__\\/]kar[\/__\shah       ");
gotoxy(45,16);printf("        |\"  shah'|I_I|'shah' |       ");
gotoxy(45,17);printf("        |:::|s||/  -  \||s|:::|       ");
gotoxy(45,18);printf("        |:::|h||SHAHKAR||h|:::|       ");
gotoxy(45,19);printf("        |:::|a|| |[_]| ||a|:::|       ");
gotoxy(45,20);printf("        |:::|h||_|###|_||h|:::|       ");
gotoxy(45,21);printf("        '---'--'-/___\\-'--'---'       ");
}
void buy()
{
int a;
clrscr();
building();
for(a=2;a<=45;a++)
{
gotoxy(a,19);printf("   ___   ");
gotoxy(a,20);printf("  l | o\\");
gotoxy(a,21);printf("  0----0|");
delay(500);
}
welcome();
exit(4);
 }
//==================================================================================
//===================================================================================

void  tree(int d)
 { i++; int j;
   char c[15][41]={"program","by","mohammed"  ,"shahkar" ,"ahmed","from","hyderabad","engineering","1st yr","cse","branch","in","moghal","college","i think u r on a real long drive"} ;
  gotoxy(d,12);printf("                  *            <%s>                                             ",c[e]);
  gotoxy(d,13);printf("                 ***           /          _____________       _ - - -_            ");
  gotoxy(d,14);printf("               *******        \2          /  \\          |    ,'         -         ");
  gotoxy(d,15);printf("              *********      <|>        /    \\ ________|   (           )       ");
  gotoxy(d,16);printf("     .       ***********      X        |   _  |       _|   \\.. _   _../             ");
  gotoxy(d,17);printf("    **           | |                   |  | | |        |        ) (              ");
  gotoxy(d,18);printf("   ****          | |                   |  | | |        |                          ");
  gotoxy(d,19);printf(" ********   \f\f");
  gotoxy(d,20);printf("    || ");
  j=i%60;
  if(j==0)
  e++;

 }
  void ldroad()
 {
 static int l;
 static float m=15;
 int a,j=5,b,c,k=0,d;
 char i;
 clrscr();    	for(d=0;d<=10;d++)
	{

		for(c=10;c>=d;c--)
		{
			textcolor(9);
			cprintf("s");
		}
		for(b=0;b<=d;b++)
		{
			textcolor(4);
			cprintf("hh");
		}
		for(c=10;c>=d;c--)
		{
			textcolor(9);
			cprintf("aa");
		}
		for(b=0;b<=d;b++)
		{
			textcolor(4);
			cprintf("hh");
		}
		for(c=10;c>=d;c--)
		{
			textcolor(9);
			cprintf("kk");
		}
		for(b=0;b<=d;b++)
		{
			textcolor(4);
			cprintf("aa");
		}
		for(c=10;c>=d;c--)
		{
			textcolor(9);
			cprintf("r");
		}
		printf("\n");
	}
	gotoxy(1,22);                l++;
	printf("________________________________________________________________________________");
		gotoxy(1,21);
	printf("================================================================================");
	gotoxy(1,24);
	printf("===============================================================================");
		for(a=60;a>0;)
		{
		  i=getch();
		  if(i=='b')
		  main();

		a--;
		gotoxy(a,19);
		printf("        ______    " );
		gotoxy(a,20);
		printf("   ____//__][_\\   " );
		gotoxy(a,21);
		printf("==[o _ |  -| _ \\=" );
		gotoxy(a,22);
		printf("__`(_)-----(_)-'_");
		j++;   gotoxy(17,28);
		printf("%d:%dkms                               fuel%flitres",l,k,m);
		tree(j);
		    k++; m-=0.0010001  ;
		    gotoxy(17,30);
		printf("press b for going back");


		delay(50);
		}
		  }


void longdrive()
 {
 char i;
 int a,b,c;

 a:

 gotoxy(1,20);
	printf("                                                                                ");
		gotoxy(1,23);
	printf("                                                                                ");
	 gotoxy(1,19);
	printf("                                                                                ");
		gotoxy(1,18);
	printf("                                                                                ");

	gotoxy(1,22);
	printf("____________________press f to move forward________________________________________");
		gotoxy(1,21);
	printf("================================================================================");
	gotoxy(1,24);
	printf("===============================================================================");
     i=getch();

     if(i=='f')
     ldroad();
     if(i=='b')
     main();
    goto a;
 }
