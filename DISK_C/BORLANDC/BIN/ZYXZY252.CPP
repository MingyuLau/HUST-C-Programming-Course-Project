#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,t;
	int n,temp;
	char a[100];
	int b[10]={0};
	int c[10]={0,1,2,3,4,5,6,7,8,9};
	printf("please input numbers");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		switch(a[i])
		{
			case '0':
			b[0]++;
			break;
			case '1':
			b[1]++;
			break;
			case '2':
			b[2]++;
			break;
			case '3':
			b[3]++;
			break;
			case '4':
			b[4]++;
			break;
			case '5':
			b[5]++;
			break;
			case '6':
			b[6]++;
			break;
			case '7':
			b[7]++;
			break;
			case '8':
			b[8]++;
			break;
			case '9':
			b[9]++;
			break;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("b[%d]=%d\t",i,b[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d:%d\t",c[i],b[i]);
	}
	getchar();
	getchar();
	return 0;
}