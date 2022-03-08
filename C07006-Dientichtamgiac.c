#include<stdio.h>
#include<math.h>
struct point 
{
	double x,y;
};
typedef struct point point;
double kc(point a,point b){
	double dx=a.x-b.x,dy=a.y-b.y;
	return sqrt(dx*dx+dy*dy);	
}
double check(double a, double b,double c){
	if(a+b<=c||a+c<=b||b+c<=a)	return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		point a,b,c;
		scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
		double d1=kc(a,b),d2=kc(b,c),d3=kc(a,c);
		if(!check(d1,d2,d3))
			printf("INVALID\n");
		else
		{
			double s=(d1+d2+d3)*(d1+d2-d3)*(-d1+d2+d3)*(d1-d2+d3);
			printf("%.2f\n",0.25*sqrt(s));
		}
	}
	return 0;
}