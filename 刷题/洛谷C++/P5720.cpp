#include<stdio.h>

int main(){
	
	int a,n=1;
	scanf("%d",&a);
	
	while(a!=1){
		a/=2;
		n++;
	}
	
	printf("%d",n);
	return 0;
}
