#include<stdio.h>

#define SIZE 51

int image[SIZE][SIZE];
int visited[SIZE][SIZE]={0};
int temp=0;
int newcolor=0;
int row=0,col=0;

void colorDFS(int r,int c);

int main(){

	int sr,sc;
	
	scanf("%d %d",&row,&col);
	scanf("%d %d %d",&sr,&sc,&newcolor);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&image[i][j]);
		}
	}

	temp=image[sr][sc];
	colorDFS(sr,sc);
	
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++){
			printf("%d ",image[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

void colorDFS(int r,int c){
	if(r<0||c<0||r>row||c>col||visited[r][c]==1||image[r][c]!=temp){
		return;
	}
	else{
		if(image[r][c]==temp){
			image[r][c]=newcolor;
		}
	}
	
	colorDFS(r-1,c);
	colorDFS(r+1,c);
	colorDFS(r,c-1);
	colorDFS(r,c+1);
}
