#include<graphics.h>
int main(){
int gd = DETECT,gm;
initgraph(&gd,&gm,"");
//body
setcolor(WHITE);
rectangle(200,200,280,390);
setfillstyle(SOLID_FILL,WHITE);
floodfill(201,201,WHITE);
// round
setcolor(WHITE);
ellipse(240,200,0,360,40,10);
setfillstyle(INTERLEAVE_FILL,WHITE);
floodfill(241,201,WHITE);
setcolor(WHITE);
//flame line
line(240,150, 240, 200);
// flame
setcolor(BROWN);
ellipse(240,150,0,360,5,30);
setfillstyle(XHATCH_FILL,BROWN);
floodfill(241,151,BROWN);
setcolor(BROWN);
outtextxy(300, 300 ," ");
getch();
closegraph();
return 0;
}
