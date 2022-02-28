#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n ;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0)	printf("%d",2*j);
			else		printf("%d",2*j-1);
			
		}
		printf("\n");
	}
	return 0;
}