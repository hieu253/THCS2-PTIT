#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		float a,b,c,d;
		scanf("%f%f%f%f",&a,&b,&c,&d);
		if(a>c)// nếu a>c thì đổi chỗ a với c
		{
			float tmp1=a;
				a=c;
				c=tmp1;
		}
		if(b>d)// nếu b>d thì đổi chỗ b với d
		{
			float tmp2=b;
				b=d;
				d=tmp2;
		}
		if(c-a==d-b)	printf("YES\n");// nếu c-a=d-b sẽ là hình vuông.
		else		printf("NO\n");

	}
	return 0;
}