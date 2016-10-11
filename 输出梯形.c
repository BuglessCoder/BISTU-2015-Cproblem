#include <stdio.h>
void main()
{
	int n,i,j,k;
	printf("Please input n: ");	
	scanf("%d",&n); 
	printf("Output:\n");
	for(i=0;i<n;i++)	
	{
		k=i*2;
		for(j=0;j<3*n-2-n-k;j++)			
				printf(" ");
		for(j=0;j<n+k;j++)			
				printf("*");
		printf("\n");	
	}
}