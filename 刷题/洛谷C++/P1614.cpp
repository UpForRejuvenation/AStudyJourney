#include<stdio.h>

int sad[3030];

int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		scanf("%lld",&sad[i]);
	}
	
	long long min,sum;
	for(int i=0;i<=n-m;i++){
		sum=0;
		for(int j=i;j<i+m;j++){
			sum+=sad[j];
		}
		if(i==0){
			min=sum;
		}
		
		if(min>sum){
			min=sum;
		}
	}
	
	printf("%lld",min);
	return 0;
}
