#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int dem;
	for(int i=1;i<=n;i++){
		if(i%2==0)	dem=i*(i+1)/2;
		else		dem=i*(i+1)/2-i+1;
		for(int j=1;j<=i;j++){
			if(i%2==1)	printf("%c ",96+ dem++);
			else		printf("%c ",96+ dem--);
		}
		printf("\n");
	}


	return 0;
}