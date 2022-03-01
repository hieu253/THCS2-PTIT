#include<stdio.h>
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
	if(a==0||b==0)	printf("%d",a+b);
	else{
		while(a!=b){
			if(a>b)		a-=b;
			else		b-=a;
		}
		printf("%d\n",a);
	}
}}