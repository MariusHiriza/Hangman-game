#include <dos.h>
#include <stdlib.h>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>
#define TRUE 1;
#define FALSE 0
#include <string.h>
typedef int bool;
union REGS in,out;
int initmouse(){
    in.x.ax=0;
    int86(0x33,&in,&out);
    return(out.x.ax);
	       }
void mousepos(int *buton,int *x,int *y)
     {
     in.x.ax=3;
     int86(0x33,&in,&out);
     *buton=out.x.bx;
     *x=out.x.cx;
     *y=out.x.dx;
     }
int afisare(char a[50][50],int r)
     {
     int m,i,nr=0;
     m=5;
     for(i=0;i<strlen(a[r]);i++)
	{
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	if(a[r][i]==' ')
			outtextxy(m,300,"  ");
			else{
			    nr++;
			    outtextxy(m,300,"_");
			    }
	m+=25;
	}
     return nr;
     }
void program(char a[50][50],int r,int nr_litere)
{
int buton,l,p=0,i,x,y,z,q,w,t,m,v[20],n,aparitii=0;
char d[90];
bool da,g,h=0;
while(! kbhit())
{
mousepos(&buton,&x,&y);
if(buton==1)
  {
  x=out.x.cx;
  y=out.x.dx;
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
  if((x>=10)&&(x<=50)&&(y>=10)&&(y<=50))            {strcpy(d,"A");g=1;line(10,10,50,50);line(50,10,10,50);}
  if((x>=55)&&(x<=95)&&(y>=10)&&(y<=50))            {strcpy(d,"B");g=1;line(55,10,95,50);line(95,10,55,50);}
  if((x>=100)&&(x<=140)&&(y>=10)&&(y<=50))          {strcpy(d,"C");g=1;line(100,10,140,50);line(140,10,100,50);}
  if((x>=145)&&(x<=185)&&(y>=10)&&(y<=50))          {strcpy(d,"D");g=1;line(145,10,185,50);line(185,10,145,50);}
  if((x>=190)&&(x<=230)&&(y>=10)&&(y<=50))          {strcpy(d,"E");g=1;line(190,10,230,50);line(230,10,190,50);}
  if((x>=235)&&(x<=275)&&(y>=10)&&(y<=50))          {strcpy(d,"F");g=1;line(235,10,275,50);line(275,10,235,50);}
  if((x>=280)&&(x<=320)&&(y>=10)&&(y<=50))          {strcpy(d,"G");g=1;line(280,10,320,50);line(320,10,280,50);}
  if((x>=325)&&(x<=365)&&(y>=10)&&(y<=50))          {strcpy(d,"H");g=1;line(325,10,365,50);line(365,10,325,50);}
  if((x>=370)&&(x<=410)&&(y>=10)&&(y<=50))          {strcpy(d,"I");g=1;line(370,10,410,50);line(410,10,370,50);}
  if((x>=415)&&(x<=455)&&(y>=10)&&(y<=50))          {strcpy(d,"J");g=1;line(415,10,455,50);line(455,10,415,50);}
  if((x>=460)&&(x<=500)&&(y>=10)&&(y<=50))          {strcpy(d,"K");g=1;line(460,10,500,50);line(500,10,460,50);}
  if((x>=505)&&(x<=545)&&(y>=10)&&(y<=50))          {strcpy(d,"L");g=1;line(505,10,545,50);line(545,10,505,50);}
  if((x>=550)&&(x<=590)&&(y>=10)&&(y<=50))          {strcpy(d,"M");g=1;line(550,10,590,50);line(590,10,550,50);}
  if((x>=10)&&(x<=50)&&(y>=50)&&(y<=90))            {strcpy(d,"N");g=1;line(10,55,50,90);line(50,55,10,90);}
  if((x>=55)&&(x<=90)&&(y>=50)&&(y<=90))            {strcpy(d,"O");g=1;line(55,55,95,90);line(95,55,55,90);}
  if((x>=100)&&(x<=140)&&(y>=50)&&(y<=90))          {strcpy(d,"P");g=1;line(100,55,140,90);line(140,55,100,90);}
  if((x>=145)&&(x<=185)&&(y>=50)&&(y<=90))          {strcpy(d,"Q");g=1;line(145,55,185,90);line(185,55,145,90);}
  if((x>=190)&&(x<=230)&&(y>=50)&&(y<=90))          {strcpy(d,"R");g=1;line(190,55,230,90);line(230,55,190,90);}
  if((x>=235)&&(x<=275)&&(y>=50)&&(y<=90))          {strcpy(d,"S");g=1;line(235,55,275,90);line(275,55,235,90);}
  if((x>=280)&&(x<=320)&&(y>=50)&&(y<=90))          {strcpy(d,"T");g=1;line(280,55,320,90);line(320,55,280,90);}
  if((x>=325)&&(x<=365)&&(y>=50)&&(y<=90))          {strcpy(d,"U");g=1;line(325,55,365,90);line(365,55,325,90);}
  if((x>=370)&&(x<=410)&&(y>=50)&&(y<=90))          {strcpy(d,"V");g=1;line(370,55,410,90);line(410,55,370,90);}
  if((x>=415)&&(x<=455)&&(y>=50)&&(y<=90))          {strcpy(d,"W");g=1;line(415,55,455,90);line(455,55,415,90);}
  if((x>=460)&&(x<=500)&&(y>=50)&&(y<=90))          {strcpy(d,"X");g=1;line(460,55,500,90);line(500,55,460,90);}
  if((x>=505)&&(x<=545)&&(y>=50)&&(y<=90))          {strcpy(d,"Y");g=1;line(505,55,545,90);line(545,55,505,90);}
  if((x>=550)&&(x<=590)&&(y>=50)&&(y<=90))          {strcpy(d,"Z");g=1;line(550,55,590,90);line(590,55,550,90);}
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
  n=5;
  da=0;
  for(i=0;i<strlen(a[r]);i++)
	if(a[r][i]==d[0])
		da=1;
  if(da==1)
	{
	for(i=0;i<strlen(a[r]);i++)
		{
		if(a[r][i]==d[0])
			{
			outtextxy(n,312,d);
			h=1;
			if(h==1){
			aparitii++;
			h=0;
			delay(500);
			}
			}
		n+=25;
		}
		if(aparitii==nr_litere)
			{
			setcolor(RED);
			settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
			outtextxy(20,247,"!!!AI CASTIGAT!!!");
			delay(500);
			}
	       delay(500);
	}else
	     {
	     if(da==0 && g==1)
	      {
		p++;
		if(p==1)
		  {
		  circle(545,200,30);
		  sound(100);
		  delay(500);
		  nosound();
		  }
	     if(p==2)
	       {
	       line(545,230,545,260);
	       sound(100);
	       delay(500);
	       nosound();
	       }
	     if(p==3)
		{
		line(545,260,490,300);
		sound(100);
		delay(500);
		nosound();
		}
	     if(p==4)
		{
		line(545,260,600,300);
		sound(100);
		delay(500);
		nosound();
		}
	     if(p==5)
		{
		line(545,260,545,350);
		sound(100);
		delay(500);
		nosound();
		}
	     if(p==6)
		{
		line(545,350,490,400);
		sound(100);
		delay(500);
		nosound();
		}
	     if(p==7)
		{
		line(545,350,600,400);
		sound(100);
		delay(500);
		nosound();
		settextstyle(SMALL_FONT,HORIZ_DIR,7);
		outtextxy(5,360,"CUVANTUL ESTE:");
		setcolor(RED);
		outtextxy(170,360,a[r]);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
		outtextxy(20,247,"!!!AI PIERDUT!!!");
		}
		delay(1000);
	      }
	     }
  }
}
}
void main()
{
int buton,l,i,x,y,z,q,w,t,m,v[20],r,nr_litere=0;
char d[90],a[50][50]={"GLADIATOR","THE GODFATHER","SAW","TITANIC","TERMINATOR","SCHINDLER LIST","FAST AND FURIOUS"},b[50][50]={"CADILLAC","ASTON MARTIN","HUMMER","ROLLS ROYCE","VOLKSWAGEN","MERCEDES BENZ","TESLA"},c[50][50]={"VADUZ","LUXEMBURG","","VATICAN","BRASILIA","REYKJAVIK"};
int gdriver=DETECT,gmode,errorcode;
bool da,win,ww=0;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
initmouse();
in.x.ax=1;
int86(0x33,&in,&out);
line(387,439,500,439);
line(443,439,443,150);
line(443,150,545,150);
line(443,200,490,150);
line(545,150,545,170);
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(560,440,"M&H");
outtextxy(552,455,"GAMES");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
rectangle(40,120,200,160);
outtextxy(90,125,"FILME");
rectangle(40,165,200,205);
outtextxy(85,175,"MASINI");
rectangle(40,210,200,250);
outtextxy(75,215,"CAPITALE");
outtextxy(220,150,"ALEGE O CATEGORIE");
t=10;w=10;z=50;q=50;
srand(time(NULL));
r=rand()%7;
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
for(i=1;i<=26;i++)
   {
   rectangle(t,w,z,q);
   t+=45;
   z+=45;
   if(i%13==0){
	      t=10;
	      z=50;
	      w=z+5;
	      q=z+45;
	      }
   }
outtextxy(17,5,"A");outtextxy(65,5,"B");outtextxy(113,5,"C");outtextxy(151,5,"D");outtextxy(198,5,"E");outtextxy(246,5,"F");outtextxy(294,5,"G");outtextxy(333,5,"H");outtextxy(385,5,"I");outtextxy(430,5,"J");outtextxy(470,5,"K");outtextxy(515,5,"L");outtextxy(555,5,"M");outtextxy(17,47,"N");outtextxy(65,47,"O");outtextxy(113,47,"P");outtextxy(155,47,"Q");outtextxy(198,47,"R");outtextxy(246,47,"S");outtextxy(291,47,"T");outtextxy(333,47,"U");outtextxy(380,47,"V");outtextxy(422,47,"W");outtextxy(470,47,"X");outtextxy(511,47,"Y");outtextxy(558,47,"Z");
while(ww==0)
     {
     mousepos(&buton,&x,&y);
     if(buton==1)
	 {
	 x=out.x.cx;
	 y=out.x.dx;
	 if((x>=40)&&(x<=200)&&(y>120)&&(y<=160))
		{
		nr_litere=afisare(a,r);
		program(a,r,nr_litere);
		ww=1;
		}
	 if((x>=40)&&(x<=200)&&(y>=165)&&(y<=205))
		{
		nr_litere=afisare(b,r);
		program(b,r,nr_litere);
		ww=1;
		}
	 if((x>=40)&&(x<=200)&&(y>=210)&&(y<=250))
		{
		nr_litere=afisare(c,r);
		program(c,r,nr_litere);
		ww=1;
		}
	 }
     }
closegraph();
}
