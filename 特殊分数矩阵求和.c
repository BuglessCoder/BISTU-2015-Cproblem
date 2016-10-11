#include<stdio.h>
void main()
{
	int n,j;
	double i,sum[50000]={0},m=0,t;
	printf("Please input n: ");
	scanf("%d",&n);
	while(n!=0)
	{
		double sum[50000]={0};
		m=0;
		printf("Output:\nthe total is: ");
		for(j=0;j<n;j++)
			for(i=1;i<=n-j;i++)
				sum[j]+=1/i;
		for(j=0;j<n;j++)
			m+=sum[j];
		t=(m-n)*2+n;
		printf("%.2lf\n",t);
		printf("Please input n: ");
		scanf("%d",&n);
	}
	
}