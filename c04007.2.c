#include <stdio.h>
void nhap(int a[], int n) {

    for(int i=0;i<n;i++){
        scanf ("%d", &a[i]);
    }
    }

void in(int a[], int n){
    for (int i=0;i<n;i++)
        printf ("%d ", a[i]);
        }
void chen(int a[], int n, int b[], int m, int k ){
    int i;
    for (i=m+n-1;i>=k;i--){
    a[i]=a[i-m];
    }
    for (i=k;i<k+m;i++){
    a[i]=b[i-k];
    }
    }
main () {
    int a[100], b[100], n,m,k;
    scanf("%d%d", &n, &m);
    nhap(a,n);
    nhap(b,m);
    scanf("%d", &k);
    chen(a,n,b,m,k);
    in(a, m+n);
    }