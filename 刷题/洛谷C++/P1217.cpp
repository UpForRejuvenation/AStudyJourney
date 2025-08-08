#include<stdio.h>
#include<math.h>

int isPalidrome(int num);
int isPrime(int num);

int main(){
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int i=a%2==0?a+1:a;i<=b;i+=2){
		if(isPalidrome(i)){
			if(isPrime(i)){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}

int isPalidrome(int num){
	char str[9];
	int len=0;
	while(num){
		str[len++]=(char)(num%10);
		num/=10;
	}
	int l=0,r=len-1,flag=1;
	while(l<r){
		if(str[l]!=str[r]){
			flag=0;
			break;
		}
		else{
			l++;
			r--;
		}
	}
	
	if(flag){
		return 1;
	}
	else{
		return 0;
	}
}

int isPrime(int num){
	int sum=0;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			sum=sum+i+num/i;
		}
	}
	if(sum==num+1){
		return 1;
	}
	else{
		return 0;
	}
}
