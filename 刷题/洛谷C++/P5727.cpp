#include<stdio.h>

void fun(int num);

int main(){
	
	int n;
	scanf("%d",&n);
	
	fun(n);
	return 0;
}

void fun(int num){
	if(num==1){
		printf("%d ",num);
		return;
	}

	if(num%2==0){
		fun(num/2);
	}
	else{
		fun(num*3+1);
	}

	printf("%d ",num);
}
