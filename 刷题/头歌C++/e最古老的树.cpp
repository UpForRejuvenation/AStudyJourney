#include<stdio.h>

#define SIZE 10001

int main(){
	
	int n=0;
	scanf("%d",&n); 
	
	int y[SIZE]={0};
	y[0]=0;
	int temp;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		y[temp]++;
		
		if(temp>y[0]){
			y[0]=temp;
		}
	}
	
	int max=0,imax=0;
	for(int i=1;i<=y[0];i++){
		while(y[i]==0){
			i++;
		}
		if(y[i]>max){
			max=y[i];
			imax=i;
		}
	}
	
	printf("%d",imax);
	return 0;
} 
