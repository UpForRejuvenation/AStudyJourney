#include<stdio.h>
#include<math.h>
int main(){
	
	int n;
	scanf("%d",&n);
	
	double arr[50];
	arr[0]=0,arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	printf("%.2lf",arr[n]);
	return 0;
}
