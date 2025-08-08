#include<stdio.h>

//#define SIZE 10001
//int main(){
//	
//	int sum[SIZE],sumlen=0;
//	int num1[SIZE],numlen1=0;
//	num[0]=1;
//	numlen=1;
//	
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		int n1=i%10,n2=i/10;
//		for(int j=0;j<numlen;j++){
//			
//		}
//	}
//	return 0;
//}

int main(){
	
	long long int sum=0;
	long long int num=1;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		num*=i;
		sum+=num;
	}
	
	printf("%lld",sum);
	return 0;
}
