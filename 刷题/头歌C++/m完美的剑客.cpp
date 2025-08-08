#include<stdio.h>
#include<stdlib.h>

#define SIZE 101

typedef struct{
	float x;
	float y;
}Point;

int main(){
	
	int n;
	scanf("%d",&n);
		
	Point point[SIZE];
	for(int i=0;i<n;i++){
		scanf("%f %f",&point[i].x,&point[i].y);
	}
	
	Point mid;
	if(n%2==0){
		mid.x=(point[n/2-1].x+point[n/2].x)/2;
		mid.y=(point[n/2-1].y+point[n/2].y)/2;
	}
	else{
		mid.x=point[n/2].x;
		mid.y=point[n/2].y;	
	}

	
	int flag=1;
	for(int i=0;i<n/2;i++){
		if(abs(point[i].x-mid.x)==abs(point[n-i-1].x-mid.x)&&point[i].y==point[n-i-1].y){
			;
		}
		else{
			flag=0;
		}
	}
	
	if(flag){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	return 0;
}
