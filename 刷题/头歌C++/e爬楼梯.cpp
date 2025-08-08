#include<stdio.h>

#define SIZE 10001

int main(){
	
	int dp[SIZE]={0};
	dp[0]=1,dp[1]=1;
	
	int n=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	
	printf("%d",dp[n]);
	return 0;
}
