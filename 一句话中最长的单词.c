#include<stdio.h>
#include<string.h>
int main()
{	
	int i,j=0,k;	
	char a[80],b[80]={"\0"},c[80];
	printf("Please input a sentence:\n");
	gets(a);
	printf("Output:\n");
	for(i=0;i<=(strlen(a));i++)	
	{		
		if(a[i]==' ' || a[i]=='\0')		
		{			
			c[j]='\0';			
			if(strlen(c)>strlen(b))				
				for(k=0;k<strlen(c);k++)					
					b[k]=c[k];			
				j=0;		
		}		
		else		
		{			
			c[j]=a[i];			
			j++;		
		}	
	}	
	printf("The longest word is:%s\n",b);	
	return 0;
}