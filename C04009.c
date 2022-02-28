#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	
	int a[1000];
	int c[100],l[100];
	int nc=0,nl=0;
	for(int i=0;i< n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			c[nc++]=a[i];
		else	
			l[nl++]=a[i];
		}
	for(int i=0;i<nc;i++){
		printf("%d ",c[i]);

	}
	printf("\n");
	for (int i = 0; i < nl; ++i)
	{
		printf("%d ",l[i]);
	}
	
	return 0;
}