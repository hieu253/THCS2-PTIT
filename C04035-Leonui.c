#include<stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
int main(int argc, char const *argv[])
{
	int n;
	int sumU=0,sumD=0;
	scanf("%d",&n);
	int minU;
	int minD;
	for (int i = 0; i < n; ++i)
	{	
		int a,b;
		scanf("%d%d",&a,&b);
		sumU+=a;
		sumD+=b;
		minU=min(minU,a);
		minD=min(minD,b);
	}
	if(sumU>sumD){
		printf("%d",sumU+minD);
	}
	else printf("%d",sumD+minU);
	return 0;
}