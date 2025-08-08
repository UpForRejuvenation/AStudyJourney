#include<stdio.h>

#define SIZE 51
int main(){
	
	int n,m;
	scanf("%d\n%d",&n,&m);
	
	int arr[SIZE][SIZE]={0};
	int max=0,sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		if(sum>max){
			max=sum;
		}
		sum=0;
	}
	printf("%d",max);
	return 0;
}
