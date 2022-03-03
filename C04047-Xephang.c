#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int T[n],D[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&T[i]);
		scanf("%d",&D[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(T[i]>T[j]){
				int tmp=T[i];
					T[i]=T[j];
					T[j]=tmp;
				int tmp2=D[i];
					D[i]=D[j];
					D[j]=tmp2;
			}
		}
	}
	int sum;
	for (int i = 0; i < n; ++i)
	{
		sum=T[i]+D[i];
		if(sum>T[i+1])	T[i+1]=sum;
	}
	printf("%d",sum);


	return 0;
}