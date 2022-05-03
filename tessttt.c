#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d\n",&t);
    while(t--){
        char s1[100],s2[100];
        scanf("%s%s",&s1,&s2);
        long long a=0,b=0;
        for (int i = 0; i < strlen(s1); ++i) //chuyển phần tử thứ nhất sao cho nhỏ nhất;
        {
            if(s1[i]=='6')  s1[i]='5';
            b=b*10+(s1[i]-'0');
        }
        for (int i = 0; i < strlen(s2); ++i)// chuyển phần tử thứ 2 sao cho nhỏ nhất;
        {
            if(s2[i]=='6')  s2[i]='5';
            a=a*10+(s2[i]-'0');
        }
        printf("%lld ",a+b);// in ra giá trị tổng của 2 phần tử sau khi biến đổi về 2 số nhỏ nhất có thể.
        m=0,n=0;// reset giá trị m,n về 0;
        for (int i = 0; i <strlen(s1) ; ++i)//chuyển phàn tử thứ nhất sao cho lớn nhất;
        {
            if(s1[i]=='5')  s1[i]='6';
            b=b*10+(s1[i]-'0');
        }
        for (int i = 0; i <strlen(s2) ; ++i)//chuyển phần tử thứ 2 sao cho lớn nhất;
        {
            if(s2[i]=='5')  s2[i]='6';
            a=a*10+(s2[i]-'0');
        }
        printf("%lld",a+b);// in ra giá trị tổng của 2 phần tử sau khi biến đổi về 2 số lớn nhất có thể.
        printf("\n");
    }

    return 0;
}