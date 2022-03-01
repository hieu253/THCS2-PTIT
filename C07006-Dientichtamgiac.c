#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
		double a,b,c,ax,ay,bx,by,cx,cy,d1,d2,d3,s;
		scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
		d1=sqrt(pow((bx-ax),2)+pow((by-ay),2));
		d2=sqrt(pow((cx-bx),2)+pow((cy-by),2));
		d3=sqrt(pow((ax-cx),2)+pow((ay-cy),2));
		a=d1;
		b=d2;
		c=d3;
		s=(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)))/4;
		if(!(c>=a+b||a>=b+c||b>=c+a))
			printf("%.2lf\n",s);
		else
			printf("INVALID\n");
		}	
	return 0;
}