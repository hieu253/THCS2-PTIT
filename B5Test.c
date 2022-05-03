#include<stdio.h>
#include<math.h>
// sàng eratosthenes
int prime[1000001];
void sieve(){
	for (int i = 0; i <=1000000 ; ++i)//cho tất cả các phần tử là số nguyên tố
	{
		prime[i]=1;
	}
	prime[0]=0,prime[1]=0;
	for (int i = 2; i <1000 ; ++i)// duyệt từ 2 đến căn 1000000
	{
		if(prime[i])
		{
			for (int j = i*i; j <=1000000 ; j+=i)// cho tất cả các số  là bội của i không phải là số nguyên tố.
			{
				prime[j]=0;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	sieve();// sàng eratosthenes
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long l,r,count=0;
		scanf("%lld%lld",&l,&r);
		for (int i = sqrt(l); i <=sqrt(r) ; ++i)//số chỉ có 3 ước số là số mà có căn bậc 2 của số đó là số nguyên tố.
		{
			if(prime[i])	count++;
		}
	printf("%lld",count );
	printf("\n");
	}
	return 0;
}