#include <stdio.h>
/********found********/
double fun(int num){
	double s=0;
	float a=1;
	float b=2;
	for(int i=1;i<=num;i++){
		s+=b/a;
		float c=a;
		a=b;
	


/********found********/
        b+=c;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lf\n",fun(n));
    return 0;
}

