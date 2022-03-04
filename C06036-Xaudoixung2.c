#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char c[100001];
	gets(c);
	printf("%d",strlen(c)-1);
	return 0;
}