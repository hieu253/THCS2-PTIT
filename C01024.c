#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a=n%10;
		while(n>=10)	n/=10;
		if(n==a)	printf("YES\n");
		else 		printf("NO\n");
		
	}
	return 0;
}