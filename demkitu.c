#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char c[10000];
	gets(c);
	int count1=0,count2=0;
	for(int i=0;i<strlen(c);i++){
		if(isalpha(c[i]))	count1++;
		else if(isdigit(c[i]))	count2++;

	}
	printf("%d %d %d",count1,count2,strlen(c)-count1-count2);
	return 0;
}