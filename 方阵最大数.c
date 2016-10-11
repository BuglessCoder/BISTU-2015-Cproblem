#include <stdio.h>
void main()
{
	int m,a[20][20],i,j,max,c,b;
	printf("Please input m:");
	scanf("%d",&m);
	printf("\n");
	printf("Please input array:\n");
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	max=a[0][0];
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
					c=i;
					b=j;
			}
	printf("Output:\nmax=%d,i=%d,j=%d\n",max,c,b);

}