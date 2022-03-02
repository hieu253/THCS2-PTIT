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
		int dem0=0,dem1=0,dem2=0,dem3=0,dem4=0,dem5=0,dem6=0,dem7=0,dem8=0,dem9=0;
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
		
		if(check==1)
		{
			for (int i = 0; i < size; i++)
			{
				if(c[i]=='0')	dem0=1;	
				if(c[i]=='1')	dem1=1;		
				if(c[i]=='2')	dem2=1;		
				if(c[i]=='3')	dem3=1;		
				if(c[i]=='4')	dem4=1;	
				if(c[i]=='5')	dem5=1;	
				if(c[i]=='6')	dem6=1;	
				if(c[i]=='7')	dem7=1;	
				if(c[i]=='8')	dem8=1;
				if(c[i]=='9')	dem9=1;		
			}
		
		if(dem0+dem1+dem2+dem3+dem4+dem5+dem6+dem7+dem8+dem9<10)	printf("NO");
		else	printf("YES");
		}
		    printf("\n");

	}
	return 0;
}