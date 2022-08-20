#include<stdio.h>
#include<string.h>
void findMax(char a[],char s[]);
int main(void)
{
	int i,j;
	char str[100];
	char s[10];
	printf("input a sentence");
	gets(str);
	findMax(str,s);
	puts(s);
	getchar();
	getchar();
	return 0;
}
void findMax(char a[],char s[])
{
	int i,j=0;
	int n,sum=0;
	for(i=0;i<=strlen(a);i++)
	{
		if(s[i]!='0'&&s[i]!=' ')
		{
			sum++;
		}
		else
		{
			if(j<sum)
			{
				j=sum;
				n=i-1;

			}
			sum=0;
		}
	}
	for(i=0;i<j;i++)
	{
		s[i]=a[i+n-j+1];
	}
}