#include<stdio.h>

int main(){
	
	int n=0;
	scanf("%d",&n);
	
	if(n==0){
		printf("1");
		return 0;
	}
	
	int num=n;
	while(n>1){
		num=num*(n-1);
		n--;
	}
	
	printf("%d",num);
	return 0;
}
