#include<stdio.h>
#include<math.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			sum+=n/i;
		}
	}
	
	if(n==1){
		printf("No");
	}
	else if(sum==n+1){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
} 
