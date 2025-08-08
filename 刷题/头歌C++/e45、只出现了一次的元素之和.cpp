#include<stdio.h>

#define SIZE 101
int main(){
	
	int sum=0;
	
	int len=0;
	int arr[SIZE]={0};
	
	scanf("%d",&len);
	for(int i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	
//	for(int i=0;i<len;i++){
//		int flag=0;
//		for(int j=0;j<len-i-1;j++){
//			if(arr[j]>arr[j+1]){
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//				flag=1;
//			}
//		}
//		if(!flag){
//			break;
//		}
//	}
	
	int visited[SIZE]={0};
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(arr[j]==arr[i]&&j!=i){
				visited[i]=1;
				break;
			}
		}
	}
	
	for(int i=0;i<len;i++){
		if(!visited[i]){
			sum+=arr[i];
		}
	}
	printf("%d",sum);
	return 0;
} 
