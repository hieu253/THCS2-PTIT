#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int n=a;
	if(b<n) n=b;
	if(c<n)	n=c;
	printf("%d",n);
	return 0;
}