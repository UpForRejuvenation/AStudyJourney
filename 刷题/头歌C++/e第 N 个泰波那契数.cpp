#include<stdio.h>

#define SIZE 40
int main(){
	
	int arr[SIZE];
	arr[0]=0,arr[1]=1,arr[2]=1;
	
	int n;
	scanf("%d",&n);
	
	for(int i=3;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
	}
	
	printf("%d",arr[n]);
	return 0;
}
