#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n,sum=0;
	int check =0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		if(n%i==0)	sum+=i;
	}
	if(sum==n)	check=1;

	for(int i=1;i<n;i++){
		if(check==1)
			printf("%d ",i);
	}
	return 0;
}