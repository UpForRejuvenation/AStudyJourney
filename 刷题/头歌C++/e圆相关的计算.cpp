#include<stdio.h>

int main(){
	
	double r=0;
	double pi=3.14159;
	scanf("%lf",&r);
	double d=2*r;
	double c=2*pi*r;
	double s=pi*r*r;
	printf("%.4f %.4f %.4f",d,c,s);
	return 0;
}
