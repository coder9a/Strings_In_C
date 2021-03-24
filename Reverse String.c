#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int reverse_string(char str[])
{
	int l1, r, l;
	l1 = strlen(str);
	r = l1-1;
	l=0;
	while(r>=l)
	{
		printf("%c",str[r--]);
	}
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
	reverse_string(str);
}
