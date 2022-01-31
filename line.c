#include<graphics.h>
#include<conio.h>

main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm, (char*)"C:/TC/BGI");
	
	line(100,100,300,300);
	lineto(250,455);
	
	getch();
	closegraph();
	return 0;
}
