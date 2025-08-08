#include <stdio.h>
void fun( int a[3][3], int b[3][3])
{
	//************** code begin **************//
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j]=a[i][j]+a[j][i];
		}
}
    // ************** code end ****************//
}
int main( )
{	int a[3][3],t[3][3] ;
	int i,j ;
	for(i=0;i<3;i++) 
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	fun(a,t);	
	for(i=0;i<3;i++) 
	{	for(j=0;j<3;j++)
			printf("%d ", t[i][j]);
		printf("\n") ;
	}
	return 0;
}

