#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char name[100],date[100];
	float d1,d2,d3,sum;
};
typedef struct sinhvien sv;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	sv a[n];
	float max=0;
	getchar();
	for (int i = 0; i < n; ++i)
	{
		gets(a[i].name);
		gets(a[i].date);
		scanf("%f %f %f",&a[i].d1,&a[i].d2,&a[i].d3);
		getchar();
		a[i].sum=a[i].d1+a[i].d2+a[i].d3;
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i].sum>max)	
			max=a[i].sum;
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i].sum==max)
			printf("%d %s %s %.1f\n",i+1,a[i].name,a[i].date,a[i].sum);
	}
	return 0;
}