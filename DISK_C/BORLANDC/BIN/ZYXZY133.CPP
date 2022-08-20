#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a,b,i;
	int op;
	char ops[4]={'+','-','*'};
	int r0,r1,score=0;
	randomize();
	for(i=0;i<10;i++)
	{
		op=random(3);
		switch(op)
		{
			case 0:
			a=random(100);
			b=random(100);
			r0=a+b;
			break;
			case 1:
			a=random(100);
			b=random(100);
			r0=a-b;
			break;
			case 2:
			a=random(100);
			b=random(100);
			r0=a*b;
			break;


		}
		printf("%d %c %d=",a,ops[op],b);
		scanf("%d",&r1);
		if(r0==r1)
		{
			score+=10;
			printf("true\n");

		}
		else
		{
			printf("flase\n");
		}
	}
	printf("your score is:%d\n",score);
	getchar();
	getchar();
    return 0;
}