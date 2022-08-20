#include<stdio.h>
void func(int array[4][4])
{
	int temp=0;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			temp=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=temp;
		}
	}
}
void main()
{
	int test[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",test[i][j]);
		}
		printf("\n");
	}

printf("\n");
func(test);
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%d\t",test[i][j]);
	}
	printf("\n");

}
getchar();
}