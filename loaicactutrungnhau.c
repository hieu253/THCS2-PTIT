#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char c[1000];
	gets(c);
	int b[100]={0};
	char a[100][100];
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(strcmp(a[i],a[j])==0)
				{
					b[j]=-1;
				}
			}
	}
	}
	for (int i = 0; i < n; ++i)
	{
		if(b[i]!=-1){
			printf("%s ",a[i]);
		}
	}
	return 0;
}