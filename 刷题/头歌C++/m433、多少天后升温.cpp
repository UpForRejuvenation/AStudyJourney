#include<stdio.h>

#define SIZE 10001
int main(){
	
	int tprsize=0,tpr[SIZE]={0};
	int uptpr[SIZE]={0};
	scanf("%d",&tprsize);
	
	for(int i=0;i<tprsize;i++){
		scanf("%d",&tpr[i]);
	}
	
	for(int i=0;i<tprsize;i++){
		for(int j=i+1;j<tprsize;j++){
			if(tpr[i]<tpr[j]){
				uptpr[i]=j-i;
				break;
			}
		}
	}
	
	for(int i=0;i<tprsize;i++){
		printf("%d ",uptpr[i]);
	}
	return 0;
} 
