#include<stdio.h>

#define SIZE 10001
int main(){
	
	int sq[SIZE][2]={0};
	int sqlen=0;
	char c;
	for(int i=0;c=getchar(),c!=']';i++){
		scanf("[%d,%d]",&sq[i][0],&sq[i][1]);
		sqlen++;			
	}
	
	int arr[SIZE]={0};
	int maxlen=0;
	for(int i=0;i<sqlen;i++){
		if(sq[i][0]>sq[i][1]){
			arr[i]=sq[i][1];	
		}
		else{
			arr[i]=sq[i][0];
		}

		if(arr[i]>maxlen)	maxlen=arr[i];
	}
	
	int cnt=0;
	for(int i=0;i<sqlen;i++){
		if(arr[i]==maxlen){
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
