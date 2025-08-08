#include<stdio.h>

int main(){
	
	int n=0,k=0;
	scanf("%d %d",&n,&k);
	
	int consum=0;
	int smoke=0;
	while(n>0){
		n--;
		smoke++;
		consum++;
		if(consum==k){
			n++;
			consum=0;
		}
	}
	printf("%d",smoke);
	return 0;
}
