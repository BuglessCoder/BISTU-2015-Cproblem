#include<stdio.h>
void main()
{
	int age(int n,int a,int k);
	int n,k,a,p;
	printf("Please input n k a:\n");
	scanf("%d%d%d",&n,&k,&a);
	p=age(n,a,k);
	printf("Output:\nThe age is: %d.\n",p);


} 

int age(int n,int a,int k)
{
	int m;
	if(n==1)
		m=a;
	else
		m=age(n-1,a,k)+k;
	return m;

}