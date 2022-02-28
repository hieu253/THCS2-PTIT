#include<stdio.h>
int thuannghich(int n){
	int a=n;
	int res=0;
	while(n>0){
		res=res*10+n%10;
		n/=10;
	}
	if(res==a)	return 1;
	return 0;
}
int tach(int n){
	while(n>0){
		int m=n%10;
		if(m==9)	return 0;
		n/=10;
	}
	return 1;

}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++){
		if(thuannghich(i)&&tach(i))	
		{
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n");
	printf("%d",dem);
	return 0;
}
