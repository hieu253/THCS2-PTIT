#include<stdio.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void sapxep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
			}		
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0)	printf("%d ",a[i]);		
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0)	printf("%d ",a[i]);		
	}
}
int main(int argc, char const *argv[])
{
	int n,a[1000];
	scanf("%d",&n);
	nhap(a,n);
	sapxep(a,n);
	return 0;
}
