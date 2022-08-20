#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void findmax(char s[])
{
	int sum=0,m=0,n=0,i;
	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
		sum++;
		else
		{
			if(m<sum)
			{
				m=sum;
				n=i-1;
			}
			sum=0;
		}
	}
	for(i=n-m+1;i<=n;i++)
	{
		printf("%c",s[i]);
	}
}
int main(void)
{
	char str[100];
	printf("please input a setence:\n");
	gets(str);
	printf("\nword is:\n");
	findmax(str);
	printf("\n");
	getchar();
	getchar();
	return 0;
}