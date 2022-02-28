#include<stdio.h>
int thuannghich(long long n){
	long long a=n;
	long long res=0;
	while(n>0){
		res=res*10+n%10;
		n/=10;
	}
	if(res==a)	return 1;
	return 0;
}
int check(long long n){
	long long sum=0;
	long long a;
	while(n>0){
		a=n%10;
		if(a%2==0){
			return 0;
			
		}
		sum=sum+n%10;
		n/=10;
	}
		if(sum%2==0)	return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(thuannghich(n)&&check(n))	printf("YES\n");
		else							printf("NO\n");
	}
	return 0;
}