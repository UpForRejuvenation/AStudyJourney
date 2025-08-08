#include<stdio.h>
#include<math.h>

//#define SIZE 101
//int main(){
//	
//	long long n=0;
//	scanf("%lld",&n);
////	printf("%d\n",sizeof(n));
//	long long arr[SIZE]={0};
//	int arrlen=0;
//	
//	int sum=0;
//	for(long long i=1;i<=n;i++){
//		for(long long j=1;j<=sqrt(i);j++){
//			if(i%j==0){
//				sum+=j;
//				sum+=i/j;
//			}
//		}
//		if(sum==(i+1)){
//			arr[arrlen++]=i;
//		}
//		sum=0;
//	}
//	
//	int cnt=0;
//	int tempn=n;
//	int now=arrlen-1;
//	while(now){
//		int high=now;
//		while(tempn>0){
//			if(tempn-arr[high]>=0&&high>=0){
//				tempn=tempn-arr[high];
//				high--;
//				cnt++;
//			}
//			else if(high>0){
//				high--;
//			}
//			else if(high<0){
//				cnt=1;
//				break;
//			}
//			else if(tempn-arr[high]>0&&high==0){
//				break;
//			}
//		}
//		
//		if(tempn==0){
//			break;
//		}
//		tempn=n;
//		now--;
//		cnt=0;
//	}
//
//	printf("%d",cnt);
//	return 0;
//}

int sushu(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return sushu(n-1);
		}
	}
	return n;
}

int main(){
	int n;
	scanf("%d",&n);
	
	int cnt=0;
	while(1){
		if(sushu(n)==n){
			cnt++;
			break;
		}
		else{
			n=n-sushu(n);
			cnt++;
		}
	}
	printf("%d",cnt);
}
