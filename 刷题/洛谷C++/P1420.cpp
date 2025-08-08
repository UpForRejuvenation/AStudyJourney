	#include<stdio.h>
	
	int main(){
		
		int n;
		scanf("%d",&n);
		
		int max=0,cnt=1;
		int num,pre=-100;
		for(int i=0;i<n;i++){
			scanf("%d",&num);
			if(num==pre+1){
				cnt++;
			}
			else{
				if(cnt>max){
					max=cnt;
					cnt=1;
				}
			}
			pre=num;
		}
		
		if(max<cnt){
			max=cnt;
		}
		printf("%d",max);
		return 0;
	} 
