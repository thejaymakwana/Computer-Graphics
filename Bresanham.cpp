#include<graphics.h>
#include<conio.h>

 void drawline(int x0, int y0, int x1, int y1)
 {
 	int dx,dy,p,x,y;
 	
 	dx=x1-x0;
 	dy=y1-y0;
 	
 	x=x0;
 	y=y0;
 	
 	p=2*dy-dx;
 	
 	while(x<x1)
 	{
 		if(p>=0)
 		{
		 putpixel(x,y,7);
		 p=p+2*dy-2*dx;
		 y=y+1;
		 // y=y+y1; // dotted line
		 delay(300);

		 }
		 else
		 {
		 	putpixel(x,y,7);
		 	p=p+2*dy;
		 	delay(300);
		 }
		 x=x+1;
	 }
	 
 }
 
 int main()
 {
 	int gd=DETECT, gm, error, x0, y0, x1,y1;
 	initgraph(&gd,&gm,(char*)"C:\TURBOCE\BGI");
 	
 	printf("enter Co-ordinates of first point:");
 	scanf("%d%d",&x0,&y0);
 	
 	printf("enter Co-ordinates of second point:");
 	scanf("%d%d",&x1,&y1);
 	drawline(x0,y0,x1,y1);
 	delay(500);
 	closegraph();
 	return 0;
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
