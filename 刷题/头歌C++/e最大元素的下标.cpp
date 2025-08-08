#include<stdio.h>

int main(){
	
	int n=1,num,max,maxi=1;
	while(scanf("%d",&num)!=EOF){
		if(n==1){
			max=num;
		}
		else{
			if(num>max){
				max=num;
				maxi=n;
			}
		}
		n++;
	}
	printf("%d",maxi);
	return 0;
}
