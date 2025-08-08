#include<stdio.h>

#define SIZE 1001

int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[SIZE];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
	
	int cost=0;
	for(int i=n-1;i>0;i--){
		cost=cost+arr[i]+arr[i-1];
		i-=2;
	}
	
	printf("%d",cost);
	return 0;
}
