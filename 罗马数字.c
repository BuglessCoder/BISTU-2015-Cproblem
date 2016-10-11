#include<stdio.h>
void main()
{
	int num,n,i,j;
    char *roman[3][10]={{"","I","II","III","IV","V","VI","VII","VIII","IX"},{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"}};
	printf("Please input number: ");
    scanf("%d",&num);
	if(num<1||num>=1000)
		printf("Output:\nInput error!\n");
	else
	{
		printf("Output:\n%d=",num);
		for(j=0,i=1000;j<3;j++,i/=10)
		{
			n=(num%i)/(i/10);
			printf("%s",roman[2-j][n]);
		}
		printf("\n");
	}
}