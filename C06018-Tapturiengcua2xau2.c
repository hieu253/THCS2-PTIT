#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	char *x= (char*)a;
	char *y= (char*)b;
	return strcmp(x,y);
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c1[200],c2[200],a[200][200],b[200][200];
	gets(c1);
	gets(c2);
	int m=0,n=0;
	char *token1=strtok(c1," ");
	while(token1!=NULL){
		strcpy(a[n++],token1);
		token1=strtok(NULL," ");
	}
	char *token2=strtok(c2," ");
	while(token2!=NULL){
		strcpy(b[m++],token2);
		token2=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for (int i = 0; i < n; ++i)
	{
		while(strcmp(a[i],a[i+1])==0) i++;
		int check=0;
		for (int j = 0; j < m; ++j)
		{
			if(strcmp(a[i],b[j])==0)
			{
				check=1;
				
			}
		}
		if(!check)	printf("%s ",a[i]);
	}
	printf("\n");
	}
	return 0;
}