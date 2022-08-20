#include<stdio.h>
int main(void)
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9.10,11,12}};
	int i,j,c,d;
	int max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				c=i;
				d=j;
			}
		}
	}
	printf("a[%d][%d]=%d\n",c,d,max);
    getchar();
	return 0;
}