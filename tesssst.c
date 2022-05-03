#include<math.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long n;
    scanf("%lld",&n);
    long long x=-1e7;// khai báo 1 biến x rất nhỏ để duyệt tăng dần.
    int kt=0;
    while(pow(2,x)<=n)// lặp vòng while đến khi 2 mũ x > n
    {
    if(pow(2,x)==n) //nếu 2 mũ x bằng n thì trả về kt=1 
    {
        kt=1;
        break;
    }
    else{// nếu 2 mũ x khác n thì tăng x lên đến khi nào bằng n
        x++;
    }
    }
    if(kt==0){
        printf("false");
    }
    if(kt==1){
        printf("true");
    }
}
