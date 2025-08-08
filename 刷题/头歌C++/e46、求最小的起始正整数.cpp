#include<stdio.h>

#define SIZE 1001

int main(){
	
	int nums[SIZE];
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	
	int sum=0;
	int flag=0;
	int i=1;
	while(i){
		flag=0;
		sum=i;
		for(int j=0;j<n;j++){
			if(sum+nums[j]>=1){
				sum+=nums[j];
				if(j==n-1){
					flag=1;
				}
				continue;
						
			}
			else{
				break;
			}
			

		}
		if(flag){
			printf("%d",i);
			break;
		}
		else{
			i++;
		}
	}
	return 0;
}
 
