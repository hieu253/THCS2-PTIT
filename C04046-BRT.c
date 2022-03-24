#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	int *x=(int *)a;
	int *y=(int *)b;
	if(*x-*y <0)	return	-1;
	return 1;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
	
	qsort(a,n,sizeof(int),cmp);
	int count=0,min=2e9+1001;
	for (int i = 1; i < n; ++i)
	{
		if(a[i]-a[i-1]<min){
			min=a[i]-a[i-1];
			count=1;
		}
		else if(a[i]-a[i-1]==min)
		{
			count++;
		}
	}
	printf("%d %d\n",min,count);
	}
	return 0;
}