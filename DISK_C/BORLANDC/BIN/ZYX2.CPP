#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		switch(i)
		{
			case 1:
				printf("1\n");
                break;
			case 2:
				printf("22\n");
				break;
			case 3:
				printf("333\n");
			case 4:
				printf("4444\n");
			case 5:
				printf("55555\n");
		}
	}
}