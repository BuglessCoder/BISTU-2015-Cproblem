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
	printf("                        ѧ���ɼ�����ϵͳ                  \n\n");
	printf("��¼��ѧ����ѧ�źͳɼ���\n");
	printf("������ѧ��������");
	scanf("%d",&n);
	printf("������ѧ�źͳɼ���\n");
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	printf("¼��ɹ��������������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ\n");
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
	printf("�����������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ\n");
}

void chaxun(int a[][2],int n)
{
	int b,i;
	printf("������Ҫ��ѯ��ѧ����ѧ��:(������ѯ������0)");
	while(1)
	{
		scanf("%d",&b);
		if(b!=0)
		{
			for(i=0;i<n;i++)
				if(a[i][0]==b)
					printf("��ѧ���ɼ�Ϊ��%d\n",a[i][1]);
		}
		else break;
	}
	printf("�����������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ\n");
}

void xiugai(int a[][2],int n)
{
	int b,i,c,t;
	printf("������Ҫ�޸ĵ�ѧ����ѧ��:(�����޸�������0)");
	while(1)
	{
		scanf("%d",&b);
		if(b!=0)
		{
			for(i=0;i<n;i++)
				if(a[i][0]==b)
				{
					printf("��ѧ���ɼ�Ϊ��%d\n�������³ɼ���",a[i][1]);
					t=i;
				}
			scanf("%d",&c);
			a[t][1]=c;
			printf("�޸ĳɹ���\n");
			
		}
		else break;

	}
	printf("�����������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ\n");
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
	printf("�����������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ\n");
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
	printf("������Ҫ����ĳɼ��ĸ�����");
	scanf("%d",&m);
	printf("������Ҫ�����ѧ�źͳɼ���\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&x[i][j]);
			a[n+i][j]=x[i][j];
		}
	}
	n=n+i;
	printf("����ɹ��������������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ(������)\n");
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
	printf("������Ҫɾ����ѧ�ţ�(����ɾ��������0)\n");
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
	printf("ɾ���ɹ��������������Ž��в�����\n");
	printf("(1)�ɼ����(2)�ɼ���ѯ(3)�޸ĳɼ�(4)�ɼ�����(5)�����³ɼ�(6)ɾ���ɼ�(7)�˳�ϵͳ\n");
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
