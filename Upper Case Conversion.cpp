#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int upper_case_conversion(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		// Check First letter
		if(i==0)
		{
			if(str[i]>='a' && str[i]<='z')
				{
					str[i] = str[i] - 32;
			    }
			continue;
		}
		// Check space
		if(str[i] == ' ')
		{
			++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		// Check for capital letters
		else
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i] = str[i] + 32;
			}
			continue;
		}
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
	upper_case_conversion(str);
}
