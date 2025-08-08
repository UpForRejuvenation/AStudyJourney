#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

int move(int num,int ave);

int main(){
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int ave=(a+b+c)/3;
	int sum=0;
	
	a=move(a,ave);
	b=move(b,ave);
	c=move(c,ave);
	
	sum=abs(a-ave)+abs(b-ave)+abs(c-ave);
	printf("%d",sum);
	return 0;
}

int move(int num,int ave){
	
	if(abs(num-ave)==1||num==ave){
		num=ave;
	}
	else if(num>ave){
		num--;
	}
	else{
		num++;
	}
	
	return num;
}
