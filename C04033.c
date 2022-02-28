#include<stdio.h>
void nhap(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void xuly(int a[], int n)
{
    int i,j,b[100]={0};
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            b[j]=-1;
            }
        }
    }
}
    for(i=0;i<n;i++)
    {
        if(b[i]!=-1)
        {
        printf("%d ",a[i]);
    }
}
}
int main(){
    int a[100],n;
    scanf("%d",&n);
    nhap(a,n);
    xuly(a,n);
}