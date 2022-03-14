#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,p;
	int i=1;
	int temp;
	scanf("%d%d",&n,&p);
	int count=0;
	while(p*i<=n){
		temp=p*i;
		while(temp%p==0)
		{
			temp/=p;
			count++;
		}
		i++;
	}
	printf("%d\n", count);



	}
	return 0;
}