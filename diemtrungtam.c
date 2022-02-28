#include<stdio.h>

int main()
{
    int n;
    int a[10000],b[10000]={0};
    int kt=0;
    scanf("%d",&n);
    for(int i=1;i<=2*n-2;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
        if(b[a[i]]==n-1)   kt=1;
    }
      
    if(kt==1)           printf("Yes\n");
    else                printf("No\n");
    return 0;
}