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
void xuly2(char c[]){
	for (int i = 0; i < strlen(c); ++i)
	{
		c[i]=toupper(c[i]);
	}
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[1000];
		gets(c);
		char a[100][100];
		int n=0;
		char *token=strtok(c," ");
		while(token!=NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		for (int i = 1; i < n-1; i++)
		{
			xuly(a[i]);
			printf("%s ", a[i]);
		}
		xuly(a[n-1]);
			printf("%s, ", a[n-1]);
		xuly2(a[0]);
			printf("%s", a[0]);
		printf("\n");
	}
	return 0;
}