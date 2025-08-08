#include<stdio.h>

int main(){
	
	int l,m;
	scanf("%d %d",&l,&m);
	
	int arr[10010]={0};
	int sum=l+1;
	
	while(m){
		int x,y;
		scanf("%d %d",&x,&y);
		
		for(int i=x;i<=y;i++){
			if(arr[i]==0){
				arr[i]=1;
				sum--;
			}
		}
		m--;
	}
	
	printf("%d",sum);
	
	return 0;
}
