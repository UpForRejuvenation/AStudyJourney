#include<stdio.h>

int main(){
	
	int n,k;
	scanf("%d %d",&n,&k);
	
	int sum=0,cnt=0;
	while(n){
		cnt++;
		sum++;
		if(cnt==k){
			n++;
			cnt=0;
		}
		n--;
	}
	
	printf("%d",sum);
	return 0;
} 
