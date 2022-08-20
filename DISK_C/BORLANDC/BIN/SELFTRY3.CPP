#include<stdio.h>
#include<string.h>
void func(char a[],char b[],char c[]);
int main(void)
{
	char a[100]={0};
	char b[100]={0};
    char c[100]={0};
	printf("input a\n");
	gets(a);
	printf("input b\n");
	gets(b);
	func(a,b,c);
	puts(a);
    puts(b);
	puts(c);
	getchar();
	getchar();
	return 0;
}
void func(char a[],char b[],char c[])
{
	int i,j;
	int k=0;
	int ma,mb;
	ma=strlen(a);
	mb=strlen(b);
	for(i=0;i<ma;i++)
	{
		for(j=0;j<mb;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
			else
			{
				if(j>=mb-1)
				{
					 c[k]=a[i];
                     k++;
				}
			}
		}
	}
	c[k]='\0';
}