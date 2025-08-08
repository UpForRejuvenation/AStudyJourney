#include<stdio.h>

int main(){
	int a,b,c,d,e,f;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(d<b){
		f=d+60-b;
		e=c-a-1;
	}
	else{
		f=d-b;
		e=c-a;
	}
	
	printf("%d %d",e,f);
	return 0;
} 
