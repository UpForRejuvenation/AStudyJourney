#include<stdio.h>

int block[40][40]={0};
int main(){
	
	int n;
	scanf("%d",&n);
	
	block[0][n/2]=1;
	
	int nowi=0,nowj=n/2;
//	int prei=nowi,prej=nowj;
	for(int i=2;i<=n*n;i++){
		if(nowi==0&&nowj!=n-1){
			nowi=n-1;
			nowj=nowj+1;
		}
		else if(nowj==n-1&&nowi!=0){
			nowj=0;
			nowi=nowi-1;
		}
		else if(nowi==0&&nowj==n-1){
			nowi++;
		}
		else if(nowi!=0&&nowj!=n-1){
			if(block[nowi-1][nowj+1]==0){
				nowi--;
				nowj++;
			}
			else{
				nowi++;
			}
		}
		block[nowi][nowj]=i;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",block[i][j]);
		}
		printf("\n");
	}
	return 0;
}
