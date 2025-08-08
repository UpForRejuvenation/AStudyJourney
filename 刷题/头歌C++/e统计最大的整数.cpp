//#include<stdio.h>
//
//int main(){
//	
//	int max;
//	int n=0;
//	scanf("%d",&max);
//	while(scanf("%d",&n)!=EOF){
//		if(max<n) max=n;
//	} 
//	
//	printf("%d",max);
//	return 0;
//} 


#include<stdio.h>
int main(){  
    int maxnum = 0;
    int num = 0;
    while(scanf("%d",&num)!=EOF){
        if(num>maxnum)
            maxnum=num;  
    }  
    printf("%d\n",maxnum);  
    return 0;  
}  
