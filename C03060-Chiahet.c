#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,k;
	int dem=0;
	scanf("%d%d",&n,&k);
	for (int i = 1; i <=n ; ++i)
		{
			if(i%2==0)
			{
				int j=i;
				while(j%2==0){
					dem++;
					j/=2;
				}
			}
		}
	if(dem>=k)	printf("Yes");
	else		printf("No");

	return 0;
}