#include<stdio.h>
#include<math.h>
long long fb[100];
void check(){
	fb[0]=0,fb[1]=1;
	for (int i = 2; i <100 ; ++i)
	{
		fb[i]=fb[i-1]+fb[i-2];

	}		
}

int main(int argc, char const *argv[])
{
	check();

	int n;
	scanf("%d",&n);
	int a[n][n];
	int h1=0,h2=n-1;
	int c1=0,c2=n-1;
	int count=0;
	while(h1<=h2&&c1<=c2)
	{
		for (int i = c1; i <= c2; ++i)
		{
			a[h1][i]=fb[count] ;
			count++;
		}
		h1++;
		for (int i = h1; i <= h2; ++i)
		{
			a[i][c2]=fb[count];
			count ++;
		}
		c2--;
		if(c1<=c2){
			for (int i = c2; i >= c1; i--)
			{
				a[h2][i]=fb[count];
				count++;
			}
		}
		h2--;
		if(h1<=h2){
			for (int i = h2; i >=h1 ; i--)
			{
				a[i][c1]=fb[count];
				count++;
			}
		}
		c1++;

	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",a[i][j]);
		}
	 printf("\n");
	}


	
	return 0;
}