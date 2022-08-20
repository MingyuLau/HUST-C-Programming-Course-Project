#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=2;i<=100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			else
			{
				if(j>=i-1)
				{
					printf("%d\t",i);
				}
			}
		}
	}
	getchar();
	return 0;
}