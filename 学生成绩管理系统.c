#include<stdio.h>
void main()
{
	void shuchu(int a[][2],int n);
	void chaxun(int a[][2],int n);
	void xiugai(int a[][2],int n);
	void charu(int a[][2],int n);
	void paixu(int a[][2],int n);
	void shanchu(int a[][2],int n);
	int i,j,n,m,a[20][2];
	printf("                        学生成绩管理系统                  \n\n");
	printf("请录入学生的学号和成绩：\n");
	printf("请输入学生个数：");
	scanf("%d",&n);
	printf("请输入学号和成绩：\n");
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	printf("录入成功，请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统\n");
	while(1)
	{
		scanf("%d",&m);
		if(m!=7)
			switch(m)
			{
				case 1:shuchu(a,n);break;
				case 2:chaxun(a,n);break;
				case 3:xiugai(a,n);break;
				case 4:paixu(a,n);break;
				case 5:charu(a,n);break;
				case 6:shanchu(a,n);break;
				default:printf("Input error!\n");
			}
		else  break;
	}
}

void shuchu(int a[][2],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统\n");
}

void chaxun(int a[][2],int n)
{
	int b,i;
	printf("请输入要查询的学生的学号:(结束查询请输入0)");
	while(1)
	{
		scanf("%d",&b);
		if(b!=0)
		{
			for(i=0;i<n;i++)
				if(a[i][0]==b)
					printf("该学生成绩为：%d\n",a[i][1]);
		}
		else break;
	}
	printf("请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统\n");
}

void xiugai(int a[][2],int n)
{
	int b,i,c,t;
	printf("请输入要修改的学生的学号:(结束修改请输入0)");
	while(1)
	{
		scanf("%d",&b);
		if(b!=0)
		{
			for(i=0;i<n;i++)
				if(a[i][0]==b)
				{
					printf("该学生成绩为：%d\n请输入新成绩：",a[i][1]);
					t=i;
				}
			scanf("%d",&c);
			a[t][1]=c;
			printf("修改成功！\n");
			
		}
		else break;

	}
	printf("请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统\n");
}
void paixu(int a[][2],int n)
{
	int i,j,t,p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[i+1][1]>a[i][1])
			{
				t=a[i+1][1];
				a[i+1][1]=a[i][1];
				a[i][1]=t;
				p=a[i+1][0];
				a[i+1][0]=a[i][0];
				a[i][0]=p;

			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统\n");
}

void charu(int a[][2],int n)
{
	void shuchu(int a[][2],int n);
	void chaxun(int a[][2],int n);
	void xiugai(int a[][2],int n);
	void charu(int a[][2],int n);
	void paixu(int a[][2],int n);
	void shanchu(int a[][2],int n);
	int i,j,m,x[10][2];
	printf("请输入要插入的成绩的个数：");
	scanf("%d",&m);
	printf("请输入要插入的学号和成绩：\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&x[i][j]);
			a[n+i][j]=x[i][j];
		}
	}
	n=n+i;
	printf("插入成功，请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统(按两次)\n");
	while(1)
	{
		scanf("%d",&m);
		if(m!=7)
			switch(m)
			{
				case 1:shuchu(a,n);break;
				case 2:chaxun(a,n);break;
				case 3:xiugai(a,n);break;
				case 4:paixu(a,n);break;
				case 5:charu(a,n);break;
				case 6:shanchu(a,n);break;
				default:printf("Input error!\n");
			}
		else  break;
	}
}

void shanchu(int a[][2],int n)
{
	void shuchu(int a[][2],int n);
	void chaxun(int a[][2],int n);
	void xiugai(int a[][2],int n);
	void charu(int a[][2],int n);
	void paixu(int a[][2],int n);
	void shanchu(int a[][2],int n);
	int i,j,t,m;
	printf("请输入要删除的学号：(结束删除请输入0)\n");
	while(1)
	{
		scanf("%d",&m);
		if(m!=0)
		{
			for(i=0;i<n;i++)
			{
				if(a[i][0]==m)
				{
					t=i;
					for(j=t;j<n-t+1;j++)
					{
						a[j][0]=a[j+1][0];
						a[j][1]=a[j+1][1];
						break;
					}
				}
			}
			n=n-1;
		}
		else break;
	}
	printf("删除成功，请继续输入序号进行操作：\n");
	printf("(1)成绩输出(2)成绩查询(3)修改成绩(4)成绩排序(5)插入新成绩(6)删除成绩(7)退出系统\n");
	while(1)
	{
		scanf("%d",&m);
		if(m!=7)
			switch(m)
			{
				case 1:shuchu(a,n);break;
				case 2:chaxun(a,n);break;
				case 3:xiugai(a,n);break;
				case 4:paixu(a,n);break;
				case 5:charu(a,n);break;
				case 6:shanchu(a,n);break;
				default:printf("Input error!\n");
			}
		else  break;
	}	
}
