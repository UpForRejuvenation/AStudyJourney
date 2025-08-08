#include<stdio.h>

int fun(int num);

int main(){
	int n;
	scanf("%d",&n);
	
	int ret=fun(n);
	printf("%d",ret);
	return 0;
}

int fun(int num){
	if(num==1){
		return 1;
	}
	else{
		return num*fun(num-1);
	}
}
