
#include<stdio.h>
typedef	long long ll;
ll gcd(ll a,ll b){
	if(b==0)	return a;
	return gcd(b,a%b);
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll bcnn=1;
		for (int i = 1; i <=n ; ++i)
		{
			ll ucln=gcd(bcnn,i);
			bcnn=bcnn*i/ucln;
		}
		printf("%lld\n",bcnn );
	}
	return 0;
}