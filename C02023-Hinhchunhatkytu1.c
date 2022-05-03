#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>=b)	c=96+a;
	else		c=96+b;
	for (int i = 0; i <a ; ++i)
	{
		for (int j = 0; j <b; ++j)
		{
			if(j<=i)	printf("%c",c-j);		
		}
		for (int j =i+1 ; j <b ; ++j)
		{
			printf("%c",c-i );
		}
		printf("\n");
	}	
	return 0;
}