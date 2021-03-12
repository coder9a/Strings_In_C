#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int anagram_palindrome(char str[])
{
	int arr[26] = {0};
	int c=0,x=0;
	while(str[c] != '\0')
	{
		arr[str[c] - 'a']++;
		c++;
	}
	
	for(c=0;c<26;c++)
	{
		if(arr[c] == 1)
		{
			x++;
		}
	}
	if(x>1)
	{
		printf("String is not anagram palindrome");
		return;
	}
	else
	{
		printf("String is anagram palindrome");
		return;
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
	scanf("%s",str);
	anagram_palindrome(str);
}
