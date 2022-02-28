#include<stdio.h>
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	for (int t = 1; t <=T ; ++t)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m][n];
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0;j< n; ++j)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int res=0;
		int cot,hang;
		for (int i = 0; i < m; ++i)
		{
			int sum=0;
			for (int j = 0; j < n; ++j)
			{
				sum+=a[i][j];
			}
			if(sum>res){
				res=sum;
				hang=i;
		}
	}
		res=0;
		for(int i=0;i<m;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				if(j!=hang)
				{
					sum+=a[j][i];	
				}	
				if(sum>res)
				{
					res=sum;
					cot=i;
				}		
		}
		
	}
	printf("Test %d:\n",t);
	for (int i = 0; i < m; ++i)
	{
		if(i!=hang)
		{
			for (int j = 0; j < n; ++j)
			{
			if(j!=cot)	printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	
}
	return 0;

}