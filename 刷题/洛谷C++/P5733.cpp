#include<stdio.h>
#include<string.h>

int main(){
	
	char str[110];
	scanf("%s",str);
	int len=strlen(str);
	
	for(int i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]-=32;
		}
	}
	
	puts(str);
	return 0;
}
