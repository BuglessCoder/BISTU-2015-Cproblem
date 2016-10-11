#include <stdio.h>
#include <string.h>

void ReverseSTring(char str[]);

int main()
{
	char str[200]={0};
	printf("input a string: ");
	gets(str);

	ReverseSTring(str);

	printf("output:\n");
	puts(str);

	return 0;
}
void ReverseSTring(char str[])
{
	int i,n;
	char t;
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		t=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=t;
	}


}