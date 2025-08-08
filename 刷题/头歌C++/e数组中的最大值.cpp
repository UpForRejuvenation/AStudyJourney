#include<stdio.h>
#include<math.h>

#define SIZE 1001
int main(){
	
	int num[SIZE],n;
	scanf("%d",&n);
	
	int max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]>max&&pow(sqrt(num[i]),2)!=num[i]){
			max=num[i];
		}
	}
	
	printf("%d",max);
	
	return 0;
}
