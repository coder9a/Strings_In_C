#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int palindrome(char *str)
{
	int x,l,r;
	x = strlen(str);
	l=0;
	r=x-1;
	while(r>l)
	{
		if(str[l++] != str[r--])
		{
			printf("%s Not Palindrome", str);			
			return;
	    }
	}
	printf("%s is Palindrome",str);
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
	scanf("%s",str);
	palindrome(str);
}
