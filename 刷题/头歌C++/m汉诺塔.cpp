#include<stdio.h>
#include<math.h>

#define SIZE 1001
int count[SIZE]={0};

int main(){
	
	int n;
	scanf("%d",&n);
	
	int len=1;
	count[0]=1;
	for(int i=0;i<=n;i++){
		int up=0,th=0;
		for(int j=0;j<len;j++){
			th=(2*count[j]+up)%10;
			up=(2*count[j]+up)/10;
			count[j]=th;
		}
		while(up){
			count[len++]=up%10;
			up/=10;
		}
	}
	count[0]-=2;
	
	for(int i=len-1;i>=0;i--){
		printf("%d",count[i]);
	}
	return 0;
	
} 
