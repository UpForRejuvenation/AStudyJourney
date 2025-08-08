#include<stdio.h>

#define SIZE 10001
int main(){
	
	int h,piles[SIZE],pillen=0;
	int k=0;
	
	scanf("%d\n",&h);
	
	int max=0,min=0;
	
	for(pillen=0;getchar()!=']';pillen++){
		scanf("%d",&piles[pillen]);
		
		if(piles[pillen]>max){
			max=piles[pillen];
		}
		
		if(piles[pillen]<min){
			min=piles[pillen];
		}
	}
	
	int timeSum=0;
	if(h==pillen){
		printf("%d",max);
		return 0;
	}
	else{
		for(int i=1;i<=max;i++){
			for(int j=0;j<pillen;j++){
				timeSum+=piles[j]/i;
				if(piles[j]%i>0){
					timeSum++;
				}
			}
			if(timeSum==h){
				k=i;
				break;
			}
			else{
				timeSum=0;
			}
		}
	}
	
	printf("%d",k);
	return 0;
}
