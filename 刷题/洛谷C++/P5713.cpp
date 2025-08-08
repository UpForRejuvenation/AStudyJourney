#include<stdio.h>

int main(){
	
	int local,luogu,n;	
	scanf("%d",&n);
	
	local=5*n;
	luogu=11+3*n;
	
	if(local<luogu){
		printf("Local");
	}
	else{
		printf("Luogu");
	}
	return 0;
}
