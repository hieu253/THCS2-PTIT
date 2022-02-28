#include<stdio.h>
#include<math.h>
int ngto(int n){
    int i;
    if(n<2){
        return 0;
    }
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
void nhap(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void xuly(int a[],int n){
    int b[100]={0},i,j;
    for( i=0;i<n;i++)
    {
    	for( j=i+1;j<n;j++)
    	{
    		if(a[i] >= a[j])
    		{
    			int doi = a[i];
    			a[i] =a[j];
  	  			a[j] = doi;
        }
    }
}
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
	for(i=0;i<n;i++){
    	if(ngto(a[i]))
    	{
    	if(b[i]!=-1)
    	{
    		printf("%d xuat hien %d lan\n",a[i],b[i]);
			}
		}
	}
}

int main(){
    int t,x;
    scanf("%d",&t);
    for(x=1;x<=t;x++){
    int n,a[100];
    scanf("%d",&n);
    nhap(a,n);
    printf("Test %d:\n",x);
    xuly(a,n);
}
}