#include <stdio.h>
#include <string.h>
void main()
{
	int i,n,j;
	char a[200][10];
	printf("Please input box number: ");
	scanf("%d",&n);
	printf("Input names:\n");
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	printf("Output:\n");
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],"bowl")==0)
			printf("[%s] ",a[i]);
		else if(strcmp(a[i],"knife")==0)
			printf("[%s] ",a[i]);
		else if(strcmp(a[i],"fork")==0)
			printf("[%s] ",a[i]);
		else if(strcmp(a[i],"chopsticks")==0)
			printf("[%s] ",a[i]);
	}
	printf("\n");

}