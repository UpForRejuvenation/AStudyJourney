#include<stdio.h>

int main(){
	
	int h,r,cnt=0;
	scanf("%d %d",&h,&r);
	
	float vol=r*r*h*3.14/1000;
	
	float sum=20;
	while(sum>0){
		sum-=vol;
		cnt++;
	}
	printf("%d",cnt);
	return 0;
} 
