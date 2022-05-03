#include<stdio.h>
#include<math.h>

int check(long long n)
{
	long long a=n%10;
	long long m=n/10;
	long long dao=0,dem=0;
	while(m>9)
	{
		dao=dao*10+m%10;
		dem++;
		m/=10;
	}
	long long x=pow(10,dem+1);
	long long c=n/x;
	if((a==m*2||m==a*2)&&dao==(n-x*c)/10)	 return 1;
	return 0;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(check(n))	printf("YES\n");
		else			printf("NO\n");
	}	
	return 0;
}