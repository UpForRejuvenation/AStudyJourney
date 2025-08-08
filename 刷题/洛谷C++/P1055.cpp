#include<stdio.h>

int main(){
	
	char s[14];
	scanf("%s",s);
	
	int arr[9],j=0;
	for(int i=0;i<14;i++){
		if(s[i]>='0'&&s[i]<='9'){
			arr[j++]=s[i]-'0';
		}
	}
	
	int ID=0;
	for(int i=0;i<9;i++){
		ID=ID+arr[i]*(i+1);
	}
	
	ID%=11;
	if(ID==10){
		if(s[12]=='X'){
			printf("Right");			
		}
		else{
			s[12]='X';
			puts(s);
		}
	}
	else{
		if(ID==s[12]-'0'){
			printf("Right");
		}
		else{
			s[12]=ID+'0';
			puts(s);
		}		
	}
	

	return 0;
}
