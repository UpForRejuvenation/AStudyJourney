#include <stdio.h>
#define MAX 100
int fun(int lim,int aa[MAX])
{
	int cnt=0;
	
	int num,sum=0;
	for(int j=2;j<=lim;j++){
		sum=0;
		for(int i=1;i<=j/2;i++){
			if(j%i==0&&j!=0){
				sum+=i;
				sum+=j/i;
			}
		}
		if(sum==j+1){
			aa[cnt]=j;
			cnt++;
		}
	}
	
	return cnt;
}
int main()
{
	int limit,i,sum;
	int aa[MAX];
	scanf("%d",&limit);
	sum=fun(limit,aa);
	for(i=0;i<sum;i++)
		printf("%d ",aa[i]);
	return 0;
}
