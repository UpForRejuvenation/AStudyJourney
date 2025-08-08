#include <stdio.h>
#include <math.h>
double fun(double x[9])
{
	double sum=0;
	for(int i=0;i<8;i++){
		sum+=sqrt((x[i]+x[i+1])/2);
	}
	return sum;
}
int main()
{
	int i;
	double s,a[9];
	for(i=0;i<9;i++)
		scanf("%lf",&a[i]);
	s=fun(a);
	printf("%f\n",s);
}
