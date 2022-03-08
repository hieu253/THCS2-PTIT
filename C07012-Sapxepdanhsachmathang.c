#include<stdio.h>
struct mat_hang
{
	char name[100],type[100];
	float giaban,giamua,loinhuan;
	int id;
};
typedef	struct mat_hang mh;
void solve(mh a[],int n)
{
	for (int i = 0; i < n ; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(a[j].loinhuan>a[i].loinhuan)
			{
				mh temp=a[i];
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
	mh a[n];
	getchar();
	for (int i = 0; i <n ; ++i)
	{
		gets(a[i].name);
		a[i].id=i+1;
		gets(a[i].type);
		scanf("%f%f",&a[i].giamua,&a[i].giaban);
		a[i].loinhuan=a[i].giaban-a[i].giamua;
		getchar();
	}
	solve(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d %s %s %.2f\n", a[i].id, a[i].name,a[i].type,a[i].loinhuan);
	}
	return 0;
}