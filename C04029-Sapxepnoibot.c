#include<stdio.h>
void swap(int *a, int *b){
	int tmp=*a;
		*a=*b;
		*b=tmp;
}
void bubblesort(int a[],int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		int check=0;
		for (int j = 0; j < n-i-1; ++j)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				check=1;
			}

		}
		if(check==0) 	break;
		printf("Buoc %d: ",i+1);
		for (int i = 0; i <n ; ++i)
		{
			printf("%d ",a[i]);
		}
		printf("\n");	
	}
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
	bubblesort(a,n);
	return 0;
}
