#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int s=(int) log10(n);
    int a=pow(10,s);
    printf("%d %d",n/a,n%10);
    return 0;
}