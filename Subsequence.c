#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int a, int b);
int subsequence(char *str1, char *str2, int m , int n)
{
	int c, a, b;
    if(m == 0 || n == 0)
    {
        return 0;
    }
    if(str1[m] == str2[n])
    {
        return 1+subsequence(str1, str2, m-1,n-1);
    }
    else
    {
        a = subsequence(str1, str2, m, n-1);
        b = subsequence(str1, str2, m-1, n);
        c = max(a, b);
        return c;
    }
}
int max(int a, int b)
{
    return (a>b)?a:b;
}
int main()
{
	int s,l1,l2,x;
	char *str1, *str2;
	printf("Enter size of string\t");
	scanf("%d",&s);
	str1 = (char*)malloc(s*(sizeof(char)));
	str2 = (char*)malloc(s*(sizeof(char)));
	printf("Enter string\t");
	fflush(stdin);
	scanf("%[^\n]s",str1);
	printf("Enter sub-string\t");
	fflush(stdin);
	scanf("%[^\n]s",str2);
	l1 = strlen(str1);
	l1 = strlen(str2);
	x = subsequence(str1, str2, l1, l2);
	if(x == 0)
	{
		printf("No subsequence exists");
	}
	else
	{
		printf("Subsequence exists");
	}
}
