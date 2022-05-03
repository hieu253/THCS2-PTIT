#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int gcd(int a,int b)
{
	if(b==0)	return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
struct ps
{
	int tu,mau;
};
typedef struct ps ps;
ps rutgon(ps a)
{
	int ucln= gcd(a.tu, a.mau);
	a.tu/= ucln;
	a.mau/= ucln;
	return a;
}
void solve(ps a,ps b){
	a=rutgon(a);
	b=rutgon(b);
	int mc=lcm(a.mau,b.mau);
	a.tu=mc/a.mau*a.tu;
	b.tu=mc/b.mau*b.tu;
	a.mau=b.mau=mc;	
	printf("%d/%d %d/%d\n",a.tu,a.mau,b.tu,b.mau); 	
	ps tong,thuong;
	tong.tu=a.tu+b.tu;
	tong.mau=mc;
	tong=rutgon(tong);
	printf("%d/%d\n",tong.tu,tong.mau);
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	thuong=rutgon(thuong);
	printf("%d/%d\n",thuong.tu,thuong.mau);
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	for (int i = 1; i <=t ; ++i)
	{
		ps a,b;
		scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
		printf("Case #%d:\n",i);
		solve(a,b);
	}
	return 0;
}


