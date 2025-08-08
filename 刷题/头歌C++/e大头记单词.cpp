#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
#include<math.h>
#define SIZE 101

char ab[27];
int abn[27]={0};
int isPrmNum(int num);
int isExist(char string);
int main(){
	
	char str[SIZE]={'0'};

	scanf("%s",&str);
	
	int len=strlen(str);
	int maxn=0,minn=100;
	for(int i=0;i<len;i++){
		int ret=isExist(str[i]);
		abn[ret]++;	
	}
	
	for(int i=0;ab[i]!='\0';i++){
		if(abn[i]>maxn){
			maxn=abn[i];
		}
		
		if(abn[i]<minn){
			minn=abn[i];
		}
	}
	
	if(isPrmNum(maxn-minn)){
		printf("Lucky\n%d",maxn-minn);
	}
	else{
		printf("No Answer\n0");
	}
	return 0;
}

int isPrmNum(int num){
	
	if(num==1)
		return 0;
	int sum=0;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			sum+=i;
			sum+=num/i;
		}
	}
	
	if(sum==(num+1))
		return 1;
	else
		return 0;
}

int isExist(char string){
	int i=0;
	for(i=0;ab[i]!='\0';i++){
		if(ab[i]==string){
			return i;
		}
	}
	ab[i]=string;
	return i;
}
