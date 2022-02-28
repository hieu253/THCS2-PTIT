#include<stdio.h>
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

}
void xuat(int a[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j <n ; ++j)
		{
			if(a[i]>a[j]){	
				int t=a[i];
				a[i]=a[j];
				a[j]=t;

		}
	}
}
	int max1=a[n-1];
	printf("%d ",max1);
	for (int i = n-2; i >= 0; --i)
	{
		if(a[i]<max1){
			printf("%d",a[i]);
			break;
		}
	}
}	
int main(int argc, char const *argv[])
{	
	int n,a[100];
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	return 0;
}