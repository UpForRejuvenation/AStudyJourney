#include<stdio.h>
#include<stdlib.h>

#define SIZE 1001
int arr[SIZE]={100001},len=0;
void deleteArr(int num);
int main(){
	

	while(getchar()!=']'){
		scanf("%d",&arr[len]);
		len++;
	}
	
	for(int i=0;i<len;i++){
		if(arr[i]>0){
			if(arr[i+1]>=0){
				continue;
			}
			else{
				if(arr[i]+arr[i+1]>0){
					arr[i+1]=0;
					deleteArr(i+1);
					i=-1;
				}
				else if(arr[i]+arr[i+1]<0){
					arr[i]=0;
					deleteArr(i);
					i=-1;
				}
				else{
					arr[i]=0;
					arr[i+1]=0;
					deleteArr(i);
					deleteArr(i+1);					
				}
			}
		}
		else{//arr[i]<0
				continue;		
		}
	}
	
	//output
	printf("[");
	for(int i=0;i<len;i++){
		printf("%d",arr[i]);
		if(i<len-1){
			printf(", ");
		}
	}
	printf("]");
	return 0;
}

void deleteArr(int num){
	for(int i=len-1;i>num;i--){
		arr[i-1]=arr[i];
	}
	len--;
}
