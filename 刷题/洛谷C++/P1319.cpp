#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int flag=-1;
	int i=0,j=0,ni=0,nj=0;
	int num=0;
	scanf("%d",&num);
	
	while(i<n){
		j=0;
		while(j<n){
			if(num==0){
				flag*=-1;
				scanf("%d",&num);		
			}
			
			if(flag==1){
				printf("1");
			}
			else if(flag==-1){
				printf("0");
			}
			j++;
			num--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
