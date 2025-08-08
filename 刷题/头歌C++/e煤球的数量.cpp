#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	int sum=0;
	int num=1;
	for(int i=1;i<=n;){
		sum+=num;
		i++;
		num+=i;
	}
	printf("%d",sum);
	return 0;
}
