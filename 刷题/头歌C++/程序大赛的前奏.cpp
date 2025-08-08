#include<stdio.h>

#define SIZE 100001

int main(){
	int n=0;
	scanf("%d",&n);
	
	int ball[SIZE]={0};
	int a=0,b=0;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		for(int j=a-1;j<b;j++){
			ball[j]++;
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",ball[i]);
	}
	return 0;
}
