#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sort_descending(char str[])
{
	int arr[26] = {0}, c=0, j;
	while(str[c] != '\0')
	{
		arr[str[c] - 'a']++;
		c++;
	}
	for(c=25;c>=0;c--)
	{
		for(j=0;j<arr[c];j++)
		{
			printf("%c",'a'+c);
		}
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
	sort_descending(str);
}
