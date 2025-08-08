#include<stdio.h>

#define SIZE 1001
int main(){
	int n,start;
	int num[SIZE]={0};
	
	scanf("%d",&n);
	scanf("%d",&start);
	
	int sum=0;
	for(int i=0;i<n;i++){
		num[i]=start+2*i;
		if(i==0){
			sum=num[i];
		}
		else{
			sum^=num[i];
		}
	}
	
	printf("%d",sum);
	return 0;
} 
