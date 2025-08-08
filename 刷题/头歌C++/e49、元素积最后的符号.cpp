#include<stdio.h>

int signFunc(int num);
int main(){
	
	int arr[1010]={0};
	int n,mult=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		arr[i]=signFunc(arr[i]);
		mult*=arr[i];
	}
	printf("%d",mult);
	return 0;
}

int signFunc(int num){
	if(num<0){
		return -1;
	}
	else if(num>0){
		return 1;
	}
	else{
		return 0;
	}
}
