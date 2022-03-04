#include<stdio.h>
#include<math.h>
int tach(int n){
    long long sum=0;
    for (int i = 2; i <=sqrt(n); ++i)
    {
        while(n%i==0)
        {
            sum+=i;
            n/=i;
        }   
        
    }
    if(n==1)    return sum;
    if(n>1)     return n+sum;

}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    long long tonguocso=0;
    while(n--)
    {
        int x;
        scanf("%d",&x);
        tonguocso+=tach(x);
    }
    printf("%lld",tonguocso);
    return 0;
}