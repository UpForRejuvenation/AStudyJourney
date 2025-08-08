#include<stdio.h>

void fun(int N,int o,int n[][1000]);

int main(){
    int i,N[1000]={0},n[10][1000]={0};
    
    for(i=0;scanf("%d",&N[i])!=EOF;i++)
        for(int j=0;j<N[i];j++){
        	scanf("%d",&n[i][j]);
        }
           
    for(int j=0;j<i;j++)
       fun(N[j],j,n);
    return 0;
}

void fun(int N,int o,int n[][1000]){
    float max=0,sum=0;
    for(int i=0;i<N;i++){
        if(n[o][i]>max) 
			max=n[o][i];
        sum+=n[o][i];
    }
    
    if((sum-max)<=max)
		printf("%.1f\n",sum-max);
    else 
		printf("%.1f\n",sum/2);
}
