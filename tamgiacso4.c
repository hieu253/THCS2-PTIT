#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n ;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=1;j--) printf("~");
		for(int j=1;j<=2*i-1;j++){
			if(j%2==1)	printf("%d",j);}
		for(int j=2*i-3;j>=1;j--)	{
			if(j%2==1)	printf("%d",j);
		}		
		
		printf("\n");
	}
	return 0;
}