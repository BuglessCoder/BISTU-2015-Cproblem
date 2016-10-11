#include <stdio.h>
int main()
{
	int n,i;
	int a,b,c,x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("input the first group version No.:£¨Ö÷°æ±¾ºÅ ×Ó°æ±¾ºÅ ÐÞ¶©ºÅ £©\n");
		scanf("%d%d%d",&a,&b,&c);
		printf("input thesecond group version No.:£¨Ö÷°æ±¾ºÅ ×Ó°æ±¾ºÅ ÐÞ¶©ºÅ £©\n");
		scanf("%d%d%d",&x,&y,&z);

		if(a>x)
			printf("Output:\nFirst\n");
		else if(a<x)
			printf("Output:\nSecond\n");
		else
		{
			if(b>y)
			printf("Output:\nFirst\n");
			else if(b<y) 
			printf("Output:\nSecond\n");
			else
			{
				if(c>z)
				printf("Output:\nFirst\n");
				else if(c<z) 
				printf("Output:\nSecond\n");
				else printf("Output:\nSame\n");
			}
		}
	}
	return 0;
}