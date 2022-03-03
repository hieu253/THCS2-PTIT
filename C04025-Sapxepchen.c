#include<stdio.h>
void in(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[100];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		int x=a[i],pos=i-1;
		while(pos>=0&&x<a[pos])
		{
			a[pos+1]=a[pos];
			pos--; 
			
		}
		a[pos+1]=x;
		printf("Buoc %d: ",i);
		in(a,i+1);
	}

	return 0;
}