#include <stdio.h>
#define  N  20
int fun(int a[],int n){
	
	int temp=n,pre=0;
	for(int i=1;i<temp;i++){
		if(a[pre]==a[i]){
			n--;
		}
		else{
			a[++pre]=a[i];
		}
	}
	return n;
}
int main(){
	int a[N],i,n=20;
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	n=fun(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
