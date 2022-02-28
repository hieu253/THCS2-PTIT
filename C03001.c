#include<stdio.h>
int ktra(int n){
	int i;
	int sum=0;
	while(n>0){
		i=n%10;
		sum+=i;
		n/=10;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(ktra(n)%10==0)	printf("YES\n");
		else				printf("NO\n");	
	}
	return 0;
}