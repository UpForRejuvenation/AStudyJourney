#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int cnt=0;
	for(int i=1;i<=n*n;i++){
		if(i<10){
			printf("0%d",i);
		}
		else{
			printf("%d",i);
		}	
		cnt++;
		if(cnt%n==0){
			printf("\n");
			cnt=0;
		}
	}
	printf("\n");
	
	int num=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i){
				printf("  ");
			}
			else{
				if(num<10){
					printf("0%d",num);
				}
				else{
					printf("%d",num);
				}
				num++;
			}				
		}
			printf("\n");
	}
	
	return 0;
}
