#include<stdio.h> 
#include<math.h> 
int shh(int n) { 
	int sum=0; 
	for(int i=1;i<n;i++){ 
		if(n%i==0) sum+=i; 
}
	if(sum==n) return 1;
	else return 0;
	
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		int temp=a;
			a=b;
			b=temp;
	}
	for(int i=a;i<=b;i++){
		if(shh(i)==1)	printf("%d ",i);
	}
}
