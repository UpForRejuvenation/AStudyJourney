#include<stdio.h>

#define SIZE 101
int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[SIZE];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int score;
	int cnt=0;
	scanf("%d",&score);
	
	for(int i=0;i<n;i++){
		if(arr[i]==score)
			cnt++;
	}
	
	printf("%d",cnt);
	return 0;
}
