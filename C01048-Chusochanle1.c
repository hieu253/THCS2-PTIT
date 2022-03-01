#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int c=0,l=0,t;
	while(n>0){
		t=n%10;
		if(t%2==0) c++;
		else l++;
		n/=10;
	}
	printf("%d %d",l,c);
	return 0;
}