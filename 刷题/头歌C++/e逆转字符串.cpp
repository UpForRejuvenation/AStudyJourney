#include<stdio.h>
#include<string.h>

#define SIZE 1001
int main(){
	char str[SIZE];
	scanf("%s",&str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		printf("%c",str[len-i-1]);
	} 
	return 0;
}
