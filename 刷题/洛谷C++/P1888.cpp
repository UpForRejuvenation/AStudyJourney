#include<stdio.h>

int gcd(int num1,int num2);
int main(){
	
	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	
	long long maxn=a;
	if(b>maxn){
		maxn=b;		
	}
	if(c>maxn){
		maxn=c;		
	}
		
	long long minn=a;
	if(b<minn){
		minn=b;
	}
	if(c<minn){
		minn=c;
	}
	
	int y=gcd(maxn,minn);
	
	printf("%lld/%lld",minn/y,maxn/y);
	return 0;
}

int gcd(int num1,int num2){
	if(num1<num2){
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	
	while(num2){
		int rem=num1%num2;
		num1=num2;
		num2=rem;
	}
	
	return num1;
}
