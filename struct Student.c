#include<stdio.h>
struct Student
{
	long num;
	char name[20];
	float score[5];
	float sum;
	float avg;
};
struct Student avg(struct Student stu[1000])
{
	int i,n;
	printf("Input the number of students:");
	scanf("%d",&n);
	printf("Input student's num name score:");
	for(i=0;i<n;i++)
	{
		scanf("%ld%s%f%f%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3],&stu[i].score[4]);
		stu[i].sum=stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3]+stu[i].score[4];
		stu[i].avg=stu[i].sum/5.0;
		printf("sum=%f\navg=%f",stu[i].sum,stu[i].avg);
		printf("\n");

	}
}
void main()
{
	int n;
	struct Student stu[1000],*p;
	p=stu;
	avg(p);
}