#include<stdio.h>
void main()
{
	double num;
	int n;
	scanf("%lf %d",&num,&n);
	printf("%.*lf",n,num);
}