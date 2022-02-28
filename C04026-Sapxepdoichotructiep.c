#include<stdio.h>
main(){
	int n;
	int a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(int i=0;i<n-1;i++){
		printf("Buoc %d: ",i+1);
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){	
			int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
	}
		}
		for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");	
	}
	

	return 0;
}