#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a=n;
	while(n>0){
		if(n<10)	printf("%d ",n );
		n/=10;
	}
	printf("%d ",a%10);
	return 0;
}