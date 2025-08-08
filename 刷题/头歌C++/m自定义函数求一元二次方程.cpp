#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	float x1,x2,x1_i,x2_i;
	int delta=b*b-4*a*c;
	if(delta>0){
		x1=((-1*b)+sqrt(delta))/(float)(2*a);
		x2=((-1*b)-sqrt(delta))/(float)(2*a);
		printf("%f%f",x1,x2);
	}
	else if(delta==0){
		x1=(-1.0*b)/(float)(2*a);
		x2=x1;
		printf("%f%f",x1,x2);
	}
	else{
		x1=(-1*b)/(float)(2*a);
		x2=x1;
		x1_i=sqrt(abs(delta))/(2*a);
		x2_i=x1_i;
		printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",x1,x1_i,x2,x2_i);
	}
	return 0;
}
