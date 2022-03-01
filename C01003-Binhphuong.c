#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",(long long )n*n);
	}
	return 0;
}