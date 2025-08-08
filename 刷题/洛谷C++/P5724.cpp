#include<stdio.h>

int main(){
	
	int n,arr[110];
	scanf("%d",&n);
	
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
	
	printf("%d",arr[n-1]-arr[0]);
	return 0;
}
