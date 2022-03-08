#include<stdio.h>
void nhap(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		int check=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<=a[j])
			{
				check=0;
				break;
			}
		}
	if(check==1)	printf("%d ",a[i]);
	}
	printf("\n");

}
int main(int argc, char const *argv[])
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n];
		nhap(a,n);
		xuat(a,n);
	}
	return 0;
}