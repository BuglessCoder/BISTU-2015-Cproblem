#include<stdio.h>
void main()
{
	int k,a[8],i,t;
	printf("Input k: ");
	scanf("%d",&k);
	switch(k)
	{
		case 6:
				for(i=0;i<6;i++)
				{
					scanf("%d",&a[i]);
					printf("Output:\nThe ans is:\n%d",a[i]);
				}
				printf("\n");
					break;
		case 7:
				for(i=0;i<7;i++)
					scanf("%d",&a[i]);
				printf("Output:\nThe ans is:\n");
				for(i=0;i<7;i++)
				{
					if(i==6)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<7;i++)
				{
					if(i==5)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<7;i++)
				{
					if(i==4)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<7;i++)
				{
					if(i==3)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<7;i++)
				{
				
					if(i==2)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<7;i++)
				{
					if(i==1)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<7;i++)
				{
					if(i==0)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
		case 8:
				for(i=0;i<8;i++)
					scanf("%d",&a[i]);
				printf("Output:\nThe ans is:\n");
				for(i=0;i<8;i++)
				{
					if(i==7)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
					if(i==6)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
					if(i==5)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
					if(i==4)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
					if(i==3)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
				
					if(i==2)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
					if(i==1)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				for(i=0;i<8;i++)
				{
					if(i==0)
						continue;
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
		default:
				printf("Output:\nInput Error!\n");
	}
}