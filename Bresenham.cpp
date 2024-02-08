#include<stdio.h>
#include<graphics.h>
int main()
                  {
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    float x1,y1,x2,y2;
    int colorCode;
    printf("Enter the value of x1 : ");
    scanf("%f",&x1);
    printf("Enter the value of y1 : ");
    scanf("%f",&y1);
    printf("Enter the value of x2 : ");
    scanf("%f",&x2);
    printf("Enter the value of y2 : ");
    scanf("%f",&y2);
    printf("Enter the color code for color : ");
    scanf("%d",&colorCode);
    float dellX = abs(x2-x1);
    float dellY = abs(y2-y1);
    float m = dellY/dellX;
    float pk = ((2*dellY) - dellX);
    bool conditionForLoop = true;
    for(int i=0;conditionForLoop==true;i++){
    putpixel(x1,y1,colorCode);
    if(x1==x2 || y1==y2)
    conditionForLoop = false;
    if(pk<0){
    pk=pk+(2*dellY);
    x1=x1+1;
    y1=y1;
    }
    else{
    pk=pk+(2*dellY)-(2*dellX);
    x1=x1+1;
   y1=y1+1;
   }
   delay(20);
   }
   getch();
   closegraph();
   return 0;

}

