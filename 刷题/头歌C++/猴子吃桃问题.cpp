#include<stdio.h>

int main(){
	int sum=1;
	int day=1;
	while(day<=9){
		sum=(sum+1)*2;
		day++;
	} 
	printf("%d",sum);
	return 0;
}
