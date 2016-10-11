#include <stdio.h>
int IsShuShu(int x);
int main()
{
	int x;
	printf("input a integer: ");
	scanf("%d", &x);

	printf("output:\n");
	if(IsShuShu(x))
		puts("是素数");
	else
		puts("不是素数");

        return 0;
}

int IsShuShu(int x)
{
	int i;
	for(i=2;i<x;i++) 		
		if(x%i==0)
			return 0;
	return 1;



}
int IsShuShu(int x)
{
	int i;
	for(i=1;i<=x;i++)
	{
		if(i==1||i==x)
			x=x/i*i;
		else
			x!=x/i*i;
	}
	return 0;


}