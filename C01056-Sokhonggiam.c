#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[200];
		gets(c);
	int size=strlen(c);
	int check=0;
	for (int i = 1; i < size; ++i)
	{
		if(c[i]<c[i-1])
		{
			check=1;
			break;
		}
	}
		if(check==1)	printf("NO\n");
		else			printf("YES\n");
	
	}


	return 0;
}