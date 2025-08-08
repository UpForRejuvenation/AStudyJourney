#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define SIZE 1000

bool canWin(int n){
	bool dp[SIZE];
	dp[0]=false;
	
	for(int i=1;i<=n;i++){
		dp[i]=false;
		for(int j=0;j<n;j++){
			int take=pow(2,j);
			if(i-take>=0 && !dp[i-take]){
				dp[i]=true;
				break;
			}
		}
	}
	
	return dp[n];
}
int main(){
	int n=0;
	scanf("%d",&n);
	
	if(canWin(n)){
		printf("ming");
	}
	else{
		printf("hua");
	}
	
	return 0;
}

