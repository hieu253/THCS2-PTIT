#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t,n,a[10000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int temp=0;
		for(int i=0;i<n		;i++){
			if(a[i]!=a[n-i-1]) temp++;
		}
		if(temp==0)	printf("YES\n");
		else printf("NO\n");

	}
	return 0;
}