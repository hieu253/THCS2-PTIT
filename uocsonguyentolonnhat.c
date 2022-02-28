#include<stdio.h>
#include<math.h>
void xuat(long long n)
{
	long long max=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i>max)	max=i;
			while(n%i==0)	n/=i;
		}
	}
	if(n>max)	max=n;
	printf("%lld",max);
}
int main()
{
	int t;
	scanf("%d",&t);
	long long n;
	while(t--){
		scanf("%lld",&n);
		xuat(n);
		printf("\n");
	}	
	return 0;
}