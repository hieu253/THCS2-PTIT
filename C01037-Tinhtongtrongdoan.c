#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	int sum=0;
	scanf("%d%d",&a,&b);
	if(a>b){
		int tmp=a;
			a=b;
			b=tmp;
		
	}
	for(int i=a;i<=b;i++){
		sum+=i;
	}
	printf("%d",sum);
	
	return 0;
}