#include<stdio.h>
#include<math.h>

#define MOD 100000007
int main(){
	
	int l,r;
	scanf("%d %d",&l,&r);
	
	int res=0;
	for(int i=l;i<=r;i++){
		int sum=0,flag=0;
		if(i%7==0){
			flag=1;
			continue;
		}
		else{
			int temp=i;
			while(temp){
				if(temp%10==7){
					flag=1;
					break;
				}
				else{
					sum+=temp%10;
					temp/=10;
				}
			}
			
			if(sum%7==0&&sum!=0){
				flag=1;
			}
		}
		
		if(!flag){
			res+=pow(i,2);
//			res%=MOD;
		}
	}
	
	printf("%d",res);
	return 0;
} 
