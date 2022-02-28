#include<stdio.h>
int giaithua(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",giaithua(i)/(giaithua(j)*giaithua(i-j)));
		}
			printf("\n");
	}
	return 0;
}