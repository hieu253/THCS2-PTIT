#include<stdio.h>
void xuly(int n){
	int dem=0;
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
		for(int i=0;i<10;i++){
			if(n>=a[i])
			{
			dem=dem + n/a[i];
			n=n%a[i];
			}

		}
		printf("%d\n",dem);
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int n;
	while(t--){
		scanf("%d",&n);
		xuly(n);
	}
	return 0;
}