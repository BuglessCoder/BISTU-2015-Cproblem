#include <stdio.h>
int main()
{
	double i;
	double a,b,c;
	double x=0,y=0,z=0,m;
	printf("Please input the a,b,c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	for(i=1;i<=a;i++)
		x=x+i;
	for(i=1;i<=b;i++)
		y=y+i*i;
	for(i=1;i<=c;i++)
		z=z+1/i;
	m=x+y+z;
	printf("Output:\nThe ans is: %.4lf\n",m);

	return 0;
}