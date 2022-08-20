#include<stdio.h>
int main(void)
{
	int i,j,a,b,c;
	for(i=1;i<999;i++)
	{
		j=i%3;
		a=i/100;
		b=(i-100*a)/10;
		c=i%10;
		if(!j&&(a==5||b==5||c==5))
		{
			printf("%d\t",i);
		}

	}
	getchar();
	return 0;
}