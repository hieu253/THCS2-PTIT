#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void dao(int a[],int n){
	int l = 0 ,r= n - 1;
	while(l<r){
		int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
		l++ ;
		r--;
	}
}
void xuly(char a[],char b[]){
	int n1=strlen(a);
	int n2=strlen(b);
	int n=0;
	int x[n1],y[n1],z[n1+1];
	for (int i = 0; i < n1; ++i)	x[i]=a[i]-'0';
	for (int i = 0; i < n2; ++i)	y[i]=b[i]-'0';
	
	dao(x,n1);
	dao(y,n2);

	for (int i = n2; i < n1 ; ++i)	y[i]=0;
	int mer=0;
	for (int i = 0; i < n1; ++i)
	{
		int temp=x[i]+y[i]+mer;
		z[n]=temp%10;
		mer=temp/10;
		n++;
	}
	if(mer)	z[n++]=mer;
	for(int i=n-1;i>=0;i--)	printf("%d",z[i]);	
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d\n",&t);
	while(t--){
		char c[1001],d[1001];
		gets(c);
		gets(d);
		if(strlen(c)>strlen(d))	xuly(c,d);
		else	xuly(d,c);
		printf("\n");
	}
	return 0;
}