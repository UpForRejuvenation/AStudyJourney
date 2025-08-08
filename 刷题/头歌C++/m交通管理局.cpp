#include<stdio.h>

int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	int cnt=0;
	for(int i=n;i<=m;i++){
		int lucky=1;
		int temp=i;
		while(temp){
			if(temp%10==4){
				lucky=0;
				break;
			}
			else if(temp%10==2&&temp/10%10==6){
				lucky=0;
				break;
			}
			temp/=10;
		}
		
		if(lucky){
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
