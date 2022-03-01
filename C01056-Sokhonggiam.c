#include<stdio.h>
int check(int n){
	int a=n%10;
	n/=10;
	while(n>0){
		if(n%10>=a)	return 0 ;
		a=n%10;
		n/=10;

	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(check(n))	 printf("YES\n");
		else			printf("NO\n");
		}
	return 0;
}