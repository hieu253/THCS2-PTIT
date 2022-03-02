#include<stdio.h>
#include<math.h>
int prime[1000001];
void sieve(){
    for(int i=0;i<=1000000;i++)
    {
        prime[i]=1;
    }
    prime[0]=0, prime[1]=0;
    for(int i=2;i<=1000;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                prime[j]=0;
            }
        }
    } 
}
int main(int argc, char const *argv[])
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--){
        long long l,r,count=0;
        scanf("%lld%lld",&l,&r);
        for (int i = sqrt(l); i <=sqrt(r) ; ++i)
        {
            if(prime[i]) count++;
        }
        printf("%lld",count);
        printf("\n");
    }
    return 0;
}