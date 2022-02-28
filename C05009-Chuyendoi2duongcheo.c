#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,a[100][100];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <n; ++j)
		{
			if(i==j)	printf("%d ",a[i][n-j-1]);
			else if(i==n-j-1)	printf("%d ",a[i][i]);
			else		printf("%d ",a[i][j]);

		}
		printf("\n");
	}

	return 0;
}