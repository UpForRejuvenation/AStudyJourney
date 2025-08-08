#include<stdio.h>

#define SIZE 100
int bin[SIZE]={0};

int DecToBin(int num,int* arr){
	int j=0;
	while(num>0){
		arr[j++]=num%2;
		num/=2;
	}
	arr[j++]=num;
	return j;
}

int get_one(int arr[],int length){
	int ret=0;
	for(int i=0;i<length;i++){
		if(arr[i]==1){
			ret++;
		}
	}
	return ret;
}

int main(){
	
	int n=0;
	int num_n=0;
	while(scanf("%d",&n),n!=0){
		int len=DecToBin(n,bin);
		num_n=get_one(bin,len);
		for(int i=n+1;;i++){
			int len_m=DecToBin(i,bin);
			int num_m=get_one(bin,len);
			if(num_m==num_n){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
