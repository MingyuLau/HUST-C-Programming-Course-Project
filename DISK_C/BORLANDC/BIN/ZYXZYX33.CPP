#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
int fun(int list[],int size)
{
	int i,j=0;
	for(i=1;i<size;i++)
	{
		if(list[i]<list[j])
			j=i;
	}
	return j;
}
void main()
{
	int i;
	int vector[SIZE];
	randomize();
	for(i=0;i<SIZE;i++)
	{
		vector[i]=random(1000);
		printf("Vector[%d]=%6d\n",i,vector[i]);

	}
	i=fun(vector,SIZE);
	printf("\nmin:vector[%d]=%6d\n",i,vector[i]);
	getchar();
    getchar();
}