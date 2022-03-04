#include<stdio.h>
#include<math.h>
int solve(int n){
	int res;
	for (int i = 2; i < sqrt(n); ++i)
	{
		while(n%i==0){
			res=i;
			n/=i;
		}
}
	
		res=n;
	
	return res;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",solve(n));
	}
	return 0;
}