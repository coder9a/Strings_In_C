#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int good_or_bad_string(char str[])
{
	int i=0,len,c=0,v=0,l,r;
	char vowel[] = {'a','e','i','o','u'};
	while((str[i]>=97 && str[i] <= 122) && c!=3)
	{
		if(str[i] != '?')
		{
			if(str[i] == vowel[i])
	    	{
			    v++;
			    c=0;
	        }
	        else
	        {
	        	c++;
	        	v=0;
			}
		}
		if(str[i] == '?')
		{
			v++;
			c++;
		}
	i++;
	}
	if(v>5 || c>3)
	{
		printf("BAD");
	}
	else
	{
		printf("GOOD");
	}
}
int to_lowercase(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		str[i] = str[i]+32;
	}
	good_or_bad_string(str);
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
	to_lowercase(str);
}
