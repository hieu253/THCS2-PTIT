#include<stdio.h>
#include<math.h>
#include<string.h>
int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	
			if(n%i==0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	char c[20];
	int b[20]={0};
	gets(c);
	for(int i = 0 ; i < strlen(c) ; i++)
	{
		b[c[i]-'0']++;
	}
	for(int i=0;i<strlen(c);i++)
	{
		if(ngto(c[i]-'0')==1&&b[c[i]-'0']!=0)
		{
			printf("%c %d\n",c[i],b[c[i]-'0'] );
			b[c[i]-'0']= 0;
		}
	}


	return 0;
}