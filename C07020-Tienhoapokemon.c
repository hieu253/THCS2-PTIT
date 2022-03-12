#include<stdio.h>
#include<math.h>
#include<string.h>
struct pokemon
{
	char name[100];
	int frequency;
};
typedef struct pokemon pokemon;
int count(int k,int m){
	int res=0;
	while(m>=k){
		int tmp=m/k;
		res+=tmp;
		m=m%k+tmp*2;  
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	pokemon a[n];
	int res=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%s",a[i].name);
		int k,m;
		scanf("%d%d",&k,&m);
		a[i].frequency=count(k,m);
		res+=a[i].frequency;
	}
	printf("%d\n",res);
	int max_fre=0;
	int pos;
	for (int i = 0; i < n; ++i)
	{
		if(a[i].frequency>max_fre){
			max_fre=a[i].frequency;
			pos=i;
		}
	}
	printf("%s",a[pos].name);

	return 0;
}