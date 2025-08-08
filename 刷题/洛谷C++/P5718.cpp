#include<stdio.h>

#define SIZE 1001
int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[SIZE];
	int min;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(i==0){
			min=arr[i];
		}
		
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("%d",min);
	return 0;
} 
