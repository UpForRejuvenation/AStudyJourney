#include<stdio.h>

int main(){
	
	int tiger,wolf;
	float p,q;
	scanf("%d %d %f %f",&tiger,&wolf,&p,&q);
	
	float ans1=tiger*(1-q)+(tiger+wolf)*p*q;
	float ans2=wolf*q+(tiger+wolf)*(1-q)*p;
	
	if(ans1>ans2)
		printf("tiger %.4f",ans1);
	else
		printf("wolf %.4f",ans2);
	return 0;
} 
