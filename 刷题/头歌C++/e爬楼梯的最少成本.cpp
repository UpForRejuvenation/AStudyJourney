#include<stdio.h>
#include<string.h>

#define SIZE 1001
int main(){
	
	int arr[SIZE]={0},arrlen=0;
	while(getchar()!=']'){
		scanf("%d",&arr[arrlen++]);
	}
	
	int sum=0;
//	from big to small
	for(int i=arrlen-1;i>0;i--){
		if(arr[i]<arr[i-1]){
			sum+=arr[i];
		}
		else{
			sum+=arr[i-1];
			i--;
		}
	}
	
	//small to big, not working
//	for(int i=0;i<arrlen-2;i++){
//		if(arr[i]<=arr[i+1]){
//			sum+=arr[i];
//		}
//		else{
//			sum+=arr[i+1];
//			i++;
//		}
//	}
	
	printf("%d",sum);
	return 0;
}
