#include<stdio.h>
int main(void)
{
	int a[10],b[10];
	int i,j;
	int c=1;
	int d=8;
	for(i=0;i<10;i++)
	{
		a[i]=c;
		c+=3;
	}
	for(j=0;j<10;j++)
	{
		b[j]=d;
		d+=a[j+1];
	}
	int sum=0;
	for(i=0;i<10;i++)
	{
		sum+=b[i];
	}
	printf("%d",sum);
	getchar();
	getchar();
    return 0;
}