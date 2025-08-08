#include<stdio.h>

int main(){
	
	int n=0;
	scanf("%d",&n);
	
	int drink=0;
	int cap=n;
	int remain=0;
	while(cap/3){
		drink+=n;
		cap=n+remain;
		n=cap/3;
		remain=cap%3;
	}
	printf("%d",drink);
	return 0;
}
