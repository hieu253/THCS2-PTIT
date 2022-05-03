#include<stdio.h>
int main(int argc, char const *argv[])
{
    int C,n;
    scanf("%d %d",&C,&n);
    int W[n];
    for(int i=0;i<n;i++){
        scanf("%d",&W[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(W[i]>=W[j]){
                int   temp=W[i];
                    W[i]=W[j];
                    W[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=1;i<n;i++){
        if(sum<=C){
            sum=sum+W[i];
        }
    }
    printf("%d",sum);
    return 0;
}