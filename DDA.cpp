#include<stdio.h>
#include<graphics.h>
int main()
{

  int gd=DETECT,gm;
  initgraph(&gd,&gm," ");
  float x1,y1,x2,y2,x3,y3,m;
  printf("Enter the starting point & ending point: ");
  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
  x3=abs(x2-x1);
  y3=abs(y2-y1);
  m=y3/x3;

  if(m<1)
  {
    bool conditionforloop=true;
    for(int i=0;conditionforloop==true;i++)
    {

      putpixel(x1,y1,14);
      if(x1==x2 || y1==y2)
      {
        conditionforloop=false;
      }
      x1=x1+1;
      y1=y1+m;
      delay(100);
    }
  }

    else if(m>1)
  {
    bool conditionforloop=true;
    for(int i=0;conditionforloop==true;i++)
    {

      putpixel(x1,y1,14);
      if(x1==x2 || y1==y2)
      {
        conditionforloop=false;
      }
      x1=x1+(1/m);
      y1=y1+1;
      delay(100);
    }
  }

    else if(m==1)
  {
    bool conditionforloop=true;
    for(int i=0;conditionforloop==true;i++)
    {

      putpixel(x1,y1,14);
      if(x1==x2 || y1==y2)
      {
        conditionforloop=false;
      }
      x1=x1+1;
      y1=y1+1;
      delay(20);
    }
  }

  getch();
  closegraph();
  return 0;
}




