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
int tongcs(int n)
	{
	int sum=0;
	int dem=0;
	while(n>0){
		sum+=n%10;
		int m=n%10;
		if(m==6)	dem++;
		n/=10;
	}
	if(sum%10==8&&dem>=1)	return 1;
	return 0;
}
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		int tmp=a;
			a=b;
			b=tmp;
	}
	for (int i = a; i <=b ; ++i)
	{
		if(thuannghich(i)&&tongcs(i))
			printf("%d ",i);
	}
	return 0;
}