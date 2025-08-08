#include<stdio.h>

int score[110][30];
int n,m;
int maxFlag=0,minFlag=0;

void findMaxMin(int pst);
double calAve(int pst);

int main(){
	

	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&score[i][j]);
		}
	}
	
	double max=0;
	for(int i=0;i<n;i++){
		findMaxMin(i);
		double ave_i=calAve(i);
		if(ave_i>max){
			max=ave_i;
		}
	}
	
	printf("%.2f",max);
	return 0;
}

void findMaxMin(int pst){
	int max=score[pst][0],min=score[pst][0];
	maxFlag=0;
	minFlag=0;
	for(int i=0;i<m;i++){
		if(score[pst][i]>max){
			max=score[pst][i];
			maxFlag=i;
		}
		if(score[pst][i]<min){
			min=score[pst][i];
			minFlag=i;
		}
	}
}

double calAve(int pst){
	double sum=0;
	for(int i=0;i<m;i++){
		if(i!=maxFlag&&i!=minFlag){
			sum+=score[pst][i];
		}
	}
	return sum/(m-2);
}
