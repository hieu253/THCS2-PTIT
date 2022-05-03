#include<stdio.h>
struct ps
{
	int tu,mau;
};
typedef struct ps ps;
int gcd(int a,int b)
{
	if(b==0)	return a;
	return gcd(b,a%b);
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
ps rutgon(ps a)
{
	int ucln=gcd(a.tu,a.mau);
	a.tu/=ucln;
	a.mhttps://scontent.fhan14-1.fna.fbcdn.net/v/t1.15752-9/273504725_723298289036898_4006024174527504745_n.png?_nc_cat=107&ccb=1-5&_nc_sid=ae9488&_nc_ohc=p-DmwoBe3WEAX9b-_FD&_nc_ht=scontent.fhan14-1.fna&oh=03_AVI5mO6Z-AzGi5AesRAw_EeWpbQgr_ZCfD2YYrRrM1aK_w&oe=62755AB8au/=ucln;
	return a;
}
void solve(ps a,ps b)
{
	int mc=lcm(a.mau,b.mau);
	a.tu=(a.tu*mc)/a.mau;
	b.tu=(b.tu*mc)/b.mau;
	a.mau=b.mau=mc;
	ps tong;
	tong.tu=(a.tu+b.tu)*(a.tu+b.tu);
	tong.mau=mc*mc;
	tong=rutgon(tong);
	printf("%d/%d ",tong.tu ,tong.mau);
	ps tich;
	tich.tu=a.tu*b.tu*tong.tu;
	tich.mau=a.mau*b.mau*tong.mau;
	tich=rutgon(tich);
	printf("%d/%d",tich.tu,tich.mau );
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ps a,b;
		scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
		solve(a,b);
		printf("\n");
	}
	return 0;
}