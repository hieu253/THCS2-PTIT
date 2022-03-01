#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a=ceil(sqrt(m));
	int b=floor(sqrt(n));
	printf("%d\n",b-a+1);
	for (int i = a; i <= b; ++i)
	{
		printf("%d\n",i*i);
	}
	return 0;
}