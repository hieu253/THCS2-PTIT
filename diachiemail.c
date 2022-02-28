#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void xuly(char c[]){
	c[0]=tolower(c[0]);
	printf("%c",c[0]);
}
void xuly2(char  c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
	printf("%s",c);
}
int main(int argc, char const *argv[])
{
	char c[1000];
	gets(c);
	char a[100][100];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL)
	{
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<n-1;i++){
		xuly(a[i]);
	}  
	xuly2(a[n-1]);
	printf("@ptit.edu.vn");
	return 0;
}