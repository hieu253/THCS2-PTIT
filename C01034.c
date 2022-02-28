#include<stdio.h>
#include<math.h>
int sochinhphuong(int n){
	int i=sqrt(n);
	if(i*i==n)	return 1;
	else return 0;
}

int main(int argc, char const *argv[])
{
	int a,b;
	int dem=0;
	scanf("%d%d",&a,&b);
	for( int i=a;i<=b;i++){
		if(sochinhphuong(i)==1)
			dem++;
	}
	printf("%d\n",dem);

	for(int i=a;i<=b;i++){
		if(sochinhphuong(i)==1)
			printf("%d\n",i);				
	}
	
	return 0;
}










