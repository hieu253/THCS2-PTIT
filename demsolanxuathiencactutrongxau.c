#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char c[10000];
	gets(c);
	int count[26]={0};
	for (int i = 0; i < strlen(c); i++)
	{
		count[c[i]-'a']++;
	}
	for (int i = 0; i < strlen(c); i++)
	{
		
		if(count[i]!=0)	printf("%c %d\n",i+97,count[i]);
	}

	return 0;
}