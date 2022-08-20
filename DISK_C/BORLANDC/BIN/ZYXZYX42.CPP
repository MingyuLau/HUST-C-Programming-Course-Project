#include<stdio.h>
void fun(char s[],int c)
{
	int i,k=0;
	for(i=0;s[i];i++)
		if(s[i]!=c)
			s[k++]=s[i];
	s[k]='\0';
}
void main()
{
	static char str[]="turbo c and borland c++";
	char ch;
	printf("%s\n",str);
	printf(":");
	scanf("%c",&ch);
	fun(str,ch);
	printf("str[]=%s\n",str);
	getchar();
	getchar();
}