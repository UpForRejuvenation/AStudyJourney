#include<stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	
	int remain=n-(n/7)*7;
	printf("%d",remain);
	return 0;
}
