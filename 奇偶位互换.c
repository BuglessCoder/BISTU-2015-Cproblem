#include <stdio.h>
#include <string.h>
void main()
{
	char a[50];
	int n,i,j,m,t;
	printf("Please input test times: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Output:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter string:");
		gets(a);
		m=strlen(a);
		if(m%2!=0)
			printf("Input error!\n");
		else 
		{
			for(j=0;j<m-1;j+=2)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			printf("The ans is:\n");
			puts(a);
		}
	}

}