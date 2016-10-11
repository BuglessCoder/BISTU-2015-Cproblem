#include<stdio.h>
int plus(int a[][3],int b[][3])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	return;
}

void main()
{
	int x[][3]={1,2,3,4,5,6},y[][3]={1,2,3,4,5,6};
	int i,j;
	x[2][3]=plus(x,y);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}