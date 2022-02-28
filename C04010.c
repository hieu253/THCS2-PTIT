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
	for (int i = 0; i < n; ++i)
	{
		int min1=a[0];
		int min2=a[i];
		if(min1<min2)	{
			printf("%d %d",min1,min2);
		break;
	}
	}
}
int main(int argc, char const *argv[])
{
	int a[100],n;
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	return 0;
}