/*------------------------------------------------     
    ע�⣺����Դ����������£�����Ķ�������main������
    �����е��κ����ݣ����� Begin-End ���䲹����롣
---------------------------------------------------*/
#include <stdio.h>
int f[10000];

int search(int n,int *nums,int T){
	/********* Begin *********/
	for(int i=0;i<n;i++){
		if(nums[i]==T){
			return i;
		}
	}
	return -1;
    /********* End *********/
}

int main(){
    int n,T;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&f[i]);
    }
    scanf("%d",&T);
    int result=search(n,f,T);
    printf("%d",result);

    return 0;
}
