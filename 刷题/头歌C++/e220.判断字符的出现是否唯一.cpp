#include<stdio.h>
#include<string.h>

int main(){
	
	char s[101];
	scanf("%s",&s);
	
	int num[26]={0};
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='a'&&s[i]<='z'){
			num[s[i]-'a']++;
		}
		else{
			num[s[i]-'A']++;
		}
	}
	
	for(int i=0;i<26;i++){
		if(num[i]>1){
			printf("1");
			return 0;
		}
	}
	printf("0");
	return 0;
}
