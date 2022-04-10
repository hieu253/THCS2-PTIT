#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[1000]={0};
    for (int i = 1; i <= m; ++i)
    {
        int x;
        scanf("%d",&x);
        int first,end;
        if(x-k<1)   first=1;
        else        first=x-k;
        if(x+k>=n)  end=n;
        else        end=x+k;
        for (int j = first; j <=end ; ++j)
        {
            a[j]=1;
        }
    }
    int ans=0;
    for (int i = 1; i <=n ; ++i)
    {
        if(a[i]==0)
        {
            for (int j = i; j <= i+2*k ; ++j)
            {
                a[j]=1;
            }
            ans++;
        }
    }
    printf("%d",ans );
    return 0;
}