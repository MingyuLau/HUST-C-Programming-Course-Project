#include<stdio.h>
#include<string.h>
void fun(char*s,char*t,char*u);

int main(void)
{
	char s[100]={0};
	char t[100]={0};
	char u[100]={0};
	printf("\nPlease enter strings:");
	gets(s);
	printf("\nPlease enter stringt:");
	gets(t);
	fun(s,t,u);
	printf("the result is:%s\n",u);
	getchar();
	getchar();
	return 0;
}
void fun(char*s,char*t,char*u)
{
	int i,j,ms,mt;
	ms=strlen(s);
	mt=strlen(t);
	for(i=0;i<ms;i++)
	{
		for(j=0;j<mt;j++)
		if(s[i]==t[j]) break;
		if(j>=mt)
		*u++=s[i];
	}
	*u='\0';
}