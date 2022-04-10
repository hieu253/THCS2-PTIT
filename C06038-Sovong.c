#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
typedef char xau[200];
  
bool cong(xau a,xau b,int n,xau s)
{
    int d=0;
    for(int i=0;i<n;i++) { d=a[i]-'0'+b[i]-'0'+d; a[i]='0'+d%10; d=d/10; } if(d>0) return 0;
    if(strstr(s,a)) return true;
    return false;
}
  
int main()
{
    int T=0;
    bool KQ[10001];
    xau X[10000];
    xau x,z,y,t;
    char *p,*q;
    while(scanf("%s",x) != EOF)
    {
        T++;
        bool ok=true;
        strcpy(X[T],x);
        int n=strlen(x);
        for(int i=0,j=n-1;i<j;i++,j--) swap(x[i],x[j]);
        strcpy(y,x);
        strcat(y,x);
        strcpy(z,x);
        for(int i=2;i<=n&&ok;i++)
        {
            ok=cong(z,x,n,y);
        }
  
        KQ[T]=ok;
    }
    for(int i=1;i<=T;i++)
    if(KQ[i])  printf("%s is cyclic\n",X[i]);
    else printf("%s is not cyclic\n",X[i]);
  //  getch();
}