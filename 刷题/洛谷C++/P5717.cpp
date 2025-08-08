#include<stdio.h>

int main(){
	
	int arr[3];
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<3;i++){
		int flag=0;
		for(int j=0;j<3-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
	
	int n1=arr[0],n2=arr[1],n3=arr[2];
	
	if(n1+n2<=n3||n2+n3<=n1||n1+n3<=n2){
		printf("Not triangle\n");
		return 0;
	}
	
	if(n1*n1+n2*n2==n3*n3){
		printf("Right triangle\n");	
	}
	else if(n1*n1+n2*n2>n3*n3){
		printf("Acute triangle\n");
	}
	else if(n1*n1+n2*n2<n3*n3){
		printf("Obtuse triangle\n");
	}
	
	if(n1==n2||n1==n3||n2==n3){
		printf("Isosceles triangle\n");
	}
	if(n1==n2&&n1==n3){
		printf("Equilateral triangle\n");
	}
	return 0;
}
