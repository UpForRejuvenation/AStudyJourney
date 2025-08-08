#include<stdio.h>

//typedef struct{
//	int x;
//	int y;
//	int z;
//}Block;

int main(){
	
	int blocks[20][20][20]={0};
	int w,x,h;
	scanf("%d %d %d",&w,&x,&h);
	int sum=w*x*h;
	
	int q;
	scanf("%d",&q);
	
	while(q){
		int x1,y1,z1,x2,y2,z2;
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		
		int vol=(x2-x1)*(y2-y1)*(z2-z1);
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				for(int k=z1;k<=z2;k++){
					if(blocks[i][j][k]==0){
						blocks[i][j][k]=1;
						sum--;
					}
				}
			}
		}
		q--;
	}
	
	printf("%d",sum);
	return 0;
}
