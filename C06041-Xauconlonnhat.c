#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char c[100001];
	gets(c);
	int pos=0;
	int size=strlen(c);
	int lastpos;
	while(pos<size){
		char tmp=c[pos];
		for (int i = pos; i < size; ++i)
		{
		if(c[i]>tmp)
		{
		tmp=c[i];
		}
	}
	for (int i = pos; i <size ; ++i)
	{

		if(c[i]==tmp)
		{
			printf("%c",c[i]);
			lastpos=i;
		}
		pos=lastpos+1;
	}
	}
	return 0;
}
