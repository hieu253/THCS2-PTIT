#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(b==0)	printf("0" );
	else	printf("%d %d %d %.2f %d\n",a+b,a-b,a*b,(float)a/b,a%b);
	
	return 0;
}