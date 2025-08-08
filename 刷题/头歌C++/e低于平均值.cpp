#include <stdio.h>
#include <string.h>
int fun(int score[],int m, int below[])
{
	float ave=0;
	for(int i=0;i<m;i++){
		ave+=score[i];
	} 
	ave/=m;
	
	int j=0;
	for(int i=0;i<m;i++){
		if(score[i]<ave){
			below[j++]=score[i];
		}
	}
	
	return j;
}
int main()
{	int i,n,below[9];
	int score[9];
	for(i=0;i<9;i++)
		scanf("%d",&score[i]);
	n=fun(score,9,below);
	for(i=0;i<n;i++)
		printf("%d ",below[i]);
    return 0;
}
