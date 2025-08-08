#include<stdio.h>

int main(){
	
	int x;
	scanf("%d",&x);
	
	int s1= x%2==0||x==0? 1:0;
	int s2= (x>4&&x<=12);
	
	printf("%d %d %d %d",s1&&s2,s1||s2,s1^s2,!(s1||s2));
	
	return 0;
}
