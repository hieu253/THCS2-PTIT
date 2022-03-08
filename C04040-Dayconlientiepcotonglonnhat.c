#include<stdio.h>
//  sử dụng thuật toán kadane
long long max(long long a, long long b){
	return a>b?a:b;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	int a[100001];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	long long sum1=0,sum2=-1e10;
	// -1e10 : -10^10 
	// sum1 : tổng dãy con liên tiếp hiện tại
	// sum2 : ghi nhận kỉ lục
	for (int i = 0; i < n; ++i)
	{
		sum1 += a[i];
		sum2 = max(sum1,sum2);
		if(sum1<0)	sum1=0;
	}
	printf("%lld",sum2);
	printf("\n");
	}
	return 0;
}