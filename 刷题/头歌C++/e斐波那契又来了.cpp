#include<stdio.h>

int main(){
	
	int num1=7,num2=11;
	
	int n=0;
	while(scanf("%d",&n),n!=0){
		if(n==1){
			printf("no\n");
		}
		else{
			for(int i=2;i<=n;i++){
				int temp=(num1+num2)%3;
				num1=num2;
				num2=temp;
			}
			if(num2%3==0){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		
		num1=7,num2=11;
	}
	return 0;
}
