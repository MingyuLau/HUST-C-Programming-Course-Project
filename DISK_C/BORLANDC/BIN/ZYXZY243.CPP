#include<stdio.h>
int main(void)
{
	int a[10],b[10];
	int i,j;
	int d=1;
	int c=8;
	int sum=0;
	for(i=0;i<10;i++)
	{
		b[i]=d;
		d+=3;

	}
	for(j=0;j<10;j++)
	{
		a[i]=c;
		c+=b[j+1];
	}
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
	getchar();
	return 0;
}