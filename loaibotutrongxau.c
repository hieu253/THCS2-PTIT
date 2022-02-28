#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char s1[100];
	gets(s1);
	char s2[50];
	scanf("%s",s2);
	char *token=strtok(s1," ");
	while(token!=NULL)
	{
		if(strcmp(token,s2)!=0)
			printf("%s ",token );
		token=strtok(NULL," ");
	}
	
	return 0;
}