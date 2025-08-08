#include<stdio.h>
#include<string.h>

#define SIZE 10001
int main(){
	
	char str[SIZE];
	scanf("%s",&str);
	
	int len=strlen(str);
	int i=0;
	
	//find the first 'b'
	while(str[i]!='b'){
		i++;
	}	
	
	while(i<len){
		if(str[i]=='a'){
			printf("False");
			return 0;
		}
		i++;
	}	
	printf("True");
	return 0;
}
