#include<stdio.h>

int isFun(int year);

int main(){
	
	int x,y;
	scanf("%d %d",&x,&y);
	
	int arr[2000],len=0;
	for(int i=x;i<=y;i++){
		if(isFun(i)){
			arr[len++]=i;
		}
	}
	
	printf("%d\n",len);
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

int isFun(int year){
	if((year%4==0&&year%100!=0)||year%400==0){
		return 1;
	}
	else{
		return 0;
	}
}
