#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char name[100];
	int yuwen;
	int shuxue;
	int yingyu;
	int sum;
}Student;

Student stu[1000];
int n;

void Bubble();

int main(){

	scanf("%d",&n);
	for(int i=0;i<n;i++){	
		scanf("%s %d %d %d",&stu[i].name,&stu[i].yuwen,&stu[i].shuxue,&stu[i].yingyu);
		stu[i].sum=stu[i].yuwen+stu[i].shuxue+stu[i].yingyu;
	}
	
//	Bubble();
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(stu[i].sum-stu[j].sum)<=10&&abs(stu[i].yingyu-stu[j].yingyu)<=5&&abs(stu[i].yuwen-stu[j].yuwen)<=5&&abs(stu[i].shuxue-stu[j].shuxue)<=5){
				printf("%s %s\n",stu[i].name,stu[j].name);
			}
		}
	}
	return 0;
}

//void Bubble(){
//	for(int i=0;i<n;i++){
//		int flag=0;
//		for(int j=0;j<n-i-1;j++){
//			if(stu[j].sum>stu[j+1].sum){
//				Student temp=stu[j];
//				stu[j]=stu[j+1];
//				stu[j+1]=temp;
//				flag=1;
//			}
//		}
//		if(!flag){
//			break;
//		}
//	}
//}
