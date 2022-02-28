#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[1000],b[1000];
	int x,y,z;
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++){
	scanf("%d %d%d",&x,&y,&z);
	for (int i = 0; i < x; ++i)
		scanf("%d",&a[i]);
	for (int i = 0; i < y; ++i)
		scanf("%d",&b[i]);
	printf("Test %d:\n",t);
	for (int i = 0; i < z; i++)
		printf("%d ",a[i]);
	for (int i = 0; i < y; i++)
		printf("%d ",b[i]);
	for(int i=z;i<x;i++)
		printf("%d ",a[i]);
	printf("\n");
}
	return 0;
}