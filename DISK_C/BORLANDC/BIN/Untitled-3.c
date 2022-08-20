#include<stdio.h>
int main(void)
{
	int i;
	int a;
	while(1)
	{
		printf("\nplease intput a:");
		scanf("%d",&a);
		if(a==10000)   break;
		else
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
				printf("%d is sushu",a);
			}
			else
			{
				printf("%d is not a sushu",a);
			}
		}
	}
	getchar();
	getchar();
	return 0;
}