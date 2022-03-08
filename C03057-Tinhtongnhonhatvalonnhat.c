#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c1[100],c2[100];
	scanf("%s%s",&c1,&c2);
	int size1=strlen(c1),size2=strlen(c2);
	long long m=0,n=0;
	for (int i = 0; i < size1; ++i)
	{
		if(c1[i]=='6')	c1[i]='5';
		n=n*10+(c1[i]-'0');
	}
	for (int i = 0; i < size2; ++i)
	{
		if(c2[i]=='6')	c2[i]='5';
		m=m*10+(c2[i]-'0');
	}
	printf("%lld ",m+n);
	m=0,n=0;
	for (int i = 0; i <size1 ; ++i)
	{
		if(c1[i]=='5')	c1[i]='6';
		n=n*10+(c1[i]-'0');
	}
	for (int i = 0; i < size2; ++i)
	{
		if(c2[i]=='5') c2[i]='6';
		m=m*10+(c2[i]-'0');
	}
	printf("%lld",m+n);
	printf("\n");
	}
	return 0;
}