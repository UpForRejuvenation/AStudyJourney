#include<stdio.h>

typedef struct{
	int value;
	int num;
}Vehicle;

Vehicle arr[60];
int n;

void Bubble(Vehicle arr[]);
int main(){
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d %d",&arr[i].value,&arr[i].num);
	}
	
	Bubble(arr);
	
	int cpt=0,sw=0,pnt=n-1;
	while(pnt>=0){
		
		while(cpt>sw){
			sw+=arr[pnt].value;
			arr[pnt].num--;
			if(arr[pnt].num==0){
				pnt--;
			}
			
			if(pnt==-1){
				break;
			}
		}
		
		if(arr[pnt].num!=0){
			cpt+=arr[pnt].value;
			arr[pnt].num--;
		}
		
		pnt=arr[pnt].num==0? pnt-1:pnt;
	}
	
	printf("%d %d",cpt,sw);
	return 0;
} 

void Bubble(Vehicle arr[]){
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j].value>arr[j+1].value){
				Vehicle temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
}
