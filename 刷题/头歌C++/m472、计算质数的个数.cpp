#include<stdio.h>
#include<math.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int cnt=0;
	for(int i=1;i<n;i++){
		int flag=1;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0&&j!=i&&j!=1){
				flag=0;
				break;
			}
		}
		
		if(flag){
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
