#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int a[100];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	int b[100]={0};
	for (int i = 0; i < n; ++i)
	{
		if(b[i]==0)	b[i]=1;
		for (int j = i+1; j <n ; ++j)
		{
			if(a[i]==a[j]){
				b[i]++;
				b[j]=-1;
			}
		}
	}
	int max=0;
	for (int i = 0; i < n; ++i)
	{
		if(max<b[i])	max=b[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(b[i]==max)	printf("%d ",a[i]);
	}

	printf("\n");
	}
	return 0;
}