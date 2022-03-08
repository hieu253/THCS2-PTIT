#include<stdio.h>
int ucln(int a, int b)
{
   	while(a!=b){
   		if(a>b)	a=a-b;
   		if(b>a)	b=b-a;
   	}
   	if(a==1)	return 1;
   	return 0;
}
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i = a; i <=b ; ++i)
	{
		for (int j = i+1; j <= b; ++j)
		{
			if(ucln(i,j))
			{
				printf("(%d,%d)\n",i,j);	
			}		
		}	
	}
	return 0;
}