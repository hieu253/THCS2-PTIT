#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i = 1; i <= a; ++i)
	{
		for (int j = 1; j <=b ; ++j)
		{
			if(j>=i)	printf("%d",j );
		}
		for (int  j= b; j >=1; --j)
		{
			if(j<i)printf("%d",j);
		}
		printf("\n");
	}	
	return 0;
}