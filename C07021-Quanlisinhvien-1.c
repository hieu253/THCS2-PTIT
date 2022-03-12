#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char name[100];
	int msv;
	float a,b,c;
	int id;
};
typedef	struct sinhvien sv;
sv nhap(int msv){
	sv x;
	x.id=msv;
	getchar();
	gets(x.name);
	scanf("%f%f%f",&x.a,&x.b,&x.c);
	return x;
}
void in(sv x){
	printf("%d %s %.1f %.1f %.1f",x.id,x.name,x.a,x.b,x.c);

}
float sum(sv x){
	return	x.a+x.b+x.c;
}
void sapxep(sv a[] ,int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j =i+1 ; j <n ; ++j)
		{
			if(sum(a[j])<sum(a[i])){
				sv tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}

}
int main(int argc, char const *argv[])
{
	sv a[100];
	int n=0,dem=0,sua[100];
	while(1){
		int chucnang;
		scanf("%d",&chucnang);
		if(chucnang==1)
		{
			int x;
			scanf("%d",&x);
			for (int i = 0; i < x; ++i)
			{
				a[n]=nhap(n+1);
				n++;
			}
		}
		else if(chucnang==2)
		{
			int msv;
			scanf("%d",&msv);
			sua[dem]=msv;
			dem++;
			sv i = nhap(msv);
			a[msv-1]=i;
		}
		else if(chucnang==3)
		{
			printf("%d\n",n);
			for (int i = 0; i <dem ; ++i)
			{
				printf("%d ",sua[i]);
			}
			printf("\n");
			sapxep(a,n);
			for (int i = 0; i < n; ++i)
			{
				in(a[i]);
				printf("\n");

			}
			break;
		}
	}	
	return 0;
}