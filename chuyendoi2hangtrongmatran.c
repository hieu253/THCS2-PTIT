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
			if(i==a)	printf("%d ",t[b][j]);
			else if(i==b)	printf("%d ",t[a][j]);
			else	printf("%d ",t[i][j]);
		}	
		printf("\n");
	}
	return 0;
}