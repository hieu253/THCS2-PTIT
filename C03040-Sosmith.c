#include<stdio.h>
#include<math.h>
int ngto(int n)
{
	if(n<2)	return 0;
	else
	{
		for (int i = 2; i <=sqrt(n) ; ++i)
		{
			if(n%i==0)	return 0;
		}
	}
	return 1;
}

int tongcs(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int sumcsnt(int n)
{
	int sum=0;
	for (int i = 2; i <=sqrt(n) ; ++i)
	{

		while(n%i==0)
		{
			sum+=tongcs(i);
			n/=i;
		}
	}
	if(n==1)	 return sum;
	else	return	sum+tongcs(n);
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	printf(sumcsnt(n)==tongcs(n)?"YES":"NO");
	return 0;
}