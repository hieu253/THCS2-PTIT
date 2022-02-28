#include <stdio.h>
void nhap(int a[],int n){
	for (int i = 0; i <n ; ++i)
	{
		scanf("%d",&a[i]);
	}
	
}
void xuat(int a[],int n){
	int m;
	scanf("%d",&m);
	for (int i = n-m; i < n; ++i)
	{
			printf("%d ",a[i]);
	}
	for (int i = 0; i < n-m; ++i)
	{
		printf("%d ",a[i]);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	int a[100];
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	return 0;
}