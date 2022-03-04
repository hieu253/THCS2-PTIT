#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int tich=1;
		for (int i = 2; i <=sqrt(n); ++i)
		{	
			if(n%i==0)	tich=tich*i;
			while(n%i==0)	n/=i;

		}
		printf("%d",tich*n);
		printf("\n");

	}
	return 0;
}