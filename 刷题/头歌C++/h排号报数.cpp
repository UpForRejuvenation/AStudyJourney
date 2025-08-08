#include<stdio.h>

#define SIZE 10001

int main(){
	
	int n=0;
	scanf("%d",&n);
	
	int arr[SIZE]={0};
	arr[0]=n;
	
	int i=1;
	while(arr[0]>1){
		int num=0;
		while(num<3){
			if(arr[i]==0){
				num++;
				i=(i+1)%(n+1);
				if(i==0){
					i++;
				}
			}
			else{
				i=(i+1)%(n+1);
				if(i==0){
					i++;
				}
			}
		}
		if(i==1){
			i=n;
			arr[i]=1;
			arr[0]--;
		}
		else{
			arr[--i]=1;
			arr[0]--;
		}
	}
	
	for(int i=1;i<=n;i++){
		if(!arr[i]){
			printf("%d",i);
		}
	}
	return 0;
} 
