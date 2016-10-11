#include<stdio.h>
void main()
{
	int n,a[10][10]={0},i,j;
	printf("Please input n: ");
	scanf("%d",&n);
	printf("Output:\n");
	if(n<=0||n>10)
		printf("Input error!\n");
	else
	{
		for(i=0;i<n;i++)
		{
			a[i][0]=1;
			for(j=0;j<i;j++)
				a[i][j+1]=a[i-1][j+1]+a[i-1][j];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
				printf("%4d",a[i][j]);
			printf("\n");
		}
	}
}