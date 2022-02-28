#include<stdio.h>
void xuly(){
	int n;
	int a[1000],max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max)	
			max=a[i];
	}
	printf("%d\n",max);
	for (int i = 0; i < n; i++)
        if (a[i] == max)
            printf("%d ", i);
    printf("\n");
	}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
		xuly();
	return 0;
}