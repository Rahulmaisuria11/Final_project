#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int r,dp,x,y,xc,yc;
clrscr();
initgraph(&gd,&gm,"c:/Tc/BG/");
printf("enter the radius of circle");
scanf("%d", &r);
printf("enter the coordinator of circle");
scanf("%d", &xc);
scanf("%d", &yc);
dp=1-r;
x=0;
y=r;
do
{
putpixel(xc+x,yc+y,RED);
putpixel(xc-y,yc-x,RED);
putpixel(xc+y,yc-x,RED);
putpixel(xc-y,yc+x,RED);
putpixel(xc+y,yc+x,RED);
putpixel(xc-x,yc-y,RED);
putpixel(xc+x,yc-y,RED);
putpixel(xc-x,yc+y,RED);
x=x+1;
if(dp<0)
{
dp=dp+2*x+1;
}
else
{
y=y+1;
dp=dp+2*(x-y)+1;
}
}
while(x<y);
getch();
}
