#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

typedef struct{
	int chinese;
	int math;
	int english;
	int sum;
}Student;

int main(){
	
	int n;
	scanf("%d",&n);
	
	Student stu[1010];
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].chinese,&stu[i].math,&stu[i].english);
		stu[i].sum=stu[i].chinese+stu[i].math+stu[i].english;
	}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int cgap=abs(stu[i].chinese-stu[j].chinese);
			int mgap=abs(stu[i].math-stu[j].math);
			int egap=abs(stu[i].english-stu[j].english);
			int sgap=abs(stu[i].sum-stu[j].sum);
			if(cgap<=5&&mgap<=5&&egap<=5&&sgap<=10){
				cnt++;
			}
		}
	}
	
	printf("%d",cnt);
	return 0;
}
