#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int num=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(num/10==0){
				printf("0%d",num);
			}
			else{
				printf("%d",num);
			}
			num++;
		}
		printf("\n");
	}
	return 0;
}
