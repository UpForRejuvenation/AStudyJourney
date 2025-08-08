#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int arr[4];
	for(int i=0;i<4;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<4;i++){
		int flag=0;
		for(int j=0;j<4-i-1;j++){
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
	
	int min=abs(arr[3]+arr[0]-arr[2]-arr[1]);
	printf("%d",min);
	return 0;
}
