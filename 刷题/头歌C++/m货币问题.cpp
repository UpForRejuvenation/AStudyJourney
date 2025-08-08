#include<stdio.h>
#include<stdlib.h>

#define SIZE 100001

int max=1;
int count=0;

void dp(int arr[],int m,int n){
	arr[0]=1,arr[m]=1,arr[n]=1;
	for(int i=m;i<=n*m;i++){
		if(arr[i-m]==1 || arr[i-n]==1){
			arr[i]=1;
		}
		else{
			count++;
			max=i;
		}
	}
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	
	int arr[SIZE]={0};
	
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	count=a-1;
	
	dp(arr,a,b);
	printf("%d %d",max,count);
	return 0;
}
