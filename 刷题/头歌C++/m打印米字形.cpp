#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<2*n-1;i++){
		for(int j=0;j<2*n-1;j++){
			
			if(i==n-1){
				for(int k=0;k<=n-1;k++){
					printf("%c",'A'+k);
					j++;
				}
				for(int m=n;m<2*n-1;m++){
					printf("%c",'A'+2*n-2-m);
					j++;
				}
				continue;
			}
			
			if(i==j||j==n-1||i+j==2*n-2){
				if(i<n-1){
					printf("%c",'A'+i);					
				}
				else{
					printf("%c",'A'+2*n-2-i);
				}
			}
			else{
				printf(".");
			}
			
		}
		printf("\n");
	}
	return 0;
}
