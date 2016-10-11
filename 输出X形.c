#include <stdio.h>
void main()
{
	int n,i,j,k;
	printf("Please input n: ");	
	scanf("%d",&n); 
	printf("Output:\n");
	for(i=0;i<n*2-1;i++)	
	{		
	        k=i;		
		if(i>= n)		
			k=i-2*(i-(n-1));		
		for(j=0;j<k;j++)			
			printf(" ");		
		printf("@");		
		for(j=0;j<2*n-2-k*2;j++)		
		{			
			if(j==2*n-2-k*2-1)				
				printf("@");			
			else				
				printf(" ");		
		}		
		printf("\n");	
	}
}