#include<stdio.h>
int giaithua(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int strong(int n)
{
	int sum=0;
	int a=n;
	while(a>0){
		sum+=giaithua(a%10);
		a/=10;
	}
	if(sum==n)	return 1;
	else		return 0;
}
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(strong(i))	printf("%d ",i);
	}
	if(a>b){
		int tmp=a;
			a=b;
			b=tmp;
	}
	return 0;
}