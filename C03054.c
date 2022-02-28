#include<stdio.h> 
int main(){ 
int t; 
scanf("%d",&t); 
long long n; 
while(t--){ 
scanf("%lld",&n); 
int kt=1; 
int d; 
long long s=0,m=1;
	while(n>0){
		int a=n%10;
		n/=10;
		if (n==0&&a==0) printf("INVALID\n");
	}
 	 
 else{ 
 while(n>0){ 
 d=n%10; 
 if (d!=0 && d!=1 && d!=8 && d!=9) { 
 kt=0; break; } 
 else {if (d==1) d=1; 
 else d=0; s=s+d*m; m=m*10; n=n/10; } } 
 if(kt==0) 
 printf("INVALID\n"); 
 else printf("%lld\n",s); } 
} return 0; }