#include<stdio.h>
#include<string.h>
void tronxau(char s1[],char s2[], char s12[],int n)
{
	int pos=0;
	for (int i = 0; i < n; ++i)
	{
		s12[pos++]=s2[i];
		s12[pos++]=s1[i];
	}
	s12[pos]='\0';

}
void tach(char s1[],char s2[], char s12[],int n)
{
	int pos=0;
	for (int i = 0; i < n; ++i)
	{
		s1[i]=s12[pos++];

	}
	for (int i = 0; i < n; ++i)
	{
		s2[i]=s12[pos++];
	}
}
int solve(int n)
{
	char s1[n],s2[n],s12[2*n+5];
	char tmp[2*n+5];
	scanf("%s%s%s",s1,s2,s12);
	char t1[n],t2[n];
	strcpy(t1,s1);
	strcpy(t2,s2);
	int count=0;
	while(1){
		count++;
		tronxau(s1,s2,tmp,n);
		if(strcmp(tmp,s12)==0)
		{
			return count;
		}
		tach(s1,s2,tmp,n);
		if(!strcmp(s1,t1)&&!strcmp(s2,t2))
		{
			break;
		}

	}
	return -1;
}
int main(int argc, char const *argv[])
{
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		printf("%d\n",solve(n) );
	}
	return 0;
}