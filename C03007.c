#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	
			if(n%i==0)	return 0;
	}
	return 1;
}
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

void solve(){
	int a,b;
	scanf("%d%d",&a,&b);
	int dem=0;
	for(int i=a;i<=b;i++){
		if(ngto(i)&&thuannghich(i)){
			dem++;
			printf("%d ",i);
				if(dem%10==0)	
					printf("\n");
			}
		}
	printf("\n\n");
}
int main()
{
	int t,a,b;
	int dem=0;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	return 0;
}