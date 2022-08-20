#include<stdio.h>
int main(void)
{
	int x,y,z;
	for(x=0;x<33;x++)
	{
		for(y=0;y<50;y++)
		{
			z=100-x-y;
			if((z%3==0)&&(3*x+2*y+z/3)==100)
			{
				printf("cock=%d,hen=%d,chicken=%d\n",x,y,z);
			}
		}
	}
	getchar();
	getchar();
    return 0;
}