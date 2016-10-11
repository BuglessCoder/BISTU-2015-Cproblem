#include <stdio.h>
void main()
{
	unsigned x,y,z,m,n，leap=0;
	printf("Input yingbi geshu and qianshu:");
	scanf("%d %d",&n,&m);
	for(x=0;x<n;x++)
	{
		for(y=0;y<=n-x;y++)
		{
			z=n-x-y;
			if(5*x+2*y+z==m)
			{
				printf("wufen:%d\nerfen:%d\nyifen:%d\n",x,y,z);
				leap=1；
			}
		}
		
	}
	if(leap==0 )
		printf("wujie\n");
}

