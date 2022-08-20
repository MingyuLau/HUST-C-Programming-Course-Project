#include<stdio.h>
int main(void)
{
	int a;
	int i;
	for(a=2;a<=100;a++)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				break;
			}
		}
		if(i>=a)
		{
			printf("%d\t",a);
		}
	}
	getchar();
	getchar();
    return 0;
}