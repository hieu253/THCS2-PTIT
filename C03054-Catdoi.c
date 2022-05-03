#include<stdio.h>
#include<string.h>
void solve(char c[])
{
	int check=0;
	int size=strlen(c);
	for (int i = 0; i < size; ++i)
	{
		if(c[i]=='1')	check=1;
		else if(c[i]!='0'&&c[i]!='8'&&c[i]!='9')
		{
			check=0;
			break;
		}
	}
	if(!check)
	{
		printf("INVALID\n");
		return;
	}
	check=0; 
	for (int i = 0; i <size; ++i)
		{
			if(c[i]=='1')
			{
				printf("1");
				check=1;
			}
			else if(check!=0)
			{
				printf("0");
			}
		}
		printf("\n");	
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char c[20];
		scanf("%s",c);
		solve(c);
	}
	return 0;
}