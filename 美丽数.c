#include<stdio.h>
void main()
{
	int i,n,k=0,j=0,a[10000];
	printf("Please input n: ");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>=1&&n<=10000)
		{
			for(i=1;i<=10000;i++)
			{
				if(i%3==0||i%5==0)
				{
					a[k]=i;
					k++;
				}
			}
			printf("Output:\nThe ans is: %d\n",a[n-1]);
		}
		else printf("Input Error!\n");
		printf("Please input n: ");
		scanf("%d",&n);
	}	
}