#include<stdio.h>

typedef struct{
	char name[100];
	int yuwen;
	int shuxue;
	int yingyu;
}Student;

int main(){
	
	int n;
	scanf("%d",&n);
	Student stu[1000];
	
	int sum,max=0,maxi=0;
	for(int i=0;i<n;i++){	
		scanf("%s %d %d %d",&stu[i].name,&stu[i].yuwen,&stu[i].shuxue,&stu[i].yingyu);
		sum=stu[i].yuwen+stu[i].shuxue+stu[i].yingyu;
		if(max<sum){
			max=sum;
			maxi=i;
		}
	}
	
	printf("%s %d %d %d",stu[maxi].name,stu[maxi].yuwen,stu[maxi].shuxue,stu[maxi].yingyu);
	
	return 0;
}
