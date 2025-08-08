#include<stdio.h>

int main(){
	
	int n,x;
	scanf("%d %d",&n,&x);
	
	int cnt=0;
	for(int i=1;i<=n;i++){
		int temp=i;
		while(temp){
			if(temp%10==x){
				cnt++;
			}
			temp/=10;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
