#include<stdio.h>

#define SIZE 10001

int main(){
	
	int n,num[SIZE];
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	int sum=0;
	for(int i=0;i<n;i++){
		num[i]-=i;
		sum+=num[i];
	}
	
	printf("%d",sum);
	return 0;
}
