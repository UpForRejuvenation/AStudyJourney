#include<stdio.h>

int main(){
	
	double s;
	scanf("%lf",&s);
	
	double sum=0,spd=2;
	int cnt=0;
	while(1){
		if(sum>=s){
			break;
		}
		else{
			sum+=spd;
			spd*=0.98;
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
