#include <stdio.h>
void ptich(int n){
	for(int i=2;i<=n;i++){
		while(n%i==0)
		{
			n/=i;
			printf("%d",i);
			if(n!=1)
			printf("x");
			
		
	}
}}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	ptich(n);
	return 0;
}