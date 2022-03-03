#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char c[100];
	gets(c);
	char a[100][100];
	int size=strlen(c);
	int n=0;
	for (int i = 0; i < size; ++i)
	{
		c[i]=tolower(c[i]);
	}
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n++],token);
		token=strtok(NULL," ");
	}
	int b[100]={0};
	for (int i = 0; i < n; ++i)
	{
		if(b[i]==0){
			b[i]=1;
			for (int j = i+1; j <n ; ++j)
			{
				if(strcmp(a[i],a[j])==0)
				{
					b[i]++;
					b[j]=-1;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(b[i]!=-1)	printf("%s %d\n",a[i],b[i]);
	}



	return 0;

}