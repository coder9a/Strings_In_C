#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int save_ironman(char str[])
{
	int i=0,len,l,r;
	len = strlen(str);
	l = 0;
	r = len-1;
	while((str[i]>=97 && str[i] <= 122) && r>l)
	{
		if(str[l++] != str[r--])
		{
			printf("No");			
			return;
	    }
	    i++;
	}
	printf("YES");
}
int to_lowercase(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		str[i] = str[i]+32;
	}
	save_ironman(str);
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
