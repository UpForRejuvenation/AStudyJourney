#include<stdio.h>

int main(){
	
	int k;
	scanf("%d",&k);
	
	int n=1;
	double s=0;
	while(s<=k){
		s+=1.0/n;
		n++;
	}
	
	printf("%d",n-1);
	return 0;
}
