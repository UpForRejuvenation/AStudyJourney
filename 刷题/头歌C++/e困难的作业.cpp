#include<stdio.h>
#include<string.h>

#define SIZE 10001
char article[SIZE];
int num[26]={0};

int main(){
		
//	scanf("%s",&article);//can't
//	fgets(article,sizeof(article),stdin);//works
	scanf("%[^\n]",&article);//works
	int len=strlen(article);
	
	for(int i=0;i<len;i++){
		if(article[i]>='a'&&article[i]<='z'){
			int temp=article[i]-'a';
			num[temp]++;
		}
	}
	
	for(int i=0;i<26;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
