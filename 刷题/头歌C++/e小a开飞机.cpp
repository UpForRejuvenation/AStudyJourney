#include<stdio.h>

#define SIZE 10001
int main(){
	
	int n,arr[SIZE];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int cnt=0,pre=arr[0],up=0;
	for(int i=1;i<n;i++){
		
		if(arr[i]>pre){
			up=1;
		}
		
		if(arr[i]<pre&&up){
			cnt++;
			up=0;
		}
		pre=arr[i];
	}
	
	printf("%d",cnt);
	return 0;
}
