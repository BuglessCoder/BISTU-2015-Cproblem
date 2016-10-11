#include<stdio.h>
#include<math.h>
int main()
{	
	int l=0;
    double i,n,a,b,k;
	printf("Please input money and k:");
	scanf("%lf %lf",&n,&k);
	printf("Output:\n");
	for(i=1;i<=20;i++)
	{
		a=n*i;
		b=pow(1+k/100,i-1);//注意k不能定义成int，否则k/100就会变成0
		if(a>=200*b)
		{
			printf("Need %lf years\n",i);
			l=1;
			break;
		}
	}
	if(l==0)
		printf("Impossible\n");

	return 0;
}