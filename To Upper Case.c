#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int to_Uppercase(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=97 && str[i]<=122)
		str[i] = str[i]-32;
	}
	printf("%s",str);
}
int main()
{
	int s;
	char *str;
	printf("Enter size of string\t");
	scanf("%d",&s);
	str = (char*)malloc(s*(sizeof(char)));
	printf("Enter string\t");
	fflush(stdin);
	scanf("%[^\n]s",str);
	to_Uppercase(str);
}
