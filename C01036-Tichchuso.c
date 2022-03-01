#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	int tich=1;
	scanf("%d",&n);
	while(n>0){
		tich*=n%10;
		n/=10;
	}
	printf("%d\n",tich);
	return 0;
}