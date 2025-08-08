#include<stdio.h>

int num[110][2];
void Bubble(int len);

int main(){
	
	int n;
	scanf("%d",&n);
	

	for(int i=0;i<n;i++){
		scanf("%d",&num[i][0]);
		num[i][1]=0;
	}
	
	Bubble(n);
	
	int cnt=0,flag=0;
	for(int i=2;i<n;i++){
		flag=0;
		for(int j=0;j<i-1;j++){
			for(int k=j+1;k<i;k++){
				if(num[j][0]+num[k][0]==num[i][0]&&num[i][1]!=1){
					cnt++;
					num[i][1]=1;
					flag=1;
					break;
				}
				
				if(num[j][0]+num[k][0]>num[i][0]){
					break;
				}
			}
			if(flag){
				break;
			}	
		}
	}
	
	printf("%d",cnt);
	return 0;
}

void Bubble(int len){
	for(int i=0;i<len;i++){
		int flag=0;
		for(int j=0;j<len-i-1;j++){
			if(num[j][0]>num[j+1][0]){
				int temp=num[j+1][0];
				num[j+1][0]=num[j][0];
				num[j][0]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
}
