#include<stdio.h>

int main(){
	
	int m,n;
	scanf("%d %d",&n,&m);
	int sum=0;
	int x=1;
	for(x;;x++){
		int cnt=0;
		int temp=x;
		for(int i=0;i<n+1;i++){
			if(temp%n!=m){
				break;
			}
			else{
				cnt++;
				temp=temp-temp/n-m;
				continue;			
			}
		}
		if(cnt==n+1){
			printf("%d",x);
			break;
		}
	}
	return 0;
}
