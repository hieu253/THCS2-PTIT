#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int tangdan(char c[])
{
	if(c[6]<c[7]&&c[7]<c[8]&&c[8]<c[10]&&c[10]<c[11])
		return 1;
	return 0;
}
int bangnhau(char c[]){
	if(c[6]==c[7]&&c[7]==c[8]&&c[8]==c[10]&&c[10]==c[11])
		return 1;
	else if(c[6]==c[7]&&c[7]==c[8]&&c[10]==c[11])	
		return 1;
	return 0;
}
int locphat(char c[]){
	if(c[6]!='6'&&c[6]!='8')	return 0;
	if(c[7]!='6'&&c[7]!='8')	return 0;
	if(c[8]!='6'&&c[8]!='8')	return 0;
	if(c[10]!='6'&&c[10]!='8')	return 0;
	if(c[11]!='6'&&c[11]!='8')	return 0;
	return 1;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[100];
		gets(c);
		if(tangdan(c)||bangnhau(c)||locphat(c))	printf("YES");
		else	printf("NO");	
		printf("\n");
	}
	return 0;
}