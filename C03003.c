#include<stdio.h>
#include<math.h>
int ngto(int n){
	if(n<2)	return 0 ;
	else{
		for(int i=2;i<=sqrt(n);i++)	if(n%i==0)
			return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for(int i = 2;;i++){
		if(ngto(i)){
		printf("%d \n",i);
		n--;
		if(n==0) break;}}
	
	return 0;
}