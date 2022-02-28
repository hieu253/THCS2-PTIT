#include <stdio.h>
void ptich(int n){
	for(int i=2;i<=n;i++){
		int count=0;
		while(n%i==0){
			count++;
			n/=i;
		}
		if(count!=0)	{
			printf("%d %d ",i,count);
			if(n>i)	printf(" ");
		}
	}
}
int main(int argc, char const *argv[])
{
		int n;
		scanf("%d",&n);
		ptich(n);
	
	return 0;
}