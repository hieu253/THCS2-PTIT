#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char c[]){
	int l=0,r=strlen(c)-1;
	int count=0;
	while(l<r){
		if(c[l]!=c[r])
			count++;

		l++;
		r--;
	}
	if(strlen(c)%2==1&&count<=1)
			return 1;
	if(strlen(c)%2==0&&count==1)
			return 1;

	return 0;

}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[21];
		gets(c);
		if(check(c))	printf("YES\n");
		else			printf("NO\n");
	}
	return 0;
}