#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char c[20];
    scanf("%s",&c);
    int b[10]={0};
    int size=strlen(c);
    for (int i = 0; i <size ; ++i)
    {
        int a=c[i]-'0';
        if(a==2||a==3||a==5||a==7)
        {
            b[a]++;
        }
    }
    for (int i = 0; i <size ; ++i)
    {
        int a=c[i]-'0';
        if(b[i]>0)
        {
            printf("%d %d\n",a,b[a]);  
            b[a]=0;
        }
    }
    return 0;
}