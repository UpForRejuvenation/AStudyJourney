#include <stdio.h>
/********found********/
double fun(int n){
	
	double s=0;
	int a=2,b=1;
	int c=0;
	for(int i=0;i<n;i++){
	





/********found********/
        s=s+(double)a/b;
        c=a;
        a=a+b;
        b=c;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lf\n",fun(n));
    return 0;
}

