#include<stdio.h>
#include<string.h>
#include<math.h>
struct word
{
	char val[1000];
	int frequency;

};
typedef	struct word word;
int find(word a[],int n,char tmp[])
{
	for (int i = 0; i < n; ++i)
	{
		if(strcmp(tmp,a[i].val)==0)
		{
			return i;
		}
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	word a[10000];
	int n=0; 
	char tmp[10000];
	while(scanf("%s",tmp)!=-1){	
			int idx=find(a,n,tmp);
			if(idx==-1)
			{
				strcpy(a[n].val,tmp);
				a[n].frequency=1;
				n++;
			}
			else
			{
				a[idx].frequency+=1;
			}

		
	}
	int max=0;
	for (int i = 0; i < n; ++i)
	{
			if(max <= strlen(a[i].val) )		max=strlen(a[i].val);	
	}
	for (int i = 0; i < n; ++i)
	{	
		if(strlen(a[i].val)==max){
			printf("%s %d %d\n",a[i].val,max,a[i].frequency );
		}
	}
	return 0;
}