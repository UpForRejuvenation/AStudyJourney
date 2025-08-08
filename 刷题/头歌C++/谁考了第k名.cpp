#include<stdio.h>

#define SIZE 100

typedef struct Student{
	long ID;
	float score;
}Stu;

int main(){
	int n =0,k=0;
	scanf("%d %d",&n,&k);
	
	Stu stu[SIZE];
	for(int i=0;i<n;i++){
		scanf("%ld %f",&stu[i].ID,&stu[i].score);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(stu[i].score>stu[j].score){
				Stu temp = stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
	}
	
	printf("%ld %g",stu[k-1].ID,stu[k-1].score);
	return 0;
}
