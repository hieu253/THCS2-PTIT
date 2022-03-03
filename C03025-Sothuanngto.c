#include<stdio.h>
#include<math.h>

int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	
			if(n%i==0)
			return 0;
	}
	return 1;
}
int tongcs(int n){
	int sum=0;
	int check=1;
	while(n>0){
		sum+=n%10;
		int m=n%10;
		n/=10;
		if(!ngto(m))
		{
			check=0;
			break;
		}
	}
	if(ngto(sum)&&check==1)	return 1;
	return 0;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		int dem=0;
		scanf("%d%d",&a,&b);
		for (int i = a; i <=b ; ++i)
		{
			if(tongcs(i)&&ngto(i))	dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}