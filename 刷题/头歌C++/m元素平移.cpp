#include <stdio.h>
#define    N    15
void fun(int *w,int p,int n){
	for(int i=0;i<n-p;i++){
		w[i]=w[i+p+1];
	}
	for(int i=n-1;i>=n-p-1;i--){
		w[i]=i-n+p+2;
	}
}
int main()
{	int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i,p,n=15;
	scanf("%d",&p);
	fun(a,p,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}

