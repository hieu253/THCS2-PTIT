#include<stdio.h>
int check(long a[],long n){
	for(int i = n-1; i >= 2; --i)
	{
		int l=0;
		int r=i-1;
		while(l<r)
		{
		if(a[l]+a[r]==a[i])	
			return 1;
		else if(a[l]+a[r]<a[i])
		{
			l++;
		}
		else
			r--;
		}
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
	long n;
	scanf("%ld",&n);
	long a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%ld",&a[i]);
		a[i]=a[i]*a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}

	if(check(a,n))	printf("YES\n");
	else 			printf("NO\n");
	}
	return 0;
}