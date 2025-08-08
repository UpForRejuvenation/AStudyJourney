#include<stdio.h>

int main(){
	int n0,n1,n2,n3,n4;
	scanf("%d",&n0);
	
	n1=3*n0;
	
	if(n1%2==0){
		n2=n1/2;
	}
	else{
		n2=(n1+1)/2;
	}
	n3=3*n2;
	n4=n3/9;
	
	if(n1%2==1){
		printf("odd %d",n4);
	} 
	else{
		printf("even %d",n4);
	}
	return 0;
}
