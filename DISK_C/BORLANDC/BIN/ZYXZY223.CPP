#include<stdio.h>
int main(void)
{
	int i;
	int counter=0;
	printf("input \n");
	scanf("%d",&i);
	while(!(i%2))
	{
		i/=2;
		counter++;

	}
	printf("result=%d\n",counter);
	getchar();
	getchar();
    return 0;
}