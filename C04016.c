#include <stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	
			if(n%i==0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int n,T,i,a[1000];
	int d[1000]={0};
	scanf("%d",&T);
	int max=0;
	for(int t=1;t<=T;t++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if (a[i] > max)
            max = a[i];
			if(ngto(a[i])==1)	
				d[a[i]]++;
		}
	printf("Test %d:\n",t);
		for(i=2;i<max;i++){
			if(d[i]>=1)
				printf("%d xuat hien %d lan\n",i,d[i]);
			d[a[i]]=0;
		}
		
	}
	return 0;
}
