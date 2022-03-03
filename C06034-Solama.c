#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[100];
		gets(c);
		int a[100];
		int size=strlen(c);
		for (int i = 0; i < size; ++i)
		{
			if(c[i]=='I')	a[i]=1;
			if(c[i]=='V')	a[i]=5;
			if(c[i]=='X')	a[i]=10;
			if(c[i]=='L')	a[i]=50;
			if(c[i]=='C')	a[i]=100;
			if(c[i]=='D')	a[i]=500;
			if(c[i]=='M')	a[i]=1000;
		}
		int sum=a[size-1];
		for (int i = size-1; i >= 1 ; --i)
		{
			if(a[i]<=a[i-1])	sum+=a[i-1];
			else			sum-=a[i-1];
		}
		printf("%d\n",sum);


	}
	return 0;
}