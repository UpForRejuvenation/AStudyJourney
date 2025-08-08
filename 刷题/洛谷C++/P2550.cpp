#include<stdio.h>

int prz[7];
void Bubble(int* arr);
int BinSearch(int num);

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<7;i++){
		scanf("%d",&prz[i]);
	}
	
	Bubble(prz);
	
	int getPrz[8]={0};
	while(n){
		int num,cnt=0;
		for(int i=0;i<7;i++){
			scanf("%d",&num);
			if(BinSearch(num)){
				cnt++;
			}
		}
		getPrz[8-cnt-1]++;
		n--;
	}
	
	for(int i=0;i<7;i++){
		printf("%d ",getPrz[i]);
	}
	return 0;
}

void Bubble(int* arr){
	for(int i=0;i<7;i++){
		int flag=0;
		for(int j=0;j<7-i-1;j++){
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
}

int BinSearch(int num){
	int l=0,r=6;
	int mid=(l+r)/2;
	while(l<=r){
		if(num==prz[mid]){
			return 1;
		}
		else if(num<prz[mid]){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
		mid=(l+r)/2;
	}
	return 0;
}
