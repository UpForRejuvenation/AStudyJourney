#include<stdio.h>

#define SIZE 101
int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[SIZE][SIZE]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j-1]>arr[i-1][j]){//down
				arr[i][j]+=arr[i][j-1];
			}
			else{
				arr[i][j]+=arr[i-1][j];//right
			}
		}
	}
	
	printf("%d",arr[n][n]);
	return 0;
}
