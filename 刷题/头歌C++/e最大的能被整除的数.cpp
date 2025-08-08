#include<stdio.h>
int main()
{
    // 请在此添加您的代码
    /********** Begin *********/
    int n=0;
    scanf("%d",&n);
    
    int max=1;
    for(int i=1;i<=10000;i++){
    	if(i%n==0&&max<i) max=i;
	}
	printf("%d",max);
    /********** End *********/
    return 0;
}
