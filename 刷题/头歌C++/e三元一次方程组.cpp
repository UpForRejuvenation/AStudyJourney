#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	
	int cnt=0;
	for(int i=a;i<=b;i++){
		for(int j=a;j<=b;j++){
			for(int k=a;k<=b;k++){
				if(2*i+3*j+5*k==100){
					cnt++;
				}
			}
		}
	}
	printf("%d",cnt);
	return 0;
} 
