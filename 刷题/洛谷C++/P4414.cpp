#include<stdio.h>

int main(){
	
	int arr[3];
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<3;i++){
		int flag=0;
		for(int j=0;j<3-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
	
	char s[4];
	scanf("%s",&s);
	
	for(int i=0;i<3;i++){
		printf("%d ",arr[s[i]-'A']);
	}
	return 0;
}
