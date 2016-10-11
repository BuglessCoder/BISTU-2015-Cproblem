#include <stdio.h>
void main()
{
	int t,n,i,j,sum1,sum2;
	char c1,c2;
	printf("Please input test times: ");
	scanf("%d",&t);
	printf("Output:\n");
	for(i=0;i<t;i++)
	{
		printf("Please input game times: ");
		scanf("%d",&n);
		sum1=0;
		sum2=0;
		for(j=0;j<n;j++)
		{
			scanf("%c %c",&c1,&c2);
			fflush(stdin);
			if((c1=='S'&&c2=='P')||(c1=='R'&&c2=='S')||(c1=='P'&&c2=='R'))
				sum1++;
			else if(
				(c2=='S'&&c1=='P')||(c2=='R'&&c1=='S')||(c2=='P'&&c1=='R'))
				sum2++;
			else
			{
				sum1++;
				sum2++;
			}
		}
		if(sum1==sum2)
			printf("The game is TIE\n");
		else if(sum1>sum2)
			printf("The Winer is player 1\n");
		else 
			printf("The Winer is player 2\n");
		
	}
}