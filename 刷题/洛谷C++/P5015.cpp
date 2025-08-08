#include<stdio.h>
#include<string.h>

int main(){
	
	char s[10];
	fgets(s,10,stdin);
	
	int len=strlen(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '||s[i]=='\n'){
			len--;
		}
	}
	
	printf("%d",len);
	return 0;
}
