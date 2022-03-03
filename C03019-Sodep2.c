#include<stdio.h>
#include<math.h>
int thuannghich(int n){
	int a=n;
	int res=0;
	while(n>0){
		res=res*10+n%10;
		n/=10;
	}
	if(res==a)	return 1;
	return 0;
}
int tongcs(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(sum%10==0) return 1;
	return 0;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	int a=pow(10,n-1);
	int b=pow(10,n)-1;
	int dem=0;
	for (int i = a; i <=b ; ++i)
	{
		if(thuannghich(i)&&tongcs(i))	dem++;
	}
	printf("%d\n",dem);
	}
	
	return 0;
}