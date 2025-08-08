#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	int times=b;
	for(int i=a-1;i>1&&(times>0);i--){
		int sum=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0){
				sum+=j;
				sum+=i/j;
			}
		}
		if(sum==i+1){
			printf("%d ",i);
			times--;
		}
	}
	
	if(times==b){
		printf("null");
	}
	
	return 0;
}
