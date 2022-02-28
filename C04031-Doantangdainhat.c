#include<stdio.h>
int main(int argc, char const *argv[])
{
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++){
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}

	int res=1,cnt=0,b[n],dem=1;
	//cnt :đếm xem có bao nhiêu dãy con
	//dem: đếm độ dài dãy con
	//b[n]:lưu chỉ số của dãy con liên tiếp
		for (int i = 1; i < n; i++)
		{
			if(a[i]>a[i-1])	dem++;
			else dem=1;

			if(dem>res)
			{
				res=dem;
				b[0]=i-res+1;
				cnt=1;
			}
			else if(dem==res){
				b[cnt]=i-res+1;
				cnt++;// tăng số lượng dãy con
			}
		}
		printf("Test %d:\n",t);
		printf("%d\n",res);
		for (int i = 0; i < cnt; i++)
		{
			for (int j = 0; j < res; j++)
			{
				printf("%d ",a[b[i]+j]);
		}
			printf("\n");
		}
	}
		return 0;
}