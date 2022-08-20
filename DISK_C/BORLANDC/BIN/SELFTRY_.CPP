
#include<stdio.h>
#include<string.h>
#define N 5

struct subject
{
	char studentNo[20];
	char name[20];
	int grade1;
	int grade2;
	int grade3;
    float aver;
};
void input(struct subject *stu);
void aver(struct subject *stu) ;
void sort(struct subject *stu);
void find(struct subject *stu);
int main(void)
{
	struct subject student[N];
	input(student);
	aver(student);
	sort(student);
    find(student);
	getchar();
	getchar();
	return 0;

}
void input(struct subject *stu)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("input %dstudent No,name,1,2,3",i);
		scanf("%s",stu[i].studentNo);
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].grade1)  ;
		scanf("%d",&stu[i].grade2);
		scanf("%d",&stu[i].grade3);
	}
}
void aver(struct subject *stu)
{
	int i,sum;
	float ave;
	for(i=0;i<N;i++)
	{
		sum=stu[i].grade1+stu[i].grade2+stu[i].grade3;
		ave=sum/3.0;
		stu[i].aver=ave;
		sum=0;
	}
}
void sort(struct subject *stu)
{
	int i,j;
	struct subject temp;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(stu[i].aver<stu[i].aver)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("After sorted\n");
		printf("stuNo\tname\tgrade1\tgrade2\tgraden3\n");
		printf("%s\t%s\t%d\t%d\t%d\t%f\n",stu[i].studentNo,
			stu[i].name,stu[i].grade1,stu[i].grade2,stu[i].grade3,
			stu[i].aver);
	}
}
void find(struct subject *stu)
{
	char ID[20];
	int i,j;
	printf("please input student's ID");
	scanf("%s",ID);
	for(i=0;i<3;i++)
	{
		if(strcmp(stu[i].studentNo,ID)==0)
		{
			printf("studentNo\tname\tgrade1,2,3\n");
			printf("%s\t%s\t%d\t%d\t%d\n",stu[i].studentNo,
			stu[i].name,stu[i].grade1,stu[i].grade2,stu[i].grade3);
		}
	}
}