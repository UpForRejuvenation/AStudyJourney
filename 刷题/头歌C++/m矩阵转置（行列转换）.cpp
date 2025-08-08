#include <stdio.h>
void fun(int array[3][3])
{	
  //************** code begin **************//
	for(int i=0;i<3;i++){
		for(int j=i;j<3;j++){
			int temp=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=temp;
		}
	}
  // ************** code end ****************//
	
}
int main()
{	int i,j;
	int array[3][3];
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
			scanf("%d",&array[i][j]);
	fun(array);
	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
			printf("%d ",array[i][j]);
		printf("\n");
	}
	return 0;	
}

