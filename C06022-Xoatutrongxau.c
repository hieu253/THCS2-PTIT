#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[],char d[]){
	int size1=strlen(c),size2=strlen(d);
	if(size1!=size2)	return 0;
	for (int i = 0; i < size1; ++i)
		{
		if(tolower(c[i])!=tolower(d[i]))	return 0;
		}
		return 1;			
}
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d\n",&T);
	for (int t = 1; t <=T; ++t)
	{
		char c1[200],c2[200];
		gets(c1);
		gets(c2);
	char *token=strtok(c1," ");
	printf("Test %d: ",t);
	while(token!=NULL){
		if(check(token,c2)==0)	printf("%s ",token);
		token=strtok(NULL," ");
	}
	printf("\n");
	}
	
	return 0;
}