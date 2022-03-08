#include<stdio.h>
int min(int a,int b){
	return a>b?b:a;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < 2*n-1; ++i)
	{
		for (int j = 0; j < 2*n-1; ++j)
		{
			int min1=min(min(i,2*n-2-i),min(j,2*n-2-j));
			printf("%d",n-min1);		
		}
		printf("\n");
	}
	return 0;
}