#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	if(n%i==0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int max=0,hang;
	for (int i = 0; i < n; ++i)
	{	
		int dem=0;
		for (int j = 0; j <n ; ++j)
		{
			if(ngto(a[i][j]))	dem++;
		}
		if(dem>max)
		{
			max=dem;
			hang =i;
		}
	}
	printf("%d\n",hang+1);
	for (int i = 0; i < n; ++i)
	{
		if(i==hang)
		{
			for (int j = 0; j < n; ++j)
			{
				if(ngto(a[i][j]))	printf("%d ",a[i][j]);
			}
		}
	}

	return 0;
}