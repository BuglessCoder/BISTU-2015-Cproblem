#include<stdio.h>
void main()
{
	int x,y;
	double z;
	printf("Input:\nPlease input benjin,cunqi:\n");
	scanf("%d,%d",&x,&y);
	if(x<0)
	printf("output:\nThe Money is Invalid!\n");
	else if(y=1)
	{
		z=x*0.0315;
		printf("\nOutput:\nlixi = %.2lf yuan!\n",z);
	}
	else if(y=2)
	{
		z=x*0.0363*2;
		printf("\nOutput:\nlixi = %.2lf yuan!\n",z);
	}
	else if(y=3)
	{
		z=x*0.0402*3;
		printf("\nOutput:\nlixi = %.2lf yuan!\n",z);
	}
	else if(y=5)
	{
		z=x*0.0469*5;
		printf("\nOutput:\nlixi = %.2lf yuan!\n",z);
	}
	else if(y=8)
	{
		z=x*0.0536*8;
		printf("\nOutput:\nlixi = %.2lf yuan!\n",z);
	}
}




