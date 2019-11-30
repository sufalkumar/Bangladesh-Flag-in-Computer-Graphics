#include<stdio.h>
#include<graphics.h>
main(){

         int gd= DETECT, gm;
         initgraph(&gd, &gm, "");

         rectangle(150,40,450,180);
         setfillstyle(SOLID_FILL,GREEN);
         floodfill(151,151,WHITE);

         circle(295,110,55);
         setfillstyle(SOLID_FILL,RED);
         floodfill(295,110,WHITE);

         rectangle(138,35,150,450);
         bar(130,450,160,460);

         getch();
         closegraph();
         return 0;
}
