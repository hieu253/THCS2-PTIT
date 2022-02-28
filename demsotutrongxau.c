#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main () {
	int t;
	scanf("%d\n", &t);
	while(t--){
		char c[1000];
		
		gets(c);
		int dem=0;
		char *token= strtok(c," ");
		while(token !=NULL)
		{
			dem++;
			token=strtok(NULL," ");
		}
		printf("%d\n",dem);


	}
	
    return 0;
}