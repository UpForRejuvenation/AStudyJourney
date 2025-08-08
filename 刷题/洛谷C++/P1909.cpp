#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int pen[3][2];
	for(int i=0;i<3;i++){
		scanf("%d %d",&pen[i][0],&pen[i][1]);
	}
	
	int cost[3],min;
	for(int i=0;i<3;i++){
		cost[i]=(n/pen[i][0])*pen[i][1];
		if(n%pen[i][0]!=0){
			cost[i]+=pen[i][1];
		}
		if(i==0){
			min=cost[i];
		}
		if(cost[i]<min){
			min=cost[i];
		}
	}
	printf("%d",min);
	return 0;
}
