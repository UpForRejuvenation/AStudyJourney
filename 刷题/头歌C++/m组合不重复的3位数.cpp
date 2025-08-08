#include<stdio.h>
 
void composeNumber(int a, int b, int c, int d);

int main()
{
    // 输入的4个不同数字
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    composeNumber(a, b, c, d);
       
}

// 完成这个函数
void composeNumber(int a, int b, int c, int d) {
    /********* Begin *********/
	int arr[4];
	arr[0]=a,arr[1]=b,arr[2]=c,arr[3]=d;
	for(int i=0;i<4;i++){
		int flag=0;
		for(int j=0;j<4-i-1;j++){
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
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<4;k++){
				if(arr[i]!=arr[j]&&arr[i]!=arr[k]&&arr[j]!=arr[k]){
					printf("%d%d%d\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
    /********* End *********/
}
