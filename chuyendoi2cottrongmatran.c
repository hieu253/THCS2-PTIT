#include<stdio.h>
int main(int argc, char const *argv[])
{
	int m,n;
	int t[100][100];
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&t[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j==a)	printf("%d ",t[i][b]);
			else if(j==b)	printf("%d ",t[i][a]);
			else	printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}