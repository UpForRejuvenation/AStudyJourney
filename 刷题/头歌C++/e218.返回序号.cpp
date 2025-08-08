#include<stdio.h>
#include<string.h>

#define SIZE 8
int main(){
	char s[SIZE];
	scanf("%s",&s);
	
	int len=strlen(s);
	int sum=0;
	for(int i=0;i<len;i++){
		sum=sum*26+(s[i]-'A'+1);
	}
	
	printf("%d",sum);
	return 0;
} 
