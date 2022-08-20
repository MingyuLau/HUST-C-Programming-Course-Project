#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i,j;
	int a;
	randomize();
	a=random(100);
	for(i=1;;i++)
	{
		if(i>20)
		{
			printf("you failed\n");
			break;
		}
		else
		{
			printf("input\n");
			scanf("%d",&j);
			if(a==j)
			{
				printf("fuck you,you are right!\n");
				printf("%d\n",i);
				break;
			}
			else if(a<j)
			{
				printf("too big\n");
			}
			else
			{
				printf("too small\n");
			}
		}
	}
	getchar();
	getchar();
	return 0;
}