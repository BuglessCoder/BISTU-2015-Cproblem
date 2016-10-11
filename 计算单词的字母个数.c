#include<stdio.h>
#include<string.h>
int main()
{	
	int i,j=0,k;	
	char a[100],c[100];
	printf("Please input some sentences,end of each sentence with '.':\n");
	gets(a);
	printf("Output:\nEach words' letter number is :\n");
	for(i=0;i<(strlen(a));i++)	
	{		
		if(a[i]==' ' || a[i]=='\0')		
		{			
			c[j]='\0';
			if(j!=0)
				printf("%d ",j);		
			j=0;		
		}		
		else if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)		
		{			
			c[j]=a[i];			
			j++;		
		}	
	}
	printf("\n");
	return 0;
}