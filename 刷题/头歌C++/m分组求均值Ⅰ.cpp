#include <stdio.h>
#define  N  20
#define  M  11
void fun(int *a, int *b)
{
	for(int i=0;i<M;i++){
		b[i]=0;
	}
	
	for(int i=0;i<N;i++){
		if(a[i]>=100){
			b[10]++;
			continue;
		}
		b[a[i]/10]++;
	}
}

int main()
{
	int age[N],i,d[M];
    for(i=0;i<N;i++)
		scanf("%d",&age[i]);;
	fun(age,d);
	for(i=0;i<M;i++)
		printf("%d ",d[i]);
		
	return 0;
}
