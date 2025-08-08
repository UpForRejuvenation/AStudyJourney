#include<stdio.h>
int main(){
    int n, a, b;
    while(scanf("%d%d%d",&n,&a,&b)!=EOF){
        if(a+b >= n) printf("%d",n-a); 
        else if(a+b < n) printf("%d",b+1);
    }
    return 0;
}
