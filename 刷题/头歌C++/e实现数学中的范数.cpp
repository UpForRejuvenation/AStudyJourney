#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
int main(){
	
	int arr[1000];
	int i=0;
	while(scanf("%d",&arr[i])!=EOF) i++;
	
	double sum=0;
	for(int j=0;j<i;j++){
		sum+=pow(arr[j],2);
	}
	printf("%.15f",sqrt(sum));
	return 0;
}
