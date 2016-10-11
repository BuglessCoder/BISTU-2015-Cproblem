#include <stdio.h>
#include <string.h>
#include <math.h>
void main()
{
	char a[127],b[127],c[254];
	int i,m,j,n;
	printf("Please input string1:");
	gets(a);
	printf("Please input string2:");
	gets(b);
	printf("Output:\nstring1:");
	m=strlen(a);
	n=strlen(b);
	if(m>n)
	{
		for(i=0;i<n;i++)
		{
			c[i*2]=a[i];
			c[2*i+1]=b[i];
		}
		for(j=n;j<m;j++)
			c[j+n]=a[j];
		for(i=0;i<j+n;i++)
			printf("%c",c[i]);
	}
	else 
	{
		for(i=0;i<m;i++)
		{
			c[i*2]=a[i];
			c[2*i+1]=b[i];
		}
		for(j=m;j<n;j++)
			c[j+m]=b[j];
		for(i=0;i<j+m;i++)
			printf("%c",c[i]);
	}
	printf("\n");
}