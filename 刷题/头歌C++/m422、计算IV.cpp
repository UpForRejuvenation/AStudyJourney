#include<stdio.h>
#include<string.h>
#define SIZE 1001

void re_int_to_str(char* str,int* num,int len);

int main(){
	
	char num1[SIZE],num2[SIZE];
	scanf("%s\n%s",&num1,&num2);
	
	int len1=strlen(num1);
	int len2=strlen(num2);
	
	int n1[SIZE],n2[SIZE],sum[SIZE+1]={0};
	re_int_to_str(num1,n1,len1);
	re_int_to_str(num2,n2,len2);
	
	int max=len1>len2? len1:len2;
	for(int i=0;i<max;i++){
		sum[i]+=(n1[i]+n2[i])%10;
		sum[i+1]+=(n1[i]+n2[i])/10;
	}
	
	if(sum[max]){
		max++;
	}
	
	for(int i=max-1;i>=0;i--){
		printf("%d",sum[i]);
	}
	return 0;
} 

void re_int_to_str(char* str,int* num,int len){
	for(int i=0;i<len;i++){
		num[len-i-1]=str[i]-'0';
	}
}
