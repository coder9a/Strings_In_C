#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int anagram(char *str1, char *str2)
{
	int first[26] = {0}, second[26] = {0};
	int c=0;
	int l1,l2;
	l1 = strlen(str1);
	l2 = strlen(str2);
	if(l1 != l2)
	{
		printf("Strings are not anagram");
		return;
	}
	else
	{	
	while(str1[c] != '\0')
	{
		first[str1[c] - 'a']++;
		c++;
	}
	c=0;
	while(str2[c] != '\0')
	{
		second[str2[c] - 'a']++;
		c++;
	}
	
	for(c=0;c<26;c++)
	{
		if(first[c] != second[c])
		{
			printf("Strings are not anagram");
			return;
		}
	}
	printf("Strings are anagram");
	}
}
int main()
{
	int s1,s2;
	char *str1, *str2;
	printf("Enter size of first string\t");
	scanf("%d",&s1);
	printf("Enter size of second string\t");
	scanf("%d",&s2);
	str1 = (char*)malloc(s1*(sizeof(char)));
	str2 = (char*)malloc(s2*(sizeof(char)));
	printf("Enter first string\t");
	fflush(stdin);
	scanf("%s",str1);
	printf("Enter second string\t");
	fflush(stdin);
	scanf("%s",str2);
	anagram(str1, str2);
}
