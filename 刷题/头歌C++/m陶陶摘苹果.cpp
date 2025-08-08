#include<stdio.h>

int main(){
	
	int apple[10]={0};
	for(int i=0;i<10;i++){
		scanf("%d",&apple[i]);
	}
	
	int hand=0;
	scanf("%d",&hand);
	
	int cnt=0;
	for(int i=0;i<10;i++){
		if(hand+30>=apple[i]){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
