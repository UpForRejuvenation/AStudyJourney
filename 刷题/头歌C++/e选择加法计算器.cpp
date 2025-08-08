#include<stdio.h>
#include<string.h>

#define SIZE 101
int main(){
	
	int chs=0;
	scanf("%d",&chs);
	
	if(chs==0){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d",a+b);
	}
	else{
		char s[SIZE];
		scanf("%s",s);
		printf("%d",strlen(s));
	}
	
	return 0;
}
