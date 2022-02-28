#include<stdio.h>
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	for (int t= 1; t <=T ; ++ t)
	{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	for (int i = 0; i < n; ++i)
	{
		int x=1;
		for (int j = 0; j < n; ++j)
		{
			if(i>=j)	a[i][j]=x++;
			else		a[i][j]=0;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			b[i][j]=0;
			for (int k = 0; k <n ; ++k)
			{
				b[i][j]+=a[i][k]*a[j][k];
			}
		}
	}
	printf("Test %d:\n",t);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",b[i][j]);
		}
	printf("\n");
	}



	}

	return 0;
}