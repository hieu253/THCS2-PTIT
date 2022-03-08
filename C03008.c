#include<stdio.h>
#include<math.h>
int shh(long long n){
	long long sum=1;
	for (int i = 2; i <=sqrt(n); ++i)
	{
		if(n%i==0){
			if(i!=n/i){
				sum+=i+n/i;
			}
			else	sum+=i;
		}
	}
	if(sum==n)	return 1;
	return 0;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for (int i = 2; i < n; ++i)
	{
		if(shh(i))	printf("%d ",i);
	}
	return 0;
}