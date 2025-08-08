#include<stdio.h>
#include<string.h>

#define SIZE 1001
int main(){
	
	char s[SIZE];
	scanf("%s",&s);
	
	int slen=strlen(s);
	int arr[4]={0};
	for(int i=0;i<slen;i++){
		switch(s[i]){
			case 'l':
				arr[0]++;
				break;
			case 'o':
				arr[1]++;
				break;
			case 'v':
				arr[2]++;
				break;
			case 'e':
				arr[3]++;
				break;
			default:
				continue;
		}
	}
	
	int min=100;
	for(int i=0;i<4;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("%d",min);
	return 0;
}
