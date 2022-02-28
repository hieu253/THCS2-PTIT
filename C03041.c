#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int t;
	int a,b,c,d;

	scanf("%d",&t);
	while(t--){
		if(a>c){
		int tmp=a;
			a=c;
			c=tmp;
	}
	if(b>d){
		int m=b;
			b=d;
			d=m;
	}
		scanf("%d%d%d%d",&a,&b,&c,&d);
		float x=sqrt(pow((c-a),2));
		float y=sqrt(pow((d-b),2));
	if(x==y)	printf("YES\n");
	else		printf("NO\n");
	}
	return 0;
}