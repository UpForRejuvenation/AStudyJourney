#include<stdio.h>
#include<string.h>

#define SIZE 100
int main(){
	char pswd[SIZE];
	scanf("%s",&pswd);
	
	int len=strlen(pswd);
	int cpt=0;
	int sml=0;
	int num=0;
	
	for(int i=0;i<len;i++){
		if(pswd[i]>='A'&&pswd[i]<='Z'){
			cpt=1;
		}
		else if(pswd[i]>='a'&&pswd[i]<='z'){
			sml=1;
		}
		else{
			num=1;
		}
		
		if(cpt&&sml&&num){
			break;
		}
	}
	
	if(len>=6){
		if(cpt&&sml&&num){
			printf("True");
		}
		else{
			printf("False");
		}
	}
	else{
		printf("False");
	}
	
	return 0;
}
