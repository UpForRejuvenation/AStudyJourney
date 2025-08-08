#include<stdio.h>

int main(){
	
	int n=0;
	scanf("%d",&n);
	
	int sum=0;
	for(int i=1;i<n;i++){
		if(i%37==0) sum+=i;
	}
	
	printf("%d",sum);
	return 0;
}
