#include<graphics.h>
#include<conio.h>
main()
{
	int x;
    int graphdriver=DETECT;
	int graphmode;
	initgraph(&graphdriver,&graphmode,"c:\\borlandc\\bgi");
	cleardevice();
	setcolor(WHITE);


    getch();
	closegraph();
    return 0;
}