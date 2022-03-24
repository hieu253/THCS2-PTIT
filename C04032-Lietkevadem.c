#include<stdio.h>
#include<string.h>
int sokhonggiam(int n)
{
	while(n>=10)
	{
		int a=n%10;
		int b=(n/10)%10;
		if(a<b)	return 0;
		n/=10;
	}
	return 1;
}
int find(int a[],int n,int x)
{
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==x)
		{
			return i;
		}

	}
	return -1;
}
void sapxep(int a[],int b[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(b[i]<b[j])
			{
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				int tmp2=b[i];
					b[i]=b[j];
					b[j]=tmp2;
			}
		}
	}
}
void xuat(int a[],int b[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d %d\n",a[i],b[i]);
	}
}
int main(int argc, char const *argv[])
{
	int a[10000];
	int b[10000]={0};
	int x,n=0;
	while(scanf("%d",&x)!=-1)
	{
		if(sokhonggiam(x))
		{
			int t=find(a,n,x);
			if(t==-1){
				a[n]=x;
				b[n]=1;
				n++;
			}
			else	b[t]++;
		}
	}
	sapxep(a,b,n);
	xuat(a,b,n);
	return 0;
}