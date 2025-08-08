#include<stdio.h>

int arr[10]={0};
void fun(int num);

int main(){
	

	int m,n;
	scanf("%d %d",&m,&n);
	
	for(int i=m;i<=n;i++){
		fun(i);
	}
	
	
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 

void fun(int num){
	while(num){
		arr[num%10]++;
		num/=10;
	}
}
