#include<stdio.h>

#define SIZE 101
int main(){
	
	int n;
	scanf("%d",&n);
	
	int Fib[SIZE];
	Fib[0]=0,Fib[1]=1;
	
	for(int i=2;i<=n;i++){
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	printf("%d",Fib[n]);
	return 0;
}
