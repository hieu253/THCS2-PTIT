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
int b[100];
void check(){
	int count =0;
	for (int i = 2; i <1000 ; ++i)
	{
		if(ngto(i))	{
			b[count]=i;
			count++;
	}
}
}
int main(int argc, char const *argv[])
{
	check();
	int T;
	scanf("%d",&T);
	for (int t= 1; t <= T; ++t)
	{		
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
			a[h1][i]=b[count] ;
			count++;
		}
		h1++;
		for (int i = h1; i <= h2; ++i)
		{
			a[i][c2]=b[count];
			count ++;
		}
		c2--;
		if(c1<=c2){
			for (int i = c2; i >= c1; i--)
			{
				a[h2][i]=b[count];
				count++;
			}
		}
		h2--;
		if(h1<=h2){
			for (int i = h2; i >=h1 ; i--)
			{
				a[i][c1]=b[count];
				count++;
			}
		}
		c1++;

	}
	printf("Test %d:\n",t);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",a[i][j]);
		}
	 printf("\n");
	}

}
	
	return 0;
}