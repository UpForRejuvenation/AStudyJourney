#include<stdio.h>
#include<string.h>

int main(){
	int n;
	char str[60];
	scanf("%d %s",&n,str);
	
	int len=strlen(str);
	for(int i=0;i<len;i++){
		str[i]=((str[i]-'a')+n)%26+'a';
	}
	
	puts(str);
	return 0;
}
