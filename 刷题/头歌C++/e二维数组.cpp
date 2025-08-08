#include<stdio.h>

//#define SIZE 101
int main(){
	
//	int arr[SIZE][SIZE];
	int x,y;
	scanf("%d,%d",&x,&y);
	printf("[");
	for(int i=0;i<x;i++){
		printf("[");
		for(int j=0;j<y;j++){
//			arr[i][j]=i*j;
			printf("%d",i*j);
			if(j!=y-1){
				printf(", ");
			}
		}
		printf("]");
		if(i!=x-1){
			printf(", ");
		}
	}
	printf("]");
	return 0;
}
