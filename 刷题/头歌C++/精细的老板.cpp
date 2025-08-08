#include<stdio.h>

#define SIZE 1001

void sort(int* arr,int n){
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
}

int main(){
	int N=0,T=0,sum=0;;
	scanf("%d %d",&N,&T);
	
	int A[SIZE],B[SIZE];
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(int i=0;i<N;i++){
		scanf("%d",&B[i]);
	}
	
	sort(A,N);
	sort(B,N);
	for(int i=0;i<N;i++){
		if(A[i]+B[N-i-1]>T){
			sum+=A[i]+B[N-i-1]-T;
		}
	}
	printf("%d",sum);
	return 0;
} 
