#include<stdio.h>

#define SIZE 10001
int main(){
	
	int arr[SIZE]={0};
	
	int n=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int k=0;
	scanf("%d",&k);
	
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
	
	for(int i=0;i<k;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
