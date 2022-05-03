#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if(i<=j)	 printf("%c",65+j );
		}
		for (int j = b-1; j >=0 ; --j)
		{
			if(i>j)	printf("%c",65+j );
		}
		printf("\n");
	}
	return 0;
}