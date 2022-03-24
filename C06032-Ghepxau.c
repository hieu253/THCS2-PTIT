#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		char a[100][100];
		scanf("%d",&n);
		for (int i = 0; i <n ; ++i)
		{
			scanf(" ");
			scanf("%s",a[i]);
		}
		char x[100],y[100];
		for (int i = 0; i <n-1 ; ++i)
		{
			for (int j = i+1; j <n ; ++j)
			{
				strcpy(x,a[i]);
				strcat(x,a[j]);
				strcpy(y,a[j]);
				strcat(y,a[i]);
				if(strcmp(x,y)>0){
					strcpy(x,a[i]);
					strcpy(a[i],a[j]);
					strcpy(a[j],x);
			}

			}
		}
		for (int i = 0; i < n; ++i)
		{
			printf("%s",a[i]);
		}
		printf("\n");


	}
	return 0;
}