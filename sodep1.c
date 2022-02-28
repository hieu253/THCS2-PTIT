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
		for (int i = 0; i < size; ++i)
		{
			if((c[i]-'0') %2!=0)
			{
				check2=0;
				break;
			}	
		}
		printf(check1&&check2?"YES\n":"NO\n");

	}
	return 0;
}