#include<stdio.h>
#include<math.h>

#define SIZE 101

int main(){
	
	int num1[SIZE]={0},num2[SIZE]={0};
	int len1=0,len2=0;
	
	while(getchar()!=']'){
		scanf("%d",&num1[len1]);
		len1++;
	}
	getchar();
	while(getchar()!=']'){
		scanf("%d",&num2[len2]);
		len2++;
	}
	
	int min=1000;
	for(int i=0;i<len1;i++){
		for(int j=0;j<len2;j++){
			min=min<abs(num1[i]-num2[j])? min:abs(num1[i]-num2[j]);
		}
	}
	
	printf("%d",min);
	return 0;
}
