#include<stdio.h>
#include<math.h>

#define SIZE 101
#define MOD 2008

int isPrimitive(char* str,int n);

int main(){
	
	int n,cnt=0;
	scanf("%d",&n);
	
	char str[SIZE];
	for(int i=0;i<pow(2,n);i++){
		for(int j=0;j<n;j++){
			str[j]=(i>>j) & 1 ? '1':'0';
		}
		str[n]='\0';
		if(isPrimitive(str,n)){
			cnt++;
		}
	}
	
	printf("%d",cnt%MOD);
	
	return 0;
}

int isPrimitive(char* str,int n){
	
	int isRepeated=1;
	for(int d=1;d<=n/2;d++){
		if(n%d==0){
			isRepeated=1;
			for(int i=0;i<n;i++){
				if(str[i]!=str[i%d]){
					isRepeated=0;
					break;
				}		
			}
		}
		
		if(isRepeated){
			return 0;
		}
	}
	
//	if(isRepeated){
//		return 0;
//	}
//	else{
//		return 1;
//	}
	
	return 1;
}
