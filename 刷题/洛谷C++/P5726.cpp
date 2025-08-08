#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int min=10,fmin=1,max=0,fmax=1;
	
	int score[1010];
	for(int i=0;i<n;i++){
		scanf("%d",&score[i]);
		
		if(score[i]>max){
			max=score[i];
		}
		
		if(min>score[i]){
			min=score[i];	
		}
	}
	
	double sum=0;
	for(int i=0;i<n;i++){
		if(score[i]==max&&fmax){
			fmax=0;
			continue;
		}
		
		if(score[i]==min&&fmin){
			fmin=0;
			continue;
		}
		
		sum+=score[i];
	}
	
	printf("%.2f",sum/(n-2));
	return 0;
}