#include<stdio.h>

int main(){
	
	int x,n;
	scanf("%d %d",&x,&n);
	
	int dis=0;
	while(n){
		if(n<0){
			break;
		}
		
		if(x<=5&&x>=1){
			dis+=250;
			x++;
			n--;
		}
		else if(x==6){
			x=1;
			n-=2;
		}
		else if(x==7){
			x=1;
			n--;
		}
		else{
			break;	
		}
	}
	
	printf("%d",dis);
	return 0;
}
