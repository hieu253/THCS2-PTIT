#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char c1[100],c2[100];
		scanf("%s %s",&c1,&c2);
		int size1=strlen(c1),size2=strlen(c2);// đặt tên biến cho độ dài 2 xâu;
		long long a=0,b=0;
		for (int i = 0; i < size1; ++i)	//những phần tử là 6 thì  chuyển thành 5 sao cho a nhỏ nhất
		{
			if(c1[i]=='6')	c1[i]='5';
			a=a*10+(c1[i]-'0');
		}
		for (int i = 0; i < size2; ++i)// những phần tử là 6 thì  chuyển thành 5 sao cho b nhỏ nhất
		{
			if(c2[i]=='6')	c2[i]='5';
			b=b*10+(c2[i]-'0');
		}
		printf("%lld ",a+b);// in ra giá trị của tổng a+b;
		a=0,b=0;
		for (int i = 0; i <size1 ; ++i)//những phần tử là 5 thì  chuyển thành 6 sao cho a lớn  nhất
		{
			if(c1[i]=='5')	c1[i]='6';
			a=a*10+(c1[i]-'0');
		}
		for (int i = 0; i <size2 ; ++i)//những phần tử là 5 thì  chuyển thành 6 sao cho b lớn nhất
		{
			if(c2[i]=='5')	c2[i]='6';
			b=b*10+(c2[i]-'0');
		}
		printf("%lld",a+b);// in ra giá trị của tổng a+b;
		printf("\n");
	}

	return 0;
}