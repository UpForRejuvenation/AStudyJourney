#include<stdio.h>

int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	int arr[100][100]={0},tail[100]={0};
	while(m>0){
		int x,y;
		scanf("%d %d",&x,&y);
		
		if(x<=n){
			arr[x-1][tail[x-1]]=y;
			tail[x-1]++;
		}
		m--;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<tail[i];j++){
			printf("%d ",arr[i][j]);
		}
		if(tail[i]!='0'){
			printf("\n");
		}
	}
	return 0;
}
