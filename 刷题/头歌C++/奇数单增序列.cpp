#include<stdio.h>

#define SIZE 501

int main(){
	int n=0;
	scanf("%d",&n);
	int input[SIZE]={0};
	int output[SIZE]={0};
	int o_len=0;
	for(int i=0;i<n;i++){
		scanf("%d",&input[i]);
		if(input[i]%2!=0){
			output[o_len++]=input[i];
		}
	}
	
	//bubble sort
	for(int i=0;i<o_len;i++){
		int flag=0;
		for(int j=0;j<o_len-i-1;j++){
			if(output[j]>output[j+1]){
				int temp=output[j];
				output[j]=output[j+1];
				output[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
	
	for(int i=0;i<o_len;i++){
		printf("%d",output[i]);
		if(i!=o_len-1){
			printf(",");
		}
	}
	
	return 0;
}
