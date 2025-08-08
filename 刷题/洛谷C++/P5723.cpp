#include<stdio.h>
#include<math.h>

int isFun(int num);

int main(){
	
	int L;
	scanf("%d",&L);
	
	int load=0,cnt=0;
	for(int i=2;load<L;i++){
		if(isFun(i)&&load+i<=L){
			printf("%d\n",i);
			cnt++;			
			load+=i;
		}
		else if(load+i>L){
			break;
		}
	}
	printf("%d",cnt);
	return 0;
}

int isFun(int num){
	int sum=0;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			sum=sum+i+num/i;
		}
	}
	if(sum==num+1){
		return 1;
	}
	else{
		return 0;
	}
}
