#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIZE 1001

typedef struct{
	int x;
	int y;
}Point;

typedef struct{
	Point point[SIZE];
	int height;
}Stair;

int main(){
	
	int px=0,py=0;
	int n=0;
	scanf("%d",&n);
	
	int arr[SIZE][5];
	Stair stair;
	stair.height=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==2){
				px=i;
				py=j;
			}
			else if(arr[i][j]==1){
				stair.point[stair.height].x=i;
				stair.point[stair.height].y=j;
				stair.height++;
			}
		}
	}
	
	int mov=0;
	while(px<n-1){
		int mov_h=0;
		mov=py-stair.point[px].y;
		if(mov<0){
			printf("R%d ",abs(mov));
		}
		else if(mov>0){
			printf("L%d ",mov);
		}
		else{
			while(arr[px][py]==1 && px<n-1){
				px++;
				mov_h++;
			}
			printf("D%d ",mov_h);
		}
		py-=mov;
	}
	
	mov=py-4;
	if(mov<0){
		printf("R%d ",abs(mov));
	}
	else if(mov>0){
		printf("L%d ",mov);
	}

	return 0;
} 
