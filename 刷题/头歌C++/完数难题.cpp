#include<stdio.h>
#include<math.h>

int main(){
	int n1=0,n2=0;
	int num=0,sum=0;
	scanf("%d %d",&n1,&n2);
	for(int i=n1;i<=n2;i++){
		sum=0;
		for(int m=1;m<=sqrt(i);m++){
			int temp=i/m;
			if(temp*m==i){
				sum=sum+temp+m;
			}
		}
		if(sum==2*i){
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
