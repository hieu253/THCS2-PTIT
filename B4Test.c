#include<stdio.h>
#include<math.h>
long long vuong(long long n)	// hàm kt hình vuông.diện tích hình vuông là 1 số chính phương.
{
	long long y=sqrt(n);
	if(y*y==n)	return y;
	return 0;// nếu không phải số chính phương thì return 0;
}
long long swap(long long *a,long long *b)// hàm đổi chỗ 2 số.
{
	long long tmp=*a;
	*a=*b;
	*b=tmp;
	return 0;
}
int main(int argc, char const *argv[])
{
	long long a,b,c,d,e,f;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	long long s=a*b+c*d+e*f;
	long long y=vuong(s);	//y: cạnh hình vuông;
	if(y==0){
		printf("NO");
	}
	else{
	if(a>b)	swap(&a,&b);// 	a:chiều rộng, b: chiều dài
	if(c>d) swap(&c,&d);// 	c:chiều rộng, d: chiều dài
	if(e>f)	swap(&e,&f);//	e:chiều rộng, f: chiều dài
	if(b==d&&d==f&&f==y)// nếu 3 chiều dài đều bằng nhau thì là hình vuông.
	{
		printf("YES");
	}
	else
	{
	if(d>b)// nếu d>b đổi chỗ b với d và a với c.
	{
		swap(&b,&d);
		swap(&a,&c);
	}
	if(f>b)//  nếu f>b đổi chỗ với f và a với e.
	{
		swap(&b,&f);
		swap(&a,&e);
	}
	if(b==y)//  nếu b==y(b là cạnh hình vuông) thì xét tổng của  các cạnh 2 hình chữ nhật còn lại.Nếu tổng 2 cạnh bằng b thì là hình vuông.
	{
		if(c+e==y||d+f==y||c+f==y||d+e==y)	printf("YES");
		else	printf("NO");
	}
	else
	{
		printf("NO");
	}
	}
	}
}
