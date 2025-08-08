#include<stdio.h>

int arr[110],num[110]={0};
int main(){
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]){
				num[i]++;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
