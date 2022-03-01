#include<stdio.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		int c=0,l=0,a;
		scanf("%d",&n);
		while(n>0){
			a=n%10;
			if(a%2==0)	c++;
			else	l++;
			n/=10;
		}
	printf("%d %d\n",l,c);
	}
	return 0;
}