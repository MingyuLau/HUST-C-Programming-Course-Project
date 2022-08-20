#include<stdio.h>
#include<math.h>
int f(int a,int b)
{
	int r;
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}
int main()
{
	int a,b,r1;
	scanf("%d%d",&a,&b);
	r1=f(a,b);
	printf("%d\n",r1);
	printf("%d\n",a*b/r1);
	getchar();
	getchar();
    return 0;
}