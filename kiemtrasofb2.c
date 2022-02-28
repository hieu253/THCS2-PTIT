#include<stdio.h>
long long fb(long long n)
{
  	long long a0=0,a1=1,a=0;
	while(n>=a1+a0){
	  	a=a1+a0;
	  	a0=a1;
	  	a1=a;
	  } 
	if(a==n)	return 1;
	else return 0;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	long long n;
	while(t--){
		scanf("%lld",&n);
		printf(fb(n)?"YES\n":"NO\n");
	}	
	return 0;
}