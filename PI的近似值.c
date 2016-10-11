#include<stdio.h>
#include<math.h>
void main()
{
	double p=1.0,i=1.0;
	int k=0,t;
	while(fabs(t*1/(2*i+1))>0.000001)
	{
		if(k%2==0)
			t=-1;
		else t=1;
		p+=t*1/(2*i+1);
		k++;
		i++;
	}

	printf("Output:\nPI的近似值为:%lf\n",p*4);


}