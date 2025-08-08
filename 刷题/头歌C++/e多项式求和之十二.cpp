#include <stdio.h>
#include <math.h>
/********found********/
double f(double x){
    if(x==0.0||x==2.0)
        return 0.0;
    else if(x<0.0)
        return(x-1)/(x-2);
    else
        return (x+1)/(x-2);
}

double fun(int n){
    int i;
    double s=0.0,y;
    for(i=-n;i<=n;i++){
        y=f(1.0*i);
        s+=y;
    }
    /********found********/
    return s; 
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%lf\n",fun(n));
    return 0;
}

