#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[500];
		
		gets(c);
		int size=strlen(c);
		int check1=1;
		int check2=1;
		for (int i = 0; i < size; ++i)
		{
			if(c[i]!=c[size-i-1])
			{
				check1=0;
				break;
			}
		}
		int sum=0;
		int check3=1;
		for (int i = 0; i < size; ++i)
		{
			sum+=c[i]-'0';
		}
		if(sum%10!=0)	check2=0;
		if(c[0]!='8'||c[size-1]!='8')	check3=0;

		printf(check1&&check2&&check3?"YES\n":"NO\n");

	}
	return 0;
}