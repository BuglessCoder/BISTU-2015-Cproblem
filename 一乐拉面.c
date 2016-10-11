#include<stdio.h>
void main()
{
	int n,i,j,a,b,c;
	char x[100][100];
	printf("请输入现在队伍的列数:\n");
	scanf("%d",&n);
	printf("拉面的制作时间:\n");
	scanf("%d",&a);
	printf("烤肉的制作时间:\n");
	scanf("%d",&b);
	printf("饮料的制作时间:\n");
	scanf("%d",&c);
	for(i=n;i>=1;i--)
	{
		printf("第%d对的排列情况:\n",i);
			for(j=0;a[i][j]!='\0';j++)
				scanf("%c",&x[i][j]);
	}	
    printf("Output:\n最快吃上饭的那个队伍的排队时间:");
    	
}