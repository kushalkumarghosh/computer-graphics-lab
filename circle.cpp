#include<stdio.h>
#include<graphics.h>
int main ()
{

int gm = DETECT, gd;
initgraph(&gm,&gd,"");

line(100,200,400,200);
circle(600,200,100);

getch();
closegraph();
}
