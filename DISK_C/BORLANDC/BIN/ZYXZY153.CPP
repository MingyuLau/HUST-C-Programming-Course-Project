#include<stdio.h>
int main(void)
{
	int a,b,c;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			for(c=0;c<=9;c++)
			{
				if(a*a*a+b*b*b+c*c*c==100*a+10*b+c)
				{
					printf("%d\t",100*a+10*b+c);
				}
			}
		}
	}
	getchar();
    return 0;
}
