#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int i=sqrt(n);
		if(i*i==n)	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}