#include <stdio.h>
void ptich(int n){
	for(int i=2;i<=n;i++){
		int count=0;
		while(n%i==0){
			count++;
			n/=i;
		}
		if(count!=0)	{
			printf("%d(%d) ",i,count);
			if(n>0)	printf(" ");
		}
	}
}
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	for (int t = 1; t <=T; ++t)
	{
		
		int n;
		scanf("%d",&n);
		printf("Test %d: ",t);
		ptich(n);
		printf("\n");
	}
	return 0;
}	