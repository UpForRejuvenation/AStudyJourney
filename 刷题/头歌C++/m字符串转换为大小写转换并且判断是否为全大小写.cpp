#include<stdio.h>
#include<string.h>

#define SIZE 10001

int isLower(char* str);
int isUpper(char* str);
void lower(char* str);
void upper(char* str);

int len;

int main(){
	
	char str[SIZE];
	fgets(str,sizeof(str),stdin);
	len=strlen(str);
	
	char temp[SIZE];
	strcpy(temp,str);
	
	lower(temp);
	upper(temp);
	
	if(isLower(str)){
		printf("%s是全小写",str);
	}
	else if(isUpper(str)){
		printf("%s是全大写",str);
	}
	else{
		printf("%s既不是全大写也不是全小写",str);	
	}
	
	return 0;
}

int isLower(char* str){
	for(int i=0;i<len;i++){
		if(str[i]>='A'&&str[i]<='Z'){
			return 0;
		}
	}
	return 1;
}

int isUpper(char* str){
	for(int i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			return 0;
		}
	}
	return 1;	
}

void lower(char* str){
	printf("改为小写："); 
	for(int i=0;i<len;i++){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]+=32;
		}
		printf("%c",str[i]);
	}
	printf("\n");
}

void upper(char* str){
	printf("改为大写：");
	for(int i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]-=32;
		}
		printf("%c",str[i]);
	}
	printf("\n");	
}
