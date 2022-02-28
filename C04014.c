#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,d[10005]={0},a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		 scanf("%d",&a[i]);
		 
	}
	for(int i=0;i<n;i++){
		d[a[i]]++; 
		}
	for(int i=0;i<n;i++){
		if(d[a[i]]>0){
			printf("%d %d\n",a[i],d[a[i]]);
			d[a[i]]=0;
		}
	}
	return 0;
}
