#include<stdio.h>
#include<math.h>

int main(){
	
	int n;
	double x;
	scanf("%d %lf",&n,&x);
	
	double q=1;
	int fenmu=1;
	for(int i=1;i<=n;i++){
		fenmu*=i;
		q+=pow(x,i)/fenmu;
	}
	
	printf("%.6f",q);
	return 0;
}
