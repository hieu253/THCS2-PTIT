#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
	char c;
	int n=0;
	int chan=0,le=0;
	while(c!='\n')
	{
		int a;
		scanf("%d",&a);
		n++;
		if(a%2==0)	chan++;
		else		le++;
		c=getchar();
	}
	if(chan>le&&n%2==0)	printf("YES\n");
	else if(le>chan&&n%2==1)	printf("YES\n");
	else				printf("NO\n");
}
	return 0;
}