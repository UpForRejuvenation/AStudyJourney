#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	double cost=0;
	if(n<0){
		printf("0");
		return 0;
	}
	
	if(n<=150){
		cost=n*0.4463;
	}
	else if(n>=151&&n<=400){
		cost=150*0.4463+(n-150)*0.4663;
	}
	else{
		cost=150*0.4463+250*0.4663+(n-400)*0.5663;
	}
	
	printf("%.1f",cost);
	return 0;
} 
