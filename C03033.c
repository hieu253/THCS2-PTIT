#include <stdio.h>
void ptich(int n){
	printf("%d = ",n);
	for(int i=2;i<=n;i++){
		int count=0;
		while(n%i==0){
			count++;
			n/=i;
		}
		if(count!=0)	{
			printf("%d^%d ",i,count);
			if(n>i)	printf("* ");
		}
	}
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ptich(n);
		printf("\n");
	}
	return 0;
}