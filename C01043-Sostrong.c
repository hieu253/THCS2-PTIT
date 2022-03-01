#include<stdio.h>
int giaithua(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	int a=n;
	while(a>0){
		sum+=giaithua(a%10);
		a/=10;
	}
	if(sum==n)	printf("1");
	else		printf("0");
	return 0;
}