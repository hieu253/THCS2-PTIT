#include<stdio.h>
#include<math.h>
int tongcs(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(sum%5==0) return 1;
	return 0;
}
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
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=0;i<n;i++){
		if(tongcs(i)&&ngto(i))	
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n");
	printf("%d",dem);
	return 0;
}
