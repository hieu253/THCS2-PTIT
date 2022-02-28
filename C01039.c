#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	int dem=0;
	scanf("%d",&n);
	while(n>0){
		n/=10;
		dem++;
	}	
	printf("%d",dem);
	return 0;
}