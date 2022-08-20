#include<stdio.h>
void main()
{
	int i;
	int a,b,c;
	for(i=1;i<=100;i++)
	{
		a=38;
		printf("I have just thought a number.Guess what.\n");
		printf("Input a number\n");
		scanf("%d",&b);
		c=a-b;
		if(c<0)
		{
			printf("taidale\n");
		}
		else if(c>0)
		{
			printf("taixiaole\n");
		}
		else
		{
			printf("zhenlihai.Congratulations! That is exactly the number\n");
		}

	}
}

