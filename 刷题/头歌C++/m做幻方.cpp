#include<stdio.h>

#define SIZE 31

int arr[SIZE][SIZE]={0};

void huanfang(int n);
void output(int n);
int main(){
	
	int n,sum=0,ave;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		
		huanfang(n);
		output(n);
	}
	return 0;
}

void huanfang(int n){
	int x=n-1,y=n/2;
	int prex=0,prey=0;
	arr[x][y]=1;
	for(int i=2;i<=n*n;i++){
		prex=x;
		prey=y;
		x=(x+1)%n;
		y=(y+1)%n;
		if(arr[x][y]){
			arr[prex-1][prey]=i;
			x=prex-1;
			y=prey;
		}
		else{
			arr[x][y]=i;
		}
	}
}

void output(int n){
	if(n<10){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%2d ",arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");		
	}
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%3d ",arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");		
	}

}
