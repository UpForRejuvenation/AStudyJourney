#include<stdio.h>

int main(){
	
	int k;
	scanf("%d",&k);
	
	int sum=0,day=1;
	while(k>0){
		if(k<day){
			sum+=day*k;
			k=0;
		}
		else{
			sum+=day*day;
			k-=day;
			day++;		
		}
	}
	printf("%d",sum);
	return 0;
}
