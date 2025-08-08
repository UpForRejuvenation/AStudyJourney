#include <stdio.h>
float fun ( float *a,int n)
{
	float sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	} 
	return sum/n;
}
int main()
{
	int i;
	float score[5],aver;
	for(i=0;i<5;i++)
		scanf("%f",&score[i]);
	aver=fun(score,5);
	printf("%5.2f\n",aver);
	return 0;
}













