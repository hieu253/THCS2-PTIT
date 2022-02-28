#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    int b[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int dem=0,c[100];
    for (int i = 0; i < n; i++)
        if (b[a[i]] == 1)
            c[dem++]=a[i];
    printf("%d\n",dem);
    for (int i = 0; i < dem; ++i)
    {
        printf("%d ",c[i]);
    }
           
    return 0;
}