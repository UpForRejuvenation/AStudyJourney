#include<stdio.h>

int main(){
	
	int n=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(i%7==0){
			printf("%d ",i);
			continue;
		}
		else{
			int temp=i;
			while(temp){
				if(temp%10==7){
					printf("%d ",i);
					break;
				}
				else{
					temp/=10;
				}
			}
		}
	}
	
	return 0;
}
