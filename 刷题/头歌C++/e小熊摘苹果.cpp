#include<stdio.h>

#define SIZE 1001
int main(){
	
	int k,n,temp;
	
	scanf("%d\n%d",&n,&k);
	
	int cnt=0;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp<=k+30){
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
} 
