#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,times=0,sum=0;
	scanf("%d %d",&a,&b);
	for(int i=a+1;times<b;i++){
		sum=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0){
				sum+=j;
				sum+=i/j;
			}
		}
		
		if(sum==i+1&&i!=1){
			printf("%d ",i);
			times++;
		}
		
	}
	return 0;
}
