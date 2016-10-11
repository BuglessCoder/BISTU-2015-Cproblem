#include <stdio.h>
#include <string.h>
void main()
{
	int i,n;
	char a[50];
	printf("Input:\nÔ­ÎÄ£º");
	gets(a);
	printf("Output:\nÃÜÎÄ£º");
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>=87&&a[i]<=90||a[i]>=119&&a[i]<=122)
			a[i]=a[i]-22;
		else if(a[i]>=65&&a[i]<=86||a[i]>=97&&a[i]<=118)
			a[i]=a[i]+4;
	}
	puts(a);

}