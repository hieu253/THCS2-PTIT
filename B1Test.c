#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	long long n;
	scanf("%lld",&n);
	long long x=-1e5;// khai báo 1 biến x rất nhỏ để duyệt.
	int check=0;
	while(pow(2,x)<=n)//vào vòng while nếu 2 mũ x >n thì thoát khỏi while.
	{
		if(pow(2,x)==n)//  nếu 2 mũ x = n thì trả về giá trị đúng.
		{
			check=1;
			break;
		}
		else	x++;	// nếu không bằng thì tăng biến x lên đến khi nào bằng n thì trả về giá trị đúng rồi break.
	}
	if(check==1)	printf("true");
	else			printf("false");

	return 0;
}