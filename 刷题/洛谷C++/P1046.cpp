#include<stdio.h>

int main(){
	
	int arr[10]={0};
	int h=0;
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&h);
	
	int cnt=0;
	for(int i=0;i<10;i++){
		if(arr[i]<=h+30){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
