#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m;
    scanf("%d%d",&n,&m);
    int k=64;
        for (int i = 0; i < n; ++i)
        {
            if(i<=m)
            {
                for (int j = 0; j <m -i; ++j)
                {
                    printf("%c",k+j);
                }
            k++;
                for (int j = m-i; j <m; ++j)
                {
                    int k=64;
                    printf("%c",m+k-1 );
                }
            }
            else{
                for(int j=0;j<m;j++){
                    printf("%c",m+63);
                }
            }
            printf("\n");
        }
    }

