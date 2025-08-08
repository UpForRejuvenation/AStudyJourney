#include<stdio.h>
#include<string.h>

#define SIZE 21

typedef struct{
	char name[20];
	int score;
}Stu;
 
int main(){
	Stu stu[SIZE];
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",&stu[i].name,&stu[i].score);
	}
	
	//bubble sort
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(stu[j].score<stu[j+1].score){
				Stu temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
	
	for(int i=1;i<n;i++){
		if(strcmp(stu[i-1].name,stu[i].name)>0 && stu[i-1].score==stu[i].score){
			Stu temp=stu[i-1];
			stu[i-1]=stu[i];
			stu[i]=temp;
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%s %d\n",stu[i].name,stu[i].score);
	}
	
	return 0;
}
