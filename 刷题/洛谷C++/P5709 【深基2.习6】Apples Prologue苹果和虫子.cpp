#include<stdio.h>

int main(){
	
	int m,t,h;
	scanf("%d %d %d",&m,&t,&h);
	
	if(t==0){
		printf("0");
		return 0;
	}
	else if(h/t>m){
		printf("0");
		return 0;
	}
	
	int rem=0;
	if(h%t!=0){
		rem=m-h/t-1;
	}
	else{
		rem=m-h/t;
	}
	
	printf("%d",rem);
	return 0;
} 
