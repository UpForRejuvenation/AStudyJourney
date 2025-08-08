#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int cnt=0;
	for(int i=1;i<=n;i++){
		int temp=i;
		while(temp){
			if(temp%10==1){
				cnt++;
			}
			temp/=10;
		}
	}
	printf("%d",cnt);
	return 0;
}
