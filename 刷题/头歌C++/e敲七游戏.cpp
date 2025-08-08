#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int cnt=0;
	
	for(int i=7;i<=n;i++){
		int temp=i;
		if(temp%7==0){
			cnt++;
//			printf("%d ",i);
			continue;
		}		
		while(temp){
			int r=temp%10;
			if(r==7){
				cnt++;
//				printf("%d ",i);
				break;
			}
			else{
				temp/=10;
			}
		}
	}
	
	printf("%d",cnt);
	return 0;
}
