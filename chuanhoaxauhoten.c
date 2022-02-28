#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void xuly(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}	
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[1000];
		gets(c);
		char *token=strtok(c," ");
		while(token!=NULL){
			xuly(token);
			printf("%s ",token);
			token=strtok(NULL," ");
		}
		printf("\n");
	}
	return 0;
}