#include<stdio.h>

int main(){
	
	int arr[7][2],sum[7];
	
	for(int i=0;i<7;i++){
		scanf("%d %d",&arr[i][0],&arr[i][1]);
		sum[i]=arr[i][0]+arr[i][1];
	}
	
	int max=sum[0],maxi=0;
	for(int i=0;i<7;i++){
		if(sum[i]>max&&sum[i]>8){
			max=sum[i];
			maxi=i+1;
		}
	}
	
	printf("%d",maxi);
	return 0;
} 
