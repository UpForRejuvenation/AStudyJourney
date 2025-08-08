#include<stdio.h>

double fun(int num);

int main(){
	
	int m,n;
	scanf("%d %d",&m,&n);
	
	double p=fun(m)/fun(n)/fun(m-n);
	printf("%.6f",p);
	return 0;
}

double fun(int num){
	if(num==1||num==0){
		return 1;
	}
	else{
		return num*fun(num-1);
	}
}
