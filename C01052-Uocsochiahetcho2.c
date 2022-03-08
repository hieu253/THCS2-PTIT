#include<stdio.h>
#include<math.h>
int check(int n){
	int dem=0;
	for (int i = 2; i <=sqrt(n) ; ++i)
	{
		if(n%i==0){
			if(i%2==0)	dem++;
			if((n/i)%2==0)	dem++;
		}
	}
	return dem;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int dem=0;
		for (int i = 1; i <=sqrt(n) ; ++i)
		{
			if(n%i==0)
			{
				if(i%2==0)	dem++;
				if((n/i)%2==0)	dem++;
				if(i==n/i&&i%2==0)	dem=dem-1;
			}
		}
		printf("%d\n",dem );
	}	
	return 0;
}