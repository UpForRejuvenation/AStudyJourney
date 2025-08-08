#include<stdio.h>
#include<math.h>

int isPrime(long long num);

int main(){
	
	long long n;
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		if(isPrime(i)){
			long long j=n/i;
			if(i*j==n&&isPrime(j)){
				printf("%lld",j);
				return 0;
			}
		}
	}
}

int isPrime(long long num){
	long long sum=0;
	for(long long i=1;i<=sqrt(num);i++){
		if(num%i==0){
			sum+=i;
			sum+=num/i;
		}
	}
	
	if(sum==num+1){
		return 1;
	}else{
		return 0;
	}
}
