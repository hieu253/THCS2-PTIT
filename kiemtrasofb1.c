#include<stdio.h>
int fb(int n)
{
  	int a0=0,a1=1,a=0;
	while(n>=a1+a0){
	  	a=a1+a0;
	  	a0=a1;
	  	a1=a;
	  } 
	if(a==n)	return 1;
	else return 0;
}
int main()
{
   int i,n,d=0;
   scanf("%d",&n);
   printf("%d",fb(n));
   
}