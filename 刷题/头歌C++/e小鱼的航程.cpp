#include<stdio.h>

int main(){
	
	int x;
	scanf("%d",&x);
	
	int day;
	scanf("%d",&day);
	
	int sum=0;
	
	for(int i=0;i<day;i++,x++){
		if(x%6==0){
			i++;
			x=0;
		}
		else if(x%7==0){
			x=0;
		}
		else{
			sum+=250;
		}
	}
	
	printf("%d",sum);
	return 0;
}
