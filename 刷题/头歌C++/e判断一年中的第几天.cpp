#include<stdio.h>

#define SIZE 101
int Year[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int isLeapYear(int num){
	if(num%4==0) 
		return 1;
	else
		return 0;
}

int main(){
	
	char data[SIZE];
	scanf("%s",&data);
	
	int year=0,month=0,day=0;
	int i=0;
	
	while(i<4){
		year=year*10+(data[i++]-'0');
	}
	i++;
	
	while(i>4 && i<7){
		month=month*10+(data[i++]-'0');
	}
	i++;
		
	while(i>7 && i<10){
		day=day*10+(data[i++]-'0');
	}
	
	int sum_day=day;
	for(int j=0;j<month-1;j++){
		sum_day+=Year[j];
	}
	
	
	if(isLeapYear(year)){
		sum_day++;
	}
	
	printf("%d",sum_day);
	return 0;
} 
