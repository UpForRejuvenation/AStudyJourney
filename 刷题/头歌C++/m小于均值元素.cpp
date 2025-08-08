#include<stdio.h>
#define N 10
double fun(double x[],double *av){
    int i,j;
    double d,s;
    s=0;
    for(i=0;i<N;i++)
		s=s+x[i];
    /**********found**********/
    *av=s/N;
    d=32767;
    for(i=0;i<N;i++)
        if(x[i]<*av&&*av-x[i]<=d){
            /**********found**********/
            d=*av-x[i];
            j=x[i];
        }
    /**********found**********/
    return j;
}
int main(){
    int i;
    double x[N],av,m;
    for(i=0;i<N;i++){
        scanf("%lf",x+i);
    }
    m=fun(x,&av);
    printf("%5.1f",m);
    return 0;
}
