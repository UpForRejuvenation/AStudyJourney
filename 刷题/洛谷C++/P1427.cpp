#include<stdio.h>

int main(){
	
	int arr[110],len=0;
	while(1){
		int x;
		scanf("%d",&x);
		if(x!=0){
			arr[len++]=x;
		}
		else{
			break;
		}
	}
	
	for(int i=len-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}
