#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int n;	
	scanf("%d",&n);
	int cuoi=n%10;
	int dau;
	int dem=0;
	int a=n;
	while(a>0){
		if(a<10)	dau=a;
		dem++;
		a/=10;
	}
	n=n-cuoi-dau*pow(10,dem-1)+dau+cuoi*pow(10,dem-1);
	printf("%d",n);n = n - cuoi - dau * pow(10, dem - 1) + dau + cuoi * pow(10, dem - 1);

	return 0;
}