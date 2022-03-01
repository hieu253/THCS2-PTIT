#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int sum=0;
		while(n>0){
			sum+=n%10;
			n/=10;
		}
	printf("%d\n",sum);
	}
	return 0;
}