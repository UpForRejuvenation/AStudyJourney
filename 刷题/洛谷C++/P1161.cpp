#include<stdio.h>

int light[2000010]={0};

int main(){
	
	int n;
	scanf("%d",&n);
	
	while(n){
		
		double a;
		int t;
		scanf("%lf %d",&a,&t);
		
		for(int i=1;i<=t;i++){	
			light[(int)(a*i)]=light[(int)(a*i)]==1?0:1;
		}
		n--;
	}
	
	int len=sizeof(light)/sizeof(int);
	for(int i=1;i<=len;i++){
		if(light[i]==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
