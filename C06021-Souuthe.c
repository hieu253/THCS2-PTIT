#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[1001];
		gets(c);
		int size=strlen(c);
		int check=1;
		int chan=0,le=0;
		for (int i = 0; i < size; ++i)
		{
			if(c[i]>='0'&&c[i]<='9'&&c[0]!='0')	{check=1;}
			else
			{
				check=0;
				break;
			}
		}
		if(check==0)
		{
			printf("INVALID");
		}
		else
		{
		for (int i = 0; i < size; ++i)
		{
			if((c[i]-'0')%2==0)	chan++;
			else				le++;
		}
		if(chan>le&&size%2==0)	printf("YES");
		else if(le>chan&&size%2==1)	printf("YES");
		else						printf("NO");

		}
		printf("\n");

	}
	return 0;
}