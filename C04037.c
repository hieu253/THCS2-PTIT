#include<stdio.h>
void nhap(int a[],int n){
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&a[i]);
    }
}
void xuly(int a[],int n){
    int b[100]={0},i,j;
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            b[i]=1;
        	for(j=i+1;j<n;j++)
        	{
            if(a[i]==a[j])
            {
                b[i]++;
                b[j]=-1;
            }
        }
    }
}
    int dem=0;
    for (int i = 0; i < n; ++i)
    {
        if(b[i]>1)  dem++;

    }
    printf("%d\n",dem);
    for (int i = 0; i < n; ++i)
    {
        if(b[i]>1)  printf("%d ",a[i]);


    }
}
int main(int argc, char const *argv[])
{
    int n,a[100];
    scanf("%d",&n);
    nhap(a,n);
    xuly(a,n);
    return 0;
}
