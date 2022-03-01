#include <stdio.h>
#include <math.h>
int check(int n)
{
    long long a = 0;
    int p = 0;
    while (n > 0)
    {
        a += (n % 2) * pow(10, p);
        p++;
        n /= 2;
    }
    return a;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", check(n));
}