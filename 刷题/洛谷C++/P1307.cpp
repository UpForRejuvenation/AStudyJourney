#include<stdio.h>
#include<string.h>

int main(){
	
	char n[15];
	scanf("%s",&n);
	
	int len=strlen(n);
	int flag=0;
	
	if(n[0]=='-'){
		printf("-");
		flag=1;
	}
	
	while(n[len-1]=='0'){
		len--;
	}
	
	if(len==0){
		printf("0");
		return 0;
	}
	
	for(int i=len-1;i>=flag;i--){
		printf("%c",n[i]);
	}
	return 0;
}
