#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define N 3

struct subject
{
	char studentNo[20];
	char name[20];
	char sex;
	int rank;
	int grade1;
	int grade2;
	int grade3;
	float aver;
};
//void input(struct subject *stu);
void output(struct subject *stu,char *d,char *c);
void average(struct subject *stu);
void sort(struct subject *stu);
void find(struct subject *stu);
void failed(struct subject *stu);
int main(void)
{
	struct subject student[N]={
	{"U202014927","z",'m',0,100,99,89,0.0},
	{"U202014911","l",'m',0,89,79,81,0.0},
	{"U202014928","z",'m',0,79,69,71,0.0}     };
char date[10];
char classes[10];
printf("please input date");
scanf("%s",date);
printf("please input classes");
scanf("%s",classes);
//input(student);
average(student);
sort(student);
output(student,date,classes);
find(student);
failed(student);
getchar();
getchar();
getchar();
return 0;
}
void input(struct subject *stu)
{
	int i;
	char str[10];
	for(i=0;i<N;i++)
	{
		printf("student%d information.\n",i+1);
		printf("please input studentNo:");
		scanf("%s",stu[i].studentNo);
		printf("please input name");
		scanf("%s",str);
		stu[i].sex=str[0];
		printf("please input grade1");
		scanf("%d",&stu[i].grade1);
		printf("please input grade2");
		scanf("%d",&stu[i].grade2);
		printf("please input grade3");
		scanf("%d",&stu[i].grade3);

	}
}
void output(struct subject*stu,char *d,char *c)
{
	int i,rank=1;
	printf("------REPORT CARD------");
	printf("data:");
	puts(d);
	printf("class:");
	puts(c);
	printf("total students:3\n");
	printf("studentNo\tname\tsex\taver\trank\n");
	printf("--------------\n");
	for(i=0;i<N;i++)
	{
		if(i<0&&stu[i-1].aver>stu[i].aver)  rank++;
		stu[i].rank=rank;
		printf("%s\t   %s\t %c\t %.2f\t %d\t",
		stu[i].studentNo,stu[i].name,stu[i].sex,stu[i].aver,rank);
		printf("\n");
	}
}
void average(struct subject*stu)
{
	int i,sum;
	for(i=0;i<N;i++)
	{
		sum=(stu[i].grade1+stu[i].grade2+stu[i].grade3);
		stu[i].aver=(float)sum/3;
		sum=0;
	}
}
void sort(struct subject*stu)
{
	int i,j;
	struct subject item;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(stu[i].aver<stu[j].aver)
			{
				item=stu[i];
				stu[i]=stu[j];
				stu[j]=item;
			}
		}
	}
}
void find(struct subject*stu)
{
	int i;
    char ID[20];
	printf("which one do you like to find?");
	scanf("%s",ID);
	printf("studentNo\tname\taver\trank\n");
	printf("-------------\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(stu[i].studentNo,ID)==0)
		{
			printf("%s\t      %s\t%.2f\t%d\n",
			stu[i].studentNo,stu[i].name,stu[i].aver,stu[i].rank);
			printf("\n");
		}
	}
}
void failed(struct subject*stu)
{
	int i;
	printf("failed male students:\n");
	printf("studentNo\tname\tsex\taver\trank\n");
	printf("-------------------\n");
	for(i=0;i<N;i++)
	{
		if(stu[i].sex=='m'&&stu[i].aver<60)
		{
			printf("%s\t     %s\t%c\t%.2f\t %d\t",
			stu[i].studentNo,stu[i].name,stu[i].sex,stu[i].aver,stu[i].rank);
            printf("\n");
		}
	}
}