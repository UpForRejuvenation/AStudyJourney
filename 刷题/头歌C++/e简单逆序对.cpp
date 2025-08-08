#include<stdio.h>

#define SIZE 100001
int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[SIZE];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				cnt++;
			}
		}
	}
	
	cnt=cnt%(100000007);
	printf("%d",cnt);
	return 0;
}
