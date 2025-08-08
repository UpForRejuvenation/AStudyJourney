#include <stdio.h>
#include <stdlib.h>
void extract_num(char *str){
	int number,i;
    i=0;
	/********* Begin *********/
	fgets(str,20,stdin);
    number=0;
	for(i;i<20;i++){
    	if(str[i]<='9'&&str[i]>='0'){
    		number=number*10+(str[i]-'0');
    	}
    }
    printf("%d",number);
    /********* End *********/
}

int main() {
	char str_num[20];
	extract_num(str_num);
	return 0;
}
