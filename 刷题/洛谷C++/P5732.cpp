#include<stdio.h>

int arr[20][20];

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==i||j==1){
				arr[i][j]=1;
			}
			else{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
