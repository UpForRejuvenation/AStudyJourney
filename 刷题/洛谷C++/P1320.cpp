#include<stdio.h>
#include<string.h>

char arr[210][210];
int main(){
	
	scanf("%s",arr[0]);
	int len=strlen(arr[0]);
	
	for(int i=1;i<len;i++){
		scanf("%s",arr[i]);
	}
	
	printf("%d ",len);
	char flag='0';
	int cnt=0;
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(arr[i][j]==flag){
				cnt++;
			}
			else{
				printf("%d ",cnt);
				flag=arr[i][j];
				cnt=1;
			}
		}
	}
	printf("%d",cnt);
	
	return 0;
}
