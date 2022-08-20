#include<stdio.h>
#include<string.h>
#define N 5
#define LEN 30
void strsort(char*p[],int x)
{
	char*temp;
	int j,i;
	for(j=0;j<x;j++)
	{
		for(i=j+1;i<x;i++)
		{
			if(strcmp(p[j],p[i])>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
int main(void)
{
	char arry[N][LEN],*p[N];
	int i;
	printf("please input strings:\n");
	for(i=0;i<N;i++)
	{
		printf("Str%d=",i+1);
		gets(arry[i]);
		p[i]=arry[i];
	}
	printf("\nafter sort:\n");
	strsort(p,N);
	for(i=0;i<N;i++)
	printf("%s\n",p[i]);
	getchar();
	getchar();
    return 0;
}