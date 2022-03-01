#include<stdio.h>
#include<math.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=2;i<=n;i++){
			while(n%i==0){
				printf("%d ",i);
				n/=i;
			}
		}
		printf("\n");
	}
	return 0;
}