#include<stdio.h>

#define SIZE 1001
int arr[SIZE];

int isPrime(int a,int b,int c);
int gcd(int a,int b);

int main(){
	
	int cnt=0;
	

	int n=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(isPrime(i,j,k)){
					cnt++;
					continue;
				}
			}
		}
	}
	
	printf("%d",cnt);
	return 0;
}

int isPrime(int a,int b,int c){
	if(gcd(arr[a],arr[b])==1&&gcd(arr[a],arr[c])==1&&gcd(arr[b],arr[c])==1){
		return 1;
	}
	else if(gcd(arr[a],arr[b])!=1&&gcd(arr[a],arr[c])!=1&&gcd(arr[b],arr[c])!=1){
		return 1;
	}
	else{
		return 0;
	}
}

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
