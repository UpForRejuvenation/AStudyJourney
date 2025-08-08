#include<stdio.h>

#define SIZE 8
int contain(int num);
int main(){
	
	int n;
	scanf("%d",&n);
	
	int cnt=0;
	for(int i=13;i<=n;i++){
		if(i%13==0&&contain(i)){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

int contain(int num){
	char s[SIZE];
	int slen=0;
	
	//if don't add '0', it will be ASCII value 0-9, else is '0'-'9'
	while(num>0){
		s[slen++]=num%10+'0';
		num/=10;
	}
	
	for(int i=slen-1;i>=0;i--){
		if(s[i]=='1'&&s[i-1]=='3'){
			return 1;
		}
	}
	return 0;
}
