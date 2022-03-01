#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	if(n%i==0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(ngto(n)==1)	printf("YES\n");
		else			printf("NO\n");
	}
	return 0;
}