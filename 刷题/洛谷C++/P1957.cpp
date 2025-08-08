#include<stdio.h>

char str[20];

void func(char op);
int getLen(int num);

int main(){
	
	int i;
	scanf("%d",&i);
	getchar();
	
	while(i){
		char oper;
		fgets(str,20,stdin);
		if(str[0]>'9'){
			oper=str[0];
		}
		func(oper);
		i--;
	}
	return 0;
} 

void func(char op){
	int pnt=0;
	int num1=0,num2=0;
	
	while(str[pnt]>'9'||str[pnt]==' '){
		pnt++;
	}
	
	while(str[pnt]<='9'&&str[pnt]>='0'){
		num1=num1*10+str[pnt]-'0';
		pnt++;
	}
	pnt++;
	
	while(str[pnt]<='9'&&str[pnt]>='0'){
		num2=num2*10+str[pnt]-'0';
		pnt++;
	}
	
	int len=0;
	switch(op){
		case 'a':
		len=getLen(num1)+getLen(num2)+getLen(num1+num2)+2;
			printf("%d+%d=%d\n%d\n",num1,num2,num1+num2,len);
			break;
		case 'b':
			len=getLen(num1)+getLen(num2)+getLen(num1-num2)+2;
			printf("%d-%d=%d\n%d\n",num1,num2,num1-num2,len);
			break;
		case 'c':
			len=getLen(num1)+getLen(num2)+getLen(num1*num2)+2;
			printf("%d*%d=%d\n%d\n",num1,num2,num1*num2,len);
			break;
		default:
			break;		
	}
}

int getLen(int num){
	int cnt=0;
	
	if(num<=0){
		cnt++;
	}
	
	while(num){
		num/=10;
		cnt++;
	}
	return cnt;
}
