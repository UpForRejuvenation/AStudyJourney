#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIZE 22

int seets[SIZE][SIZE]={0};
int n,m;
int x=0,y=0;

int Beauty(int arr[][SIZE], int i, int j);
int main(){
	
	scanf("%d %d",&n,&m);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&seets[i][j]);
		}
	}
	
	int max=seets[0][0],maxi=0,maxj=0;
	int temp=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			temp=seets[i-1][j]+seets[i+1][j]+seets[i][j-1]+seets[i][j+1];
			if(abs(temp)>max){
				max=abs(temp);
				maxi=i;
				maxj=j;
			}
		}
	}
	
	printf("%d %d %d",maxi,maxj,max);
	return 0;
}
