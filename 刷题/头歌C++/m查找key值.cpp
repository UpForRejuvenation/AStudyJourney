#include<stdio.h>

#define SIZE 10001
int main(){
	
	int n,num;
	scanf("%d %d",&n,&num);
	
	int arr[SIZE]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int low=0,high=n-1;
	int mid=(low+high)/2;
	int cnt=1,key=0;
	
	while(low<=high){
		if(num<arr[mid]){
			high=mid-1;
			cnt++;
		}
		else if(num>arr[mid]){
			low=mid+1;
			cnt++;
		}
		else{
			printf("%d\n%d",mid,cnt);
			return 0;
		}
		mid=(low+high)/2;
	}
	
	printf("ц╩спур╣╫");
	return 0;
}
