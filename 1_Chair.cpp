#include<stdio.h>
#include<graphics.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm," ");
    line(150,200,300,200);
    line(150,200,50,350);
    line(50,350,250,350);
    line(250,350,250,450);
    line(50,350,50,450);
    line(150,350,150,450);
    line(300,200,300,400);
    line(160,25,160,200);
    line(290,20,290,200);
    line(150,200,300,200);
    line(250,350,300,200);




    getch();
    closegraph();
    return 0;
}
