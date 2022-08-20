#include<stdio.h>
int main(void)
{
	int a,b,c,i;
    a=10;
	b=-3;
	printf("%d\n",a);
	printf("%d\n",b);
    for(i=0;i<8;i++)
    {
        c=3*b+a;
        printf("%d\n",c);
		a=b;
        b=c;

	}
	getchar();
    getchar();
    return 0;
}