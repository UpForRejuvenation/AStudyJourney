#include<stdio.h>

#define SIZE 1001
int main(){
	
	int arr[SIZE]={0},arrlen=0;
	
	while(getchar()!=']'){
		scanf("%d",&arr[arrlen]);
		arrlen++;
	}
	
	int k;
	scanf("%d",&k);
	
	for(int i=0;i<arrlen;i++){
		int flag=0;
		for(int j=0;j<arrlen-i-1;j++){
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
	
	int n1=arr[k-1]-arr[0],n2=arr[arrlen-1]-arr[arrlen-k];
	int ret=n1<n2?n1:n2;
	printf("%d",ret); 
	return 0;
} 
