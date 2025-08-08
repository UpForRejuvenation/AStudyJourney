#include<stdio.h>

int main(){
	
	int n,k;
	scanf("%d %d",&n,&k);
	
	double sumn=0,sumk=0;
	int cntn=0,cntk=0;
	for(int i=1;i<=n;i++){
		if(i%k==0){
			sumk+=i;
			cntk++;
		}
		else{
			sumn+=i;
			cntn++;
		}
	}
	
	printf("%.1f %.1f",sumk/cntk,sumn/cntn);
	return 0;
}
