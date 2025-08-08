#include<stdio.h>

#define SIZE 100001
int main(){
	
	int arr[SIZE]={0};
	int min;
	int max;
	int len=0;
	getchar();
	char c;
	while(scanf("%d",&arr[len])){
		if(len==0){
			min=arr[0];
			max=arr[0];
		}
		
		if(arr[len]<min)
			min=arr[len];
			
		if(arr[len]>max){
			max=arr[len];
		}
		
		len++;
		
		c=getchar();
		if(c==']')
			break;
	}
	
	int cnt=0;
	for(int i=0;i<len;i++){
		if(arr[i]>min && arr[i]<max){
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
