#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char name[100],date[100];
	float d1,d2,d3,sum;
	int id;
};
typedef struct sinhvien sv;
void solve(sv a[],int n)
{
	for (int i = 0; i < n ; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(a[j].sum>a[i].sum)
			{
				sv temp=a[i];
				a[i]=a[j];
				a[j]=temp;		
			}
		}	
	}
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	sv a[n];
	getchar();
	for (int i = 0; i < n; ++i)
	{
		a[i].id=i+1;
		gets(a[i].name);
		gets(a[i].date);
		scanf("%f %f %f",&a[i].d1,&a[i].d2,&a[i].d3);
		getchar();
		a[i].sum=a[i].d1+a[i].d2+a[i].d3;
	}
	solve(a,n);
	for (int i = 0; i < n; ++i)
	{
			printf("%d %s %s %.1f\n",a[i].id,a[i].name,a[i].date,a[i].sum);
	}
	return 0;
}