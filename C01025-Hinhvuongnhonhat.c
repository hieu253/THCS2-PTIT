#include<stdio.h>
int main(int argc, char const *argv[])
{
	int x1,x2,y1,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int x3,x4,y3,y4;
	scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
	int maxx,maxy,minx,miny;
	if(x2>x4)	 maxx=x2;
	else		maxx=x4;
	if(y2>y4)	 maxy=y2;
	else		maxy=y4;
	if(x1<x3)	minx=x1;
	else		minx=x3;
	if(y1<y3)	miny=y1;
	else		miny=y3;
	int rong=maxx-minx;
	int dai=maxy-miny;
	if(rong>=dai)	printf("%d",rong*rong);
	else			printf("%d",dai*dai);
	return 0;
}