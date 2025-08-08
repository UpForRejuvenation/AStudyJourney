#include<stdio.h>
#include<math.h>

int isFun(int num);
int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[110],len=0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(isFun(x)&&x!=1){
			arr[len++]=x;
		}
	}
	
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

int isFun(int num){
	int sum=0;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			sum+=i;
			sum+=num/i;
		}
	}
	if(sum==num+1){
		return 1;
	}
	else{
		return 0;
	}
}
