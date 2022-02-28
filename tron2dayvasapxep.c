#include<stdio.h>
void nhap(int a[],int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
}
void xuly(int a[],int b[],int n)
{	
	int c[2*n];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>=a[j]){
				int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
			}		
		}
		for(int j=i+1;j<n;j++){
			if(b[i]<=b[j]){
				int tmp=b[i];
					b[i]=b[j];
					b[j]=tmp;
			}		
		}
	}
	int x=0,y=0;
	for(int i=0;i<2*n;i++){
		if(i%2==0)	{c[i]=a[x];
		x++;}
		else{		c[i]=b[y];
		y++;}
	}
	for(int i=0;i<2*n;i++){
		printf("%d ",c[i]);
	}
}
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	int n;
	int a[1000];
	int b[1000];
	for(int t=1;t<=T;t++){
		scanf("%d",&n);
		nhap(a,b,n);
		printf("Test %d:\n",t);
		xuly(a,b,n);
		printf("\n");
	}
	return 0;
}